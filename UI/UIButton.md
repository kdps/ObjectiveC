## 1. Disabled

```objective-c
myButton.enabled = NO;
```

## 2. Set background image

```objective-c
[self.button setImage:[UIImage imageNamed:@"test-image"] forState:UIControlStateNormal];
```

## 3. Set background image on state

```objective-c
[self.button setImage:[UIImage imageNamed:@"test-image"] forState:UIControlStateSelected|UIControlStateHighlighted];
```

## 4. Set font family

```objective-c
myButton.titleLabel.font = [UIFont fontWithName:@"YourFontName" size:20];
```

## 5. Align contents

```objective-c
//Align contents to the left
button.contentHorizontalAlignment = UIControlContentHorizontalAlignmentLeft;

//Align contents to the right
button.contentHorizontalAlignment = UIControlContentHorizontalAlignmentRight;

//Align contents to the center
button.contentHorizontalAlignment = UIControlContentHorizontalAlignmentCenter;

//Align contents to fill the frame
button.contentHorizontalAlignment = UIControlContentHorizontalAlignmentFill;
```

## 6. Add event without storyboard

```objective-c
-(void) someButtonAction{
    NSLog(@"Button is tapped");

}

[yourButtonInstance addTarget:self action:@selector(someButtonAction) forControlEvents:UIControlEventTouchUpInside];
```
