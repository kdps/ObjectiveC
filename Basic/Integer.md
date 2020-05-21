## 1. Format

```objective-c
NSNumberFormatter * numFormatter = [[NSNumberFormatter alloc] init];
[numFormatter setNumberStyle:NSNumberFormatterDecimalStyle];
int value = 1000;
NSString * price = [NSString stringWithFormat:@"%@", [numFormatter stringFromNumber:[NSNumber numberWithInt:value]]];
```
