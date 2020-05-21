# 1. Center Alert

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

## 3. With destructive

```objective-c
UIAlertController *alertController = [UIAlertController alertControllerWithTitle:@"Destructive" message:@"Simple alertView demo with Destructive and OK." preferredStyle:UIAlertControllerStyleAlert];
UIAlertAction *destructiveAction = [UIAlertAction actionWithTitle:@"Cancel" style:UIAlertActionStyleDestructive handler:^(UIAlertAction * action) {
    NSLog(@"Destructive");
}];
UIAlertAction *okAction = [UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDefault handler:^(UIAlertAction * action) {
    NSLog(@"OK");
}];

[alertController addAction:destructiveAction];
[alertController addAction:okAction];
[self presentViewController:alertController animated: YES completion: nil];
```

# 2. Bottom Alert

## 1. Alert

```objective-c
UIAlertController *alertController = [UIAlertController alertControllerWithTitle:@"Demo" message:@"A demo with two buttons" preferredStyle:UIAlertControllerStyleActionSheet];
UIAlertAction *cancelAction = [UIAlertAction actionWithTitle:@"Cancel" style:UIAlertActionStyleCancel handler:^(UIAlertAction * action) {
        //action when pressed button
    }];

UIAlertAction * okAction = [UIAlertAction actionWithTitle:@"Okay" style:UIAlertActionStyleDefault handler:^(UIAlertAction * action) {
        //action when pressed button
    }];

[alertController addAction:cancelAction];
[alertController addAction:okAction];

[self presentViewController:alertController animated: YES completion: nil];
```
