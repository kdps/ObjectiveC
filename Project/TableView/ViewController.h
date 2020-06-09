#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDataSource,
UITableViewDelegate> {

    __weak IBOutlet UITableView *myTable;
    NSArray *myDataArray;
}


@end
