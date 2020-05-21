# 1. When user begin editing

```objective-c
self.mnemonicField.delegate=self; 

@interface YourViewController : ViewController<UITextFieldDelegate>
```

`You should add this`

```objective-c
- (void)textFieldDidBeginEditing:(UITextField *)textField
{
    NSLog(@"The did begin edit method was called");
    [self animateTextField: textField up: YES];
}
```

# 2. When user end editing

```objective-c
- (void)textFieldDidEndEditing:(UITextField *)textField
{
    [self animateTextField: textField up: NO];
}
```

# 3. Only accept specify word

```objective-c
#define ACCEPTABLE_CHARACTERS @"0123456789 ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"


- (BOOL)textField:(UITextField *)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString *)string {
      NSCharacterSet *cs = [[NSCharacterSet characterSetWithCharactersInString:ACCEPTABLE_CHARACTERS] invertedSet];
      NSString *filtered = [[string componentsSeparatedByCharactersInSet:cs] componentsJoinedByString:@""];

      return [string isEqualToString:filtered];
}
```
