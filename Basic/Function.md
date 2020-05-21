## 1. Open settings

```objective-c
[[UIApplication sharedApplication] openURL:[NSURL URLWithString:UIApplicationOpenSettingsURLString]];
```

## 2. Open browser

```objective-c
[[UIApplication sharedApplication] openURL:[NSURL URLWithString:@"http://www.stackoverflow.com"]];
```

## 3. Share contents

```objective-c
NSArray* sharedObjects=[NSArray arrayWithObjects:@"sharecontent",  nil];
UIActivityViewController *activityViewController = [[UIActivityViewController alloc] initWithActivityItems:sharedObjects applicationActivities:nil];
activityViewController.popoverPresentationController.sourceView = self.view;
[self presentViewController:activityViewController animated:YES completion:nil];
```

## 4. Open email

* Deprecated *
```objective-c
NSURL *url = [NSURL URLWithString:@"mailto://azimov@demo.com"];
if ([[UIApplication sharedApplication] canOpenURL:url]) {
    [[UIApplication sharedApplication] openURL:url];
} else {
    NSLog(@"Cannot open URL");
}
```

```objective-c
NSURL *url = [NSURL URLWithString:@"mailto://azimov@demo.com"];
if ([[UIApplication sharedApplication] canOpenURL:url]) {
    NSString * url = @"mailto://azimov@demo.com";
    [[UIApplication sharedApplication] openURL:url options:@{} completionHandler:^(BOOL bSuccess) {

    }];
} else {
    NSLog(@"Cannot open URL");
}
```

## 5. Hide status bar

```objective-c
[[UIApplication sharedApplication] setStatusBarHidden:YES withAnimation:UIStatusBarAnimationFade]
```
