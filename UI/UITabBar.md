## Delegate

UITabBarDelegate

## Function

```objective-c
-(void)tabBar:(UITabBar *)tabBar didSelectItem:(UITabBarItem *)item
{
    if(item.tag==1)
    {
        NSLog(@"testtest1");
    }
    else
    {
        NSLog(@"testtest2");
    }
}
```
