# 1. Get storyboard instance

```objective-c
UIStoryboard* storyBoard = [UIStoryboard storyboardWithName:@"Storyboard" bundle:[NSBundle mainBundle]];
```

# 2. Get view controller

```objective-c
MyViewController *myViewController = [storyboard instantiateViewControllerWithIdentifier:@"MyViewControllerIdentifier"];
```
