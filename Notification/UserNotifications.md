## 1. How to use

1. Add to header

```objective-c
#import <UserNotifications/UserNotifications.h>
```

2. Registry when app is started

```objective-c
UNUserNotificationCenter *center = [UNUserNotificationCenter currentNotificationCenter];
 [center requestAuthorizationWithOptions:(UNAuthorizationOptionBadge | UNAuthorizationOptionSound | UNAuthorizationOptionAlert)
            completionHandler:^(BOOL granted, NSError * _Nullable error) {
             if (!error) {
              NSLog(@"requestAuthorizationWithOptions ok");
             }
            }]; 
```

3. Run UserNotifications

```objective-c
if( [UIApplication sharedApplication].applicationState != UIApplicationStateActive )
 {
  UNMutableNotificationContent *content = [[UNMutableNotificationContent alloc] init];
  content.title = [NSString localizedUserNotificationStringForKey:@"TestPushKit" arguments:nil];
  content.body = [NSString localizedUserNotificationStringForKey:@"New Call from 01012345678"
                             arguments:nil];
  content.sound = [UNNotificationSound defaultSound];
  
  // If you want change badge
  //content.badge = @([[UIApplication sharedApplication] applicationIconBadgeNumber] + 1); 

  UNNotificationRequest *request = [UNNotificationRequest requestWithIdentifier:@"New Call"
                                     content:content trigger:nil]; 

  UNUserNotificationCenter *center = [UNUserNotificationCenter currentNotificationCenter];
  [center addNotificationRequest:request withCompletionHandler:^(NSError * _Nullable error) {
   if (!error) {
    NSLog(@"addNotificationRequest ok");
   }
  }];
 }
 else
 {
  NSLog(@"app is active");
 }
```
