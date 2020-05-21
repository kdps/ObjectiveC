## 1. Get permission state

```objective-c
CLAuthorizationStatus status = [CLLocationManager authorizationStatus];

switch (status) {
    case kCLAuthorizationStatusNotDetermined:
        //The user hasn't yet chosen whether your app can use location services or not.

        break;

    case kCLAuthorizationStatusAuthorizedAlways:
        //The user has let your app use location services all the time, even if the app is in the background.

        break;

    case kCLAuthorizationStatusAuthorizedWhenInUse:
        //The user has let your app use location services only when the app is in the foreground.

        break;

    case kCLAuthorizationStatusRestricted:
        //The user can't choose whether or not your app can use location services or not, this could be due to parental controls for example.
        break;

    case kCLAuthorizationStatusDenied:
        //The user has chosen to not let your app use location services.

        break;

    default:
        break;
}
```
