//
//  LZAccount.h
//  HiPDA
//
//  Created by leizh007 on 15/3/21.
//  Copyright (c) 2015年 leizh007. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LZAccount : NSObject

+(id)sharedAccount;
-(BOOL)checkIfThereIsAValidAccount;
-(id)getAccountInfo;

@end
