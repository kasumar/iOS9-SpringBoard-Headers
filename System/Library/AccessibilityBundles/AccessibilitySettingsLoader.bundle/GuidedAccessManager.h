/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:43 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/AccessibilitySettingsLoader.bundle/AccessibilitySettingsLoader
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface GuidedAccessManager : NSObject {

	id _notificationToken;

}

@property (nonatomic,retain) id notificationToken;              //@synthesize notificationToken=_notificationToken - In the implementation block
+(void)initializeMonitoring;
-(void)_loadRequiredBundles;
-(void)_loadSpringboardServerBundle;
-(BOOL)_isValidClientApp;
-(void)_loadClientBundle;
-(void)dealloc;
-(id)init;
-(id)notificationToken;
-(void)setNotificationToken:(id)arg1 ;
@end

