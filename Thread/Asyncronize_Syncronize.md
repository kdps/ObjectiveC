# 1. Asyncronized

## 1.1 Concurrent dispatch queue

```objective-c
dispatch_async(dispatch_queue_create("Foo", DISPATCH_QUEUE_CONCURRENT), ^{
});
```

`OUT-OF-ORDER`

## 1.2 Serial dispatch queue (stack queue)

```objective-c
dispatch_async(dispatch_queue_create("Foo", NULL), ^{
});
```

`IN-OF-ORDER`

## 1.3 Execute from main thread

```objective-c
dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
    //Perform expensive tasks
    //...

    //Now before updating the UI, ensure we are back on the main thread
    dispatch_async(dispatch_get_main_queue(), ^{
        label.text = //....
    });
}
```

# 2. Syncronized

## Asleep for other thread

```objective-c
dispatch_group_t preapreWaitingGroup = dispatch_group_create();
```

```objective-c
dispatch_group_enter(preapreWaitingGroup);
[self doAsynchronousTaskWithComplete:^(id someResults, NSError *error) { 
    // Notify that this task has been completed.
    dispatch_group_leave(preapreWaitingGroup);  
}]
```

```objective-c
dispatch_group_notify(preapreWaitingGroup, dispatch_get_main_queue(), ^{
    // This block will be executed once all above threads completed and call dispatch_group_leave
    NSLog(@"Prepare completed. I'm readyyyy");
});
```
