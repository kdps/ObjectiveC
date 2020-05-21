## 1. Get file list in main bundle

```objective-c
NSString *path = [[NSBundle mainBundle] bundlePath];
NSArray *list = [[NSFileManager defaultManager] contentsOfDirectoryAtPath:path error:nil];
NSLog(@"%@", list);
```

## 2. Get file list in main bundle with specify extension

```objective-c
NSString *path = [[NSBundle mainBundle] bundlePath];
NSArray *list = [[NSFileManager defaultManager] contentsOfDirectoryAtPath:path error:nil];
NSArray *onlyJPG = [list filteredArrayUsingPredicate:[NSPredicate predicateWithFormat:@"SELF ENDSWITH '.jpg'"]];
NSLog(@"%@", onlyJPG);
```

## 3. Get documents file list

```objective-c
NSString *path = [NSString stringWithFormat:@"%@/Documents/", NSHomeDirectory()];
NSArray *list = [[NSFileManager defaultManager] contentsOfDirectoryAtPath:path error:nil];
NSLog(@"%@", list);
```

## 4. Get file list in sub directory

```objective-c
- (NSString *)findSubDirectory {
    NSFileManager *fileManager = [NSFileManager defaultManager];
    NSString *path = [[[NSBundle mainBundle] bundlePath] stringByAppendingPathComponent:@"image"];;
    NSArray *list = [fileManager subpathsOfDirectoryAtPath:path error:nil];
    for (NSString *string in list) {
        BOOL isDir = NO;
        [fileManager fileExistsAtPath:[path stringByAppendingPathComponent:string] isDirectory:&isDir];
        if (isDir) {
            NSLog(@"%@", string);
        }
    }
    
    return nil;
}
```

## 5. Get main bundle path

```objective-c
NSString * bundlePath = [[NSBundle mainBundle] resourcePath];
```
