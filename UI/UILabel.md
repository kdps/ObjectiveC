# 1. Apply underline

```objective-c
UILabel *label=[[UILabel alloc]initWithFrame:CGRectMake(0, 0, 320, 480)];
label.backgroundColor=[UIColor lightGrayColor];
NSMutableAttributedString *attributedString;
attributedString = [[NSMutableAttributedString alloc] initWithString:@"Apply Underlining"];
[attributedString addAttribute:NSUnderlineStyleAttributeName value:@1 range:NSMakeRange(0, [attributedString length])];
[label setAttributedText:attributedString];
```

# 2. Apply shadow to font

```objective-c
label1.layer.shadowOffset = CGSizeMake(3, 3);
label1.layer.shadowOpacity = 0.7;
label1.layer.shadowRadius = 2;
```

# 3. Change background color

```objective-c
label.backgroundColor = [UIColor redColor];
```

# 4. Set maximum line

```objective-c
label.numberOfLines = 2;
```

```objective-c
label.numberOfLines = 0;
```

`Unlimited`
