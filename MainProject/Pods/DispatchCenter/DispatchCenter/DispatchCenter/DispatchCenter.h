//
//  DispatchCenter.h
//  DispatchCenter
//
//  Created by Minos on 17/3/24.
//  Copyright © 2017年 Minos. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface DispatchCenter : NSObject

+ (instancetype)sharedInstance;

// 远程App调用入口
- (id)performActionWithUrl:(NSURL *)url completion:(void(^)(NSDictionary *info))completion;
// 本地组件调用入口
- (id)performTarget:(NSString *)targetName action:(NSString *)actionName params:(NSDictionary *)params shouldCacheTarget:(BOOL)shouldCacheTarget;
- (void)releaseCachedTargetWithTargetName:(NSString *)targetName;

@end
