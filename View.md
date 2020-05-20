## 1. Get device width

```objective-c
CGFloat width = [UIScreen mainScreen].bounds.size.width;
long lWidth = (long) width;
    
NSMutableString *mWidth = [NSMutableString stringWithFormat:@"%ld", lWidth];
```
