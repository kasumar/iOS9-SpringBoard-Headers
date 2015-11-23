/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:15 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIButton, UIView;

@interface PLPhotoPostCommentCell : UITableViewCell {

	BOOL _wantsEntryInCell;
	UILabel* _contentLabel;
	UIButton* _addCommentButton;
	UIView* _styledSeparatorView;

}

@property (nonatomic,retain,readonly) UIButton * addCommentButton;               //@synthesize addCommentButton=_addCommentButton - In the implementation block
@property (assign,nonatomic) BOOL wantsEntryInCell;                              //@synthesize wantsEntryInCell=_wantsEntryInCell - In the implementation block
@property (nonatomic,retain,readonly) UILabel * contentLabel;                    //@synthesize contentLabel=_contentLabel - In the implementation block
@property (nonatomic,retain,readonly) UIView * styledSeparatorView;              //@synthesize styledSeparatorView=_styledSeparatorView - In the implementation block
+(double)heightForWidth:(double)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIButton *)addCommentButton;
-(void)setupContent;
-(UIView *)styledSeparatorView;
-(id)_commentPostPlaceholder;
-(UILabel *)contentLabel;
-(BOOL)wantsEntryInCell;
-(void)setWantsEntryInCell:(BOOL)arg1 ;
@end
