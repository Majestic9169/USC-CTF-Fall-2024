# Tommy's Artventures

> psst.. i found the secret key used by the Tommy's Artventures flask server!
> our next mission shall be to heist the flag >:)

this probably took me the longest

basically we are given the secret key for a flask server. what flask does is it creates
a session cookie with a header.timestamp.signature form. The header is just standard
data encrypted in base64, but the timestamp and signature are encrypted using the secret key

in the website, we were asked to first create an account, then login. Once in there
was an option called curate,  which was only for the `admin` user. So basically our
goal was to forge a cookie to make the server think we were `admin`.

changing the header is really easy because it's just base64, but it's the signature part that's difficulty.

thankfully i found this [great resource](https://terryvogelsang.tech/MITRECTF2018-my-flask-app/#decode-flask-cookie-datas)

the above article provided a script to sign cookies exactly the same way that flask does it. 
going into the firefox and changing the contents of the cookie and then reloading did the trick :)

```
CYBORG{oce4n5_auth3N71ca7i0N}
```
