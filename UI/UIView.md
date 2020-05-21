## 1. Shake

```objective-c
CABasicAnimation *shake = [CABasicAnimation animationWithKeyPath:@"position"];
[shake setDuration:0.1];
[shake setRepeatCount:2];
[shake setAutoreverses:YES];
[shake setFromValue:[NSValue valueWithCGPoint:
                         CGPointMake(lockImage.center.x - 5,lockImage.center.y)]];
[shake setToValue:[NSValue valueWithCGPoint:
                       CGPointMake(lockImage.center.x + 5, lockImage.center.y)]];
[lockImage.layer addAnimation:shake forKey:@"position"];
```
