## 1. String Format

```objective-c
NSString * format = [NSString stringWithFormat:@"%@s World", @"Hello"];
```

`String`

```objective-c
int k = 0x8f << 2;
id format = [NSString stringWithFormat:@"%d", k];
NSLog (fm);
```

`Integer`

## 2. Equality

```objective-c
if ( [@"Hello" isEqualToString:@"Hello"] ) {
    NSLog(@"World");
} else {
    NSLog(@"Hello");
}
```

## 3. Substring

```objective-c
NSString * strStartTime = @"20150102030405";
NSString * strYear = [strStartTime substringWithRange:NSMakeRange(0, 4)];
```

## 4. Use utf-8 string

```objective-c
[NSString stringWithUTF8String:"utf-8 string"];
```

## 5. startWith

```objective-c
if( [strTest hasPrefix:@"tel:"] )
{
} 
```

## 6. Contains

```objective-c
if( [strNumber containsString:@"1234"] )
{
}
```