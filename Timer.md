## 1. Interval

```objective-c
NSTimer *timer = [NSTimer scheduledTimerWithTimeInterval:5.0 target:self selector:@selector(doSomething) userInfo:nil repeats:NO];
```

## 2. Invalidate

```objective-c
[timer invalidate];
```

## 3. Fire

```objective-c
[timer fire];
```

## 4. Call method when timer interval is ended

```objective-c
NSTimer* timer = [NSTimer scheduledTimerWithTimeInterval:1.0
                                                  target:self
                                                selector:@selector(iGotCall:)
                                                userInfo:@"i am iOS guy" repeats:YES];
```

## 5. Scheduler

```objective-c
NSTimer.scheduledTimerWithTimeInterval(3.0, target: self, selector: Selector(self.timerMethod()), userInfo: nil, repeats: false)
```
