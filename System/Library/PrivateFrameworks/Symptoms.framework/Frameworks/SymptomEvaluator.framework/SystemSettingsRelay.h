/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:02 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class NSObject, NSArray;

@interface SystemSettingsRelay : NSObject {

	NSObject*<OS_dispatch_queue> queue;
	CTServerConnectionRef _serverConnection;
	BOOL _wifiEnabled;
	BOOL _airplaneMode;
	BOOL _cellDataEnabled;
	BOOL _rnfEnabled;
	NSArray* _wifiKnownNetworkSSIDs;

}

@property (readonly) NSArray * wifiKnownNetworkSSIDs;              //@synthesize wifiKnownNetworkSSIDs=_wifiKnownNetworkSSIDs - In the implementation block
@property (readonly) BOOL wifiEnabled;                             //@synthesize wifiEnabled=_wifiEnabled - In the implementation block
@property (readonly) BOOL airplaneMode;                            //@synthesize airplaneMode=_airplaneMode - In the implementation block
@property (readonly) BOOL cellDataEnabled;                         //@synthesize cellDataEnabled=_cellDataEnabled - In the implementation block
@property (readonly) BOOL rnfEnabled;                              //@synthesize rnfEnabled=_rnfEnabled - In the implementation block
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)defaultRelay;
-(BOOL)airplaneMode;
-(void)dealloc;
-(id)init;
-(BOOL)wifiEnabled;
-(void)_setAirplaneMode:(BOOL)arg1 ;
-(BOOL)rnfEnabled;
-(BOOL)cellDataEnabled;
-(void)_serverConnectionCallback:(CFStringRef)arg1 info:(CFDictionaryRef)arg2 reference:(void*)arg3 ;
-(void)_setWifiEnabled:(BOOL)arg1 ;
-(void)_setCellDataEnabled:(BOOL)arg1 ;
-(void)_setRnfEnabled:(BOOL)arg1 ;
-(void)grabKnownWiFiNetworks;
-(NSArray *)wifiKnownNetworkSSIDs;
@end
