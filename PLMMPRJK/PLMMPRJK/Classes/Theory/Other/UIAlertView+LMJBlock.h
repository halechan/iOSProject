//
//  UIAlertView+LMJBlock.h
//  PLMMPRJK
//
//  Created by HuXuPeng on 2017/4/14.
//  Copyright © 2017年 GoMePrjk. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIAlertView (LMJBlock)


- (void)showWithBlock:(void(^)(NSInteger index))alertBlock;


@end