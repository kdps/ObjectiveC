## 1. UIApplication.sharedApplication.delegate.window

```objective-c
UIWindow *mainWindow = [[UIApplication sharedApplication].delegate window];
```

`The window to use when presenting a storyboard. This property contains the window used to present the app’s visual content on the device’s main screen.`

`스토리 보드를 제시 할 때 사용할 창입니다. 이 속성에는 기기의 메인 화면에 앱의 시각적 콘텐츠를 표시하는 데 사용되는 창이 포함됩니다.`

## 2. UIApplication.sharedApplication.keyWindow

```objective-c
UIWindow *mainWindow = [[UIApplication sharedApplication].keyWindow];
```

`This property holds the UIWindow object in the windows array that is most recently sent the makeKeyAndVisible message.`

## 3. Get rootViewController

```objective-c
IViewController * viewController = [[[[UIApplication sharedApplication] delegate] window] rootViewController];
```
