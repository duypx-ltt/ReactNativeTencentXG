//
//  ReactNativeTencentXG.h
//  ReactNativeTencentXG
//
//  Created by Kitt Hsu on 2/26/16.
//  Copyright © 2016 Kitt Hsu. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <React/RCTBridgeModule.h>

@interface TencentXG : NSObject <RCTBridgeModule>

+ (void)didRegisterUserNotificationSettings:(UIUserNotificationSettings *)notificationSettings;
+ (void)didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken;
+ (void)didFailToRegisterForRemoteNotificationsWithError:(NSError *)error;
+ (void)didReceiveRemoteNotification:(NSDictionary *)notification tap:(BOOL)tap;
+ (void)didReceiveLocalNotification:(UILocalNotification *)notification tap:(BOOL)tap;

@property NSString* account;

@end
