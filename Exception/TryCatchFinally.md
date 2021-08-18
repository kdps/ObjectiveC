```ObjectiveC
NSString *test = @"test";
 unichar a;
 int index = 5;
    
 @try {
    a = [test characterAtIndex:index];
 }
 @catch (NSException *exception) {
    NSLog(@"%@", exception.reason);
    NSLog(@"Char at index %d cannot be found", index);
    NSLog(@"Max index is: %lu", [test length] - 1);
 }
 @finally {
    NSLog(@"Finally condition");
 }
```
