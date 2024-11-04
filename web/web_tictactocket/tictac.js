(function() {
  var gameId = null; // Variable to store the game ID
  var socket = io(); // Initialize the socket connection

  // Function to update the status message on the webpage
  function updateStatus(message) {
    document.getElementById('status').innerText = message;
  }

  // Function to check if a square is valid for placing a move
  function checkSquareValidity(squareIndex) {
    if (gameId == null) return; // Exit if game ID is not set
    socket.emit('client_check_square_valid', { 'game_id': gameId, 'square': squareIndex });
  }

  // Function to place a square (X or O) on the board
  function placeSquare(response) {
    if (gameId == null) return; // Exit if game ID is not set
    if (response.is_valid) {
      socket.emit('client_place_square', { 'game_id': gameId, 'square': response.square });
    } else {
      updateStatus('Cannot place square there'); // Show error message
    }
  }

  // Function to update the game board and status based on server response
  function updateBoard(gameState) {
    if (gameId == null) return; // Exit if game ID is not set
    if (!gameState.is_valid) {
      updateStatus('Game doesn\'t exist; try refresh the page');
      return;
    }

    // Update the board display
    for (var i = 0; i < 9; i++) {
      var symbol = gameState.board[i] === 0 ? 'X' : gameState.board[i] === 1 ? 'O' : '';
      document.getElementById('ttt' + i).innerText = symbol;
    }

    // Update the status based on whose turn it is
    if (gameState.turn === 0) {
      updateStatus('Your turn');
    } else if (gameState.turn === 1) {
      updateStatus('Computer is thinking...');
    }

    // Check for a winner or tie
    if (gameState.winner === 0) {
      updateStatus(gameState.flag);
      gameId = null; // Reset game ID
      return;
    }
    if (gameState.winner === 1) {
      updateStatus('You lose...');
      gameId = null; // Reset game ID
      return;
    }
    if (gameState.winner === 3) {
      updateStatus('Tie.');
      gameId = null; // Reset game ID
      return;
    }
  }

  // Function to set up click event listeners for the game squares
  function setupSquareListeners() {
    for (var i = 0; i < 9; i++) {
      document.getElementById('ttt' + i).addEventListener('click', (function(index) {
        return function() {
          checkSquareValidity(index);
        };
      })(i));
    }
  }

  // Function to handle socket events
  function setupSocketListeners() {
    socket.on('connect', function() {
      socket.emit('client_new_game'); // Request to start a new game
    });

    socket.on('server_new_game', function(data) {
      gameId = data.game_id; // Store the new game ID
    });

    socket.on('server_check_square_valid', placeSquare); // Handle square validity response
    socket.on('server_board_update', updateBoard); // Handle board update response
  }

  // Initialize the game when the window loads
  window.onload = function() {
    setupSquareListeners(); // Set up click listeners for squares
    setupSocketListeners(); // Set up socket event listeners
  };
})();

