# 1. Asyncronized

# 1.1 Concurrent dispatch queue

```objective-c
dispatch_async(dispatch_queue_create("Foo", DISPATCH_QUEUE_CONCURRENT), ^{
});
```

`OUT-OF-ORDER`

# 1.2 Serial dispatch queue (stack queue)

```objective-c
dispatch_async(dispatch_queue_create("Foo", NULL), ^{
});
```

`IN-OF-ORDER`
