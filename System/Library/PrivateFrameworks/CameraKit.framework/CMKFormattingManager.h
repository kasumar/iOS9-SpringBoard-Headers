/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:33 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CMKFormattingManager : NSObject {

	BOOL _wantsCustomKerning;
	BOOL _supportsVerticalText;

}

@property (nonatomic,readonly) BOOL wantsCustomKerning;                //@synthesize wantsCustomKerning=_wantsCustomKerning - In the implementation block
@property (nonatomic,readonly) BOOL supportsVerticalText;              //@synthesize supportsVerticalText=_supportsVerticalText - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)_commonCMKFormattingManagerInitialization;
-(BOOL)wantsCustomKerning;
-(BOOL)supportsVerticalText;
@end

