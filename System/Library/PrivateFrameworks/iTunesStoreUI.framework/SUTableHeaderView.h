/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, UILabel, NSString, UIFont;

@interface SUTableHeaderView : UIView {

	UIColor* _bottomBorderColor;
	UIEdgeInsets _edgeInsets;
	long long _index;
	long long _style;
	UILabel* _subtitleLabel;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UIColor * bottomBorderColor;              //@synthesize bottomBorderColor=_bottomBorderColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                  //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic) long long index;                          //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor; 
@property (assign,nonatomic) long long style;                          //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) UIFont * subtitleFont; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) UIFont * titleFont; 
@property (nonatomic,retain) UIColor * textColor; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(long long)style;
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)sizeToFit;
-(void)setStyle:(long long)arg1 ;
-(UIColor *)shadowColor;
-(NSString *)subtitle;
-(UIColor *)textColor;
-(long long)index;
-(void)setSubtitle:(NSString *)arg1 ;
-(UIFont *)titleFont;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIFont *)subtitleFont;
-(void)setIndex:(long long)arg1 ;
-(void)setBottomBorderColor:(UIColor *)arg1 ;
-(UIColor *)bottomBorderColor;
-(void)setSubtitleFont:(UIFont *)arg1 ;
-(void)setTitleFont:(UIFont *)arg1 ;
@end
