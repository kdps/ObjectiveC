## 1. []

Call method

a->method(); => [a method];

obj->method(argument); -> [obj method:argument];

```objective-c
[object method];
[object methodWithInput:input];

output = [object methodWithOutput];

[NSString stringWithFormat:[prefs format]];
```

## 2. id

Promotion

void pointer

```objective-c
id myObject = [NSString string];
```

## 3. : 

[] Arguments

```objective-c
[myData writeToFile:@"/tmp/log.txt" atomically:NO];
```

## 4. .

```objective-c
photo.caption = @"Hello World";
```

## 5. @

Type hint -> Variables


## 6.+,-

\+ : Class Method, - : Instance Method
