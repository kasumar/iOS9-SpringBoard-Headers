/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:07 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/AUAudioUnitRemoteViewProtocol.h>

@class AURemoteExtensionContext, NSString;

@interface AUAudioUnitViewService : UIViewController <AUAudioUnitRemoteViewProtocol> {

	AURemoteExtensionContext* _extensionContext;

}

@property (assign) AURemoteExtensionContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)connectToContextWithSessionID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setExtensionContext:(AURemoteExtensionContext *)arg1 ;
-(void)_connectChildView:(/*^block*/id)arg1 ;
-(AURemoteExtensionContext *)extensionContext;
-(void)loadView;
-(id)exportedInterface;
-(id)remoteViewControllerInterface;
@end
