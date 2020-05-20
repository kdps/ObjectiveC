## 1. Get device rect size

```objective-c
CGFloat width = [UIScreen mainScreen].bounds.size.width;
              //[[UIScreen mainScreen] bounds].size.height;
long lWidth = (long) width;
    
NSMutableString *mWidth = [NSMutableString stringWithFormat:@"%ld", lWidth];
```
