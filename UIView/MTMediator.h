//
//  MTMediator.h
//  iOSNav
//
//  Created by shibin on 16/5/17.
//  Copyright © 2016年 啾三万. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface MTMediator : NSObject

+ (instancetype)sharedInstance;

// 远程App调用入口
- (id)performActionWithUrl:(NSURL *)url completion:(void(^)(NSDictionary *info))completion;
// 本地组件调用入口
- (id)performTarget:(NSString *)targetName action:(NSString *)actionName params:(NSDictionary *)params;

@end
