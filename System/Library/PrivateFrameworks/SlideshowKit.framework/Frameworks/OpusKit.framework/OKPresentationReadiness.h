/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:43 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OKPresentationReadiness <NSObject>
@required
-(BOOL)isReady:(BOOL)arg1;
-(void)notifyWhenBecomesReady:(/*^block*/id)arg1;
-(double)readyProgress:(BOOL)arg1;
-(void)removeAllReadyNotifications;

@end
