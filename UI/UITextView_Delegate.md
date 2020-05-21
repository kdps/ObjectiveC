# 1. When contents changed

```objective-c
- (void)textViewDidChange:(UITextView *)textView{
    NSLog(@"textViewDidChange:");
}
```

# 2. When changed selection status

```objective-c
- (void)textViewDidChangeSelection:(UITextView *)textView{
    NSLog(@"textViewDidChangeSelection:");
}
```

