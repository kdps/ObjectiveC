## 1. Write file to specify path

```objective-c
NSString *str = @"Hello World";
NSString *dirPath = @"/Users/username/Desktop";
NSString *filePath = [dirPath stringByAppendingPathComponent:@"helloworld.txt"];

__autoreleasing NSError *error;
BOOL ret = [str writeToFile:filePath atomically:YES encoding:NSUTF8StringEncoding error:&error];
```
