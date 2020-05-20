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
