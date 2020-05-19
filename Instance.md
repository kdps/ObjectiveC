## 1. No parameter

```objective-c
MyObject *foo = [[MyObject alloc] init];
```

## 2. With parameter

```objective-c
MyObject *foo = [[MyObject alloc] initWithString:myString];
```

## 3. Initialize function

```objective-c
- (id)init {
    self = [super init];
    if (self) {
        // perform initialization of object here
    }
    return self;
}
```
