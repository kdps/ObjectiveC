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

# 5. Change font attributes

## 5.1 Initialize

```objective c
UILabel *label = [[UILabel alloc] init];
or
UILabel *label = [UILabel new]; // convenience method for calling alloc-init
```

## 5.2 Change font size

```objective-c
label.font = [UIFont systemFontOfSize:17];
```

## 5.3 Change font weight

```objective-c
label.font = [UIFont systemFontOfSize:17 weight:UIFontWeightBold];
```

## 5.4 Change dynamic font style

```objective-c
label.font = [UIFont preferredFontForTextStyle:UIFontTextStyleBody];
```

## 5.5 Change font family

```objective-c
label.font = [UIFont fontWithName:@"Avenir" size:15];
```

## 5.6 Overwrite font size

```objective-c
label.font = [label.font fontWithSize:15];
```

## 6. Change contents

```objective-c
[label setText:@"the new text"];
```

```objective-c
[label setText: stringVar];
```
