//
//  LZHThreadTableViewCell.h
//  HiPDA V2
//
//  Created by leizh007 on 15/4/26.
//  Copyright (c) 2015年 leizh007. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MGSwipeTableCell.h"

@class LZHThread;

@interface LZHThreadTableViewCell : MGSwipeTableCell//UITableViewCell

-(id)configureThread:(LZHThread *)thread;

+(CGFloat)cellHeightForThread:(LZHThread *)thread;

@end
