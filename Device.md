## 1. Get version

```objective-c
NSString *version = [[UIDevice currentDevice] systemVersion]
```

## 2. Compare version

```objective-c
NSString *version = @"3.1.3"; 
NSString *currentVersion = @"3.1.1";
NSComparisonResult result = [currentVersion compare:version options:NSNumericSearch];
switch(result){
  case: NSOrderedAscending:
        //less than the current version
  break;
  case: NSOrderedDescending:
  case: NSOrderedSame:
       // equal or greater than the current version
  break;
}
```
