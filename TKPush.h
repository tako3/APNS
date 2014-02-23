//
//  TKPush.h
//
//  Copyright (c) 2014 tako3
//  This software is released under the MIT License
//
//

#import <Foundation/Foundation.h>

@interface TKPush : NSObject


/**
 * 
 * @desc This method request device token with remote push notification type of
 *       UIRemoteNotificationTypeBadge|UIRemoteNotificationTypeSound|UIRemoteNotificationTypeAlert
 *
 */
+ (void)requestDeviceToken;


/**
 *
 * @desc This method requests device token for remote push notification.
 *       If device token is registered successfully 
 *       application:didRegisterForRemoteNotificationsWithDeviceToken: 
 *       method will be called. 
 *       Otherwise, application:didFailToRegisterForRemoteNotificationsWithError:
 *       method will be called.
 *
 *
 * @param notificationType UIRemoteNotificationType 
 * (ex: UIRemoteNotificationTypeBadge|UIRemoteNotificationTypeSound|UIRemoteNotificationTypeAlert)
 *
 * @return void
 *
 */
+ (void)requestDeviceToken:(UIRemoteNotificationType)notificationType;


/**
 *
 * @desc This method converts NSData type of device token to NSString
 *
 * @caution This method uses NSData description method which depends on how description works
 *
 * @param deviceToken NSData type of device token
 * @return NSString type of device token
 *
 */
+ (NSString *)convertNSDataDeviceTokenToNSString:(NSData *)deviceToken;


@end
