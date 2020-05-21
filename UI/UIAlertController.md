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

## 2. Alert with input text

```objective-c
UIAlertController * alertController = [UIAlertController alertControllerWithTitle: @"Login"
                                                                              message: @"Input username and password"
                                                                          preferredStyle:UIAlertControllerStyleAlert];
[alertController addTextFieldWithConfigurationHandler:^(UITextField *textField) {
    textField.placeholder = @"name";
    textField.textColor = [UIColor blueColor];
    textField.clearButtonMode = UITextFieldViewModeWhileEditing;
    textField.borderStyle = UITextBorderStyleRoundedRect;
}];
[alertController addTextFieldWithConfigurationHandler:^(UITextField *textField) {
    textField.placeholder = @"password";
    textField.textColor = [UIColor blueColor];
    textField.clearButtonMode = UITextFieldViewModeWhileEditing;
    textField.borderStyle = UITextBorderStyleRoundedRect;
    textField.secureTextEntry = YES;
}];
[alertController addAction:[UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
    NSArray * textfields = alertController.textFields;
    UITextField * namefield = textfields[0];
    UITextField * passwordfiled = textfields[1];
    NSLog(@"%@:%@",namefield.text,passwordfiled.text);

}]];
[self presentViewController:alertController animated:YES completion:nil];
```
