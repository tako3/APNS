//
//  TKPush.m
//
//  Copyright (c) 2014 tako3
//  This software is released under the MIT License
//
//

#import "TKPush.h"

@implementation TKPush

+ (void)requestDeviceToken
{
    [TKPush requestDeviceToken:UIRemoteNotificationTypeBadge|UIRemoteNotificationTypeSound|UIRemoteNotificationTypeAlert];
}

+ (void)requestDeviceToken:(UIRemoteNotificationType)notificationType
{
    [[UIApplication sharedApplication] registerForRemoteNotificationTypes:notificationType];
}


+ (NSString *)convertNSDataDeviceTokenToNSString:(NSData *)deviceToken
{
    NSString *tokenStr = [[deviceToken description] stringByReplacingOccurrencesOfString:@"<" withString:@""];
    tokenStr = [tokenStr stringByReplacingOccurrencesOfString:@">" withString:@""];
    tokenStr = [tokenStr stringByReplacingOccurrencesOfString: @" " withString: @""];
    
    return tokenStr;
}

@end
