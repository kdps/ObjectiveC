## 1. Get 90 days ago date

```objective-c
NSDate *currentDate = [NSDate date];
    
NSDate *currentDate = [NSDate date];
    
NSLog(@"Base          : %@", currentDate);

NSDateComponents *comps = [[[NSDateComponents alloc] init]
                           autorelease];

[comps setDay:-90];

NSCalendar *calendar;
calendar = [[[NSCalendar alloc]
            initWithCalendarIdentifier:NSGregorianCalendar]
            autorelease];

NSDate *date;
date = [calendar dateByAddingComponents:comps
                                 toDate:currentDate
                                options:0];

NSLog(@"Before 90days : %@", date);
```

## 2. Get current date

```objective-c
NSDate *date = [NSDate date];
NSLog(@"%@", date);
```
