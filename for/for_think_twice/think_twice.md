# think_twice

> Think twice before you drive to the EXIT(F)!!!
> Note: the flag format for this challenge is Cyb0rg{}, with a zero as the 0

```
exiftool metadata.png
```

output has an interesting piece of metadata
```
Software                        : UTNsaU1ISm5lMDFqUTJGeWRHaDVmU0E9
```

which decodes to give the flag

```
From_Base64('A-Za-z0-9+/=',true,false)
From_Base64('A-Za-z0-9+/=',true,false)
```

the name is clever because we use base64 twice, good thing cyberchef caught that. I probably wouldn't have

in cyberchef gives

```
Cyb0rg{McCarthy}
```

