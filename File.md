## 1. Write file to specify path

```objective-c
NSString *str = @"Hello World";
NSString *dirPath = @"/Users/username/Desktop";
NSString *filePath = [dirPath stringByAppendingPathComponent:@"helloworld.txt"];

__autoreleasing NSError *error;
BOOL ret = [str writeToFile:filePath atomically:YES encoding:NSUTF8StringEncoding error:&error];
```
## 2. Read contents of specify file

```objective-c
NSString *str = @"Hello World";
NSString *dirPath = @"/Users/username/Desktop";
NSString *filePath = [dirPath stringByAppendingPathComponent:@"helloworld.txt"];

__autoreleasing NSError *error;
    NSString *readContents = [NSString stringWithContentsOfFile:filePath encoding:NSUTF8StringEncoding error:&error];
```
