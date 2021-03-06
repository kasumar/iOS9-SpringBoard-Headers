/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:42 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/CKTranscriptCell.h>

@class UIButton;

@interface CKTranscriptMessageCell : CKTranscriptCell {

	BOOL _wantsContactImageLayout;
	UIButton* _failureButton;

}

@property (assign,nonatomic) BOOL wantsContactImageLayout;              //@synthesize wantsContactImageLayout=_wantsContactImageLayout - In the implementation block
@property (assign,nonatomic) BOOL failed; 
@property (nonatomic,retain) UIButton * failureButton;                  //@synthesize failureButton=_failureButton - In the implementation block
+(double)failureButtonWidthPlusSpacing;
-(void)dealloc;
-(id)description;
-(id)contactImageView;
-(UIButton *)failureButton;
-(void)setWantsContactImageLayout:(BOOL)arg1 ;
-(BOOL)failed;
-(void)setFailed:(BOOL)arg1 ;
-(BOOL)wantsContactImageLayout;
-(void)layoutSubviewsForContents;
-(void)setFailureButton:(UIButton *)arg1 ;
@end

