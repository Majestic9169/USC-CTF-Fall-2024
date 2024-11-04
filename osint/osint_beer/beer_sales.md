# beer sales

> In August 2024, a lot of beer was sold in Orlando, Florida. But how much, exactly? Lucky for us, they left the exact number on a PDF on an open FTP server! Include the total number of gallons of beer.
> For example: CYBORG{712931.12}
> UPDATE: Due to the FTP server going down, you may submit the URL of the PDF as the flag.
> For example: CYBORG{example.com/dir/report.pdf}

i was too late so i didn't see the amount in gallons, but i found the ftp server using google operators

resource: [https://www.cybrary.it/blog/advanced-google-dorking-commands](https://www.cybrary.it/blog/advanced-google-dorking-commands)
resource: [https://gist.github.com/sundowndev/283efaddbcf896ab405488330d1bbc06](https://gist.github.com/sundowndev/283efaddbcf896ab405488330d1bbc06)
resource for ftp: [https://www.aware-online.com/en/osint-tutorials/find-open-ftp-servers/](https://www.aware-online.com/en/osint-tutorials/find-open-ftp-servers/)

search for 
```
inurl: FTP-inurl: (http | https) beer sales orlando august 2024
```
or anything like that and you get 

```
CYBORG{ftp://www.flgov.com/pub/llweb/Beer4.pdf}
```
