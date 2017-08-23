//
//  TKWeChatPluginConfig.h
//  WeChatPlugin
//
//  Created by TK on 2017/4/19.
//  Copyright © 2017年 tk. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface TKWeChatPluginConfig : NSObject

@property (nonatomic, assign) BOOL preventRevokeEnable;             /**<    是否开启防撤回    */
@property (nonatomic, copy) NSMutableArray *autoReplyModels;        /**<    远程控制的数组    */
@property (nonatomic, copy) NSMutableArray *remoteControlModels;    /**<    远程控制的数组    */

- (void)saveAutoReplyModels;
- (void)saveRemoteControlModels;

+ (instancetype)sharedConfig;

@end
