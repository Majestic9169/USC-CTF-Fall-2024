# iRobots

> Can you get to the flag?

inspect element shows that the password is hardcoded as `as1m0v` but we don't really need that

go to the `/robots.txt` path to find 

```
User-agent: *
Disallow: /hidden/flag.txt
```

following the given route gives the flag 
```
CYBORG{robots_txt_is_fun}
```
