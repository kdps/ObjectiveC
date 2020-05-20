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

## 3. Generate UUID

```objective-c
+ (NSString *)randomUUID {
    if(NSClassFromString(@"NSUUID")) { // only available in iOS >= 6.0
        return [[NSUUID UUID] UUIDString];
    }
    CFUUIDRef uuidRef = CFUUIDCreate(kCFAllocatorDefault);
    CFStringRef cfuuid = CFUUIDCreateString(kCFAllocatorDefault, uuidRef);
    CFRelease(uuidRef);
    NSString *uuid = [((__bridge NSString *) cfuuid) copy];
    CFRelease(cfuuid);
    return uuid;
}
```

## 4. Get identifier of provider vendor

```objective-c
NSString *UDIDString = [[[UIDevice currentDevice] identifierForVendor] UUIDString];
```
