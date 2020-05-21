## 1. Initialize

```objective-c
NSDictionary *dict = [[NSDictionary alloc] initWithObjectsAndKeys:@"value1", @"key1", @"value2", @"key2", nil];
```

## 2. Array key, value

```objective-c
NSArray *keys = [NSArray arrayWithObjects:@"key1", @"key2", nil];
NSArray *objects = [NSArray arrayWithObjects:@"value1", @"value2", nil];
NSDictionary *dictionary = [NSDictionary dictionaryWithObjects:objects 
                                                       forKeys:keys];
```

## 3. Literal

```objective-c
NSDictionary *dict = @{@"key": @"value", @"nextKey": @"nextValue"};
```

## 4. Check has key

```objective-c
NSDictionary *dict = [NSDictionary dictionaryWithObjectsAndKeys:@"name1", @"Sam",@"name2", @"Sanju",nil];

if (dict[@"name1"] != nil) {
} else {  
}
```
