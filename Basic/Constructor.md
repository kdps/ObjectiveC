## 1. Basic

```C
int function (int i) {
  return square_root(i);
}
```

```objective-c
- (int)method:(int)i {
  return [self square_root:i];
}
```

## 2. Multiple Arguments

```objective-c
- (void)changeColorToRed:(float)red green:(float)green blue:(float)blue {
    //... Implementation ...
}

//Called like so:
[myColor changeColorToRed:5.0 green:2.0 blue:6.0];
```
