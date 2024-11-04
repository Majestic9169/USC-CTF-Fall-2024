import numpy

m = 57983


def reverse_churn(encoded_message):
    # Split the hex string into a list of integers
    hex_values = encoded_message.split()
    values = [int(value, 16) for value in hex_values]

    # Rearrange the list to reverse the churn operation
    values = values[16:] + values[:16]

    # Shift right instead of left
    return list(map(shift_right, values))


def shift_right(value):
    return value >> 3


def reverse_butter(values):
    return list(map(divide_by_p, values))


def divide_by_p(value):
    # Since we are working with modulo, we need to find the modular inverse of p
    # This is a bit tricky; we can use the Extended Euclidean Algorithm to find it
    # For simplicity, we assume p is coprime with m
    if numpy.gcd(p, m) == 1:
        return (value * pow(p, -1, m)) % m
    else:
        return 0


def reverse_pop(values):
    return ''.join(map(xor_with_42_reverse, values))


def xor_with_42_reverse(value):
    return chr(value ^ 42)


def decode(encoded_message):
    # Reverse the steps
    values_after_churn = reverse_churn(encoded_message)
    print(values_after_churn)
    # values_after_butter = reverse_butter(values_after_churn)
    # original_message = reverse_pop(values_after_butter)
    # return original_message


    # Example usag
encoded_message = open("message2.txt").read().strip()
decoded_message = decode(encoded_message)
# try:
#     print(decoded_message)
# except Exception:
#     pass
