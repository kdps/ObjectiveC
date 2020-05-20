# 1. Change font family

```objective-c
//System Font
textView.font = [UIFont systemFontOfSize:12];

//Font of your choosing
textView.font = [UIFont fontWithName:@"Font Name" size:12];
```

# 2. Check that content is empty

```objective-c
if (self.textView.text.length > 0){
    // Do stuff for text
}   else {
    // Do stuff for nil text or empty string
}
```

# 3. Change text color

```objective-c
textView.textColor = [UIColor redColor];
```

# 4. Change align attribute

```objective-c
textView.textAlignment = NSTextAlignmentLeft;
```
