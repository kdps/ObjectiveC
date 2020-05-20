## 1. Alert

```objective-c
UIAlertController* alert = [UIAlertController alertControllerWithTitle:@""
                                                               message:@"Alert"
                                                        preferredStyle:UIAlertControllerStyleAlert];

UIAlertAction* defaultAction = [UIAlertAction actionWithTitle:@"YES" style:UIAlertActionStyleDefault
                                                       handler:^(UIAlertAction * action) {
                                                       
                                                       }];
                                                       
UIAlertAction* defaultAction2 = [UIAlertAction actionWithTitle:@"NO" style:UIAlertActionStyleDefault
                                                      handler:^(UIAlertAction * action) {
                                                      }];
                                                      
[alert addAction:defaultAction];
[alert addAction:defaultAction2];
[self presentViewController:alert animated:YES completion:nil];
```
