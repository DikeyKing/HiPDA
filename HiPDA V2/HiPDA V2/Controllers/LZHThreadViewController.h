//
//  LZHThreadViewController.h
//  HiPDA V2
//
//  Created by leizh007 on 15/4/25.
//  Copyright (c) 2015年 leizh007. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LZHThreadViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>

-(void)handleNotification:(NSNotification *)notification;

@end
