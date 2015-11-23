/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:13 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIColor;

@interface MusicDownloadStatusSashView : UIView {

	UIImageView* _sashImageView;
	UIImageView* _deviceImageView;
	long long _deviceType;

}

@property (nonatomic,retain) UIColor * deviceTintColor; 
+(id)sashViewForDeviceType:(long long)arg1 ;
+(id)sashViewForRunningDeviceType;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateForTraitCollection:(id)arg1 ;
-(UIColor *)deviceTintColor;
-(id)sashTintColor;
-(void)setDeviceTintColor:(UIColor *)arg1 ;
-(void)setSashTintColor:(id)arg1 ;
@end
