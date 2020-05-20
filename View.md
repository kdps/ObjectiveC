## 1. Get devices rect sizes of screen

```objective-c
CGFloat width = [UIScreen mainScreen].bounds.size.width;
              //[[UIScreen mainScreen] bounds].size.height;
long lWidth = (long) width;
    
NSMutableString *mWidth = [NSMutableString stringWithFormat:@"%ld", lWidth];
```

## 2. Get view rect sizes

```objective-c
CGFloat width = self.tvTest.bounds.size.height;
```
