## 1. Recursive Blocks

```objective-c
- (void)alert:(NSString *)messsage title:(NSString *)titleMsg okMsg:(NSString *)okMsg cancelMsg:(NSString *)cancelMsg {
    
    UIAlertController * alert=   [UIAlertController
                                  alertControllerWithTitle:titleMsg
                                  message:@"Alert"
                                  preferredStyle:UIAlertControllerStyleAlert];
     
    __block void (^okAction)(UIAlertAction *) = [^void (UIAlertAction * action)
    {
        [alert dismissViewControllerAnimated:YES completion:nil];
    } copy];
    
    __block void (^cancelAction)(UIAlertAction *) = [^void (UIAlertAction * action)
    {
        [alert dismissViewControllerAnimated:YES completion:nil];
    } copy];
    
    
    UIAlertAction* ok = [UIAlertAction
                         actionWithTitle:okMsg
                         style:UIAlertActionStyleDefault
                         handler:okAction];
    
    UIAlertAction* cancel = [UIAlertAction
                             actionWithTitle:cancelMsg
                             style:UIAlertActionStyleDefault
                             handler:cancelAction];
     
    [alert addAction:ok];
    [alert addAction:cancel];
     
    [self presentViewController:alert animated:YES completion:nil];
}
```

## 2. Variable Readonly

```objective-c
void (^test)(void) = ^(void) {
    NSString * world = [[NSString alloc]init];
    world = [fString stringByAppendingFormat:@"World"];

    [self alert:@"Alert" title:@"test" okMsg:@"Hello" cancelMsg:world];
};

test();
```
