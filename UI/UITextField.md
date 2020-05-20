# 1. Always toUpper first word

```objective-c
textField.autocapitalizationType = UITextAutocapitalizationTypeNone;
``

# 2. Hide keyboard when pressed back button

```objective-c
- (BOOL)textFieldShouldReturn:(UITextField *)textField {
   [textField resignFirstResponder];
   return true;
}
```

# 3. Initialize text field

```objective-c
CGRect *frame = CGRectMake(0, 0, 100, 100);
UITextField *textField = [[UITextField alloc] initWithFrame:frame];
```
