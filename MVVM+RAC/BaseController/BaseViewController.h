//
//  BaseViewController.h
//  MVVM+RAC
//
//  Created by 许须耀 on 2019/11/13.
//  Copyright © 2019 许须耀. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BaseViewController : UIViewController<BaseTableViewDelegate>
/* listTab */
@property (nonatomic, strong) BaseTableView *listTab;

@end

NS_ASSUME_NONNULL_END
