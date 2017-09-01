//
//  ZegoAVKitManager.h
//  LiveDemo
//
//  Copyright © 2015年 Zego. All rights reserved.
//

#pragma once

#import <ZegoLiveRoom/ZegoLiveRoom.h>

typedef enum : NSUInteger {
    ZegoAppTypeUDP      = 0,    // 国内版
    ZegoAppTypeI18N     = 1,    // 国际版
    ZegoAppTypeCustom   = 2,    // 自定义
} ZegoAppType;

@interface ZegoInstantTalk : NSObject

+ (ZegoLiveRoomApi *)api;
+ (void)releaseApi;

+ (void)setCustomAppID:(uint32_t)appid sign:(NSString *)sign;
+ (uint32_t)appID;

+ (void)setUsingTestEnv:(bool)testEnv;
+ (bool)usingTestEnv;

+ (bool)usingAlphaEnv;

+ (bool)usingExternalRender;

+ (void)setRequireHardwareAccelerated:(bool)hardwareAccelerated;
+ (bool)requireHardwareAccelerated;

+ (void)setAppType:(ZegoAppType)type;
+ (ZegoAppType)appType;

+ (NSData *)zegoAppSignFromServer;

+ (NSString *)customAppSign;

@end

@interface ZegoInstantTalk (Alpha)
+ (void)setUsingAlphaEnv:(bool)alphaEnv;
@end
