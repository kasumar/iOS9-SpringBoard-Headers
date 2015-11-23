/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:15 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIButton, NSOrderedSet, UIView;

@interface PLPhotoSmilesCommentCell : UITableViewCell {

	BOOL _showUserLikes;
	BOOL _isVideo;
	BOOL _showsSmileButton;
	BOOL _usesCompactSeparators;
	UILabel* _smileContentLabel;
	UIButton* _smileImageButton;
	NSOrderedSet* _userLikes;
	UIView* _styledSeparatorView;

}

@property (nonatomic,retain,readonly) UIButton * smileImageButton;               //@synthesize smileImageButton=_smileImageButton - In the implementation block
@property (assign,nonatomic) BOOL showUserLikes;                                 //@synthesize showUserLikes=_showUserLikes - In the implementation block
@property (nonatomic,copy) NSOrderedSet * userLikes;                             //@synthesize userLikes=_userLikes - In the implementation block
@property (assign,nonatomic) BOOL isVideo;                                       //@synthesize isVideo=_isVideo - In the implementation block
@property (assign,nonatomic) BOOL showsSmileButton;                              //@synthesize showsSmileButton=_showsSmileButton - In the implementation block
@property (assign,nonatomic) BOOL usesCompactSeparators;                         //@synthesize usesCompactSeparators=_usesCompactSeparators - In the implementation block
@property (nonatomic,retain,readonly) UILabel * smileContentLabel;               //@synthesize smileContentLabel=_smileContentLabel - In the implementation block
@property (nonatomic,retain,readonly) UIView * styledSeparatorView;              //@synthesize styledSeparatorView=_styledSeparatorView - In the implementation block
+(double)heightOfSmileCellWithComments:(id)arg1 forWidth:(double)arg2 isVideo:(BOOL)arg3 forInterfaceOrientation:(long long)arg4 ;
+(id)_smileStringForComments:(id)arg1 ;
+(id)_attributedStringForComments:(id)arg1 color:(id)arg2 isVideo:(BOOL)arg3 ;
-(void)setShowsSmileButton:(BOOL)arg1 ;
-(void)setShowUserLikes:(BOOL)arg1 ;
-(void)setUserLikes:(NSOrderedSet *)arg1 ;
-(void)setIsVideo:(BOOL)arg1 ;
-(void)setUsesCompactSeparators:(BOOL)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(BOOL)isVideo;
-(UIButton *)smileImageButton;
-(void)_updateContent;
-(BOOL)usesCompactSeparators;
-(UILabel *)smileContentLabel;
-(BOOL)showUserLikes;
-(NSOrderedSet *)userLikes;
-(BOOL)showsSmileButton;
-(UIView *)styledSeparatorView;
@end
