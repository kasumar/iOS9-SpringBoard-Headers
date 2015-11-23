/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:43 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class OKPageViewController;


@protocol OKWidgetProtocol <NSObject>
@property (assign,nonatomic) OKPageViewController * pageViewController; 
@optional
-(void)updateWithMotionTiltRotationX:(double)arg1 tiltRotationY:(double)arg2 tiltRotationZ:(double)arg3;
-(void)updateWithParallaxTranslationX:(double)arg1 translationY:(double)arg2;

@required
-(BOOL)prepareForDisplay;
-(void)applyLayoutSettings;
-(void)setNeedsApplySettings;
-(void)applySettingsIfNeeded;
-(void)setPageViewController:(id)arg1;
-(BOOL)prepareForWarmup;
-(BOOL)prepareForUnload;
-(void)prepareForReload;
-(void)setNeedsPrepare;
-(void)prepareForMode:(unsigned long long)arg1;
-(void)prepareForRefresh;
-(OKPageViewController *)pageViewController;

@end
