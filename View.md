https://books.google.co.kr/books?id=1eA2RGmEcSYC&pg=PA473&lpg=PA473&dq=%22%5B%5Bself+navigationController%5D+pushViewController%22&source=bl&ots=cioQl3w4E1&sig=ACfU3U1MwG1KblDC5IyXyKiCgY_iwLAAZQ&hl=ko&sa=X&ved=2ahUKEwitv8uZ68PpAhVSFqYKHSRUC_c4ChDoATACegQICRAB#v=onepage&q&f=true

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
