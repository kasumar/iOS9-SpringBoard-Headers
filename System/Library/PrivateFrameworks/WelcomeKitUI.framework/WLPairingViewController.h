/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:14 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WelcomeKitUI/WLWelcomeGroupViewController.h>

@class WLSourceDevicesController, NSString, UILabel, UIButton;

@interface WLPairingViewController : WLWelcomeGroupViewController {

	WLSourceDevicesController* _sourceDevicesController;
	NSString* _pairingCode;
	NSString* _ssid;
	NSString* _wifiPSK;
	UILabel* _pairingCodeView;
	UILabel* _explanationView;
	UIButton* _wifiInfoButton;

}
-(void)dealloc;
-(void)loadView;
-(id)initWithSourceDevicesController:(id)arg1 pairingCode:(id)arg2 wifiPSK:(id)arg3 ssid:(id)arg4 metrics:(id)arg5 ;
-(void)wifiInfoTapped:(id)arg1 ;
-(void)showDirectConnectionUI;
@end
