/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:40 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol PKPaymentSetupPrivacyFooterViewDelegate;
@class UIColor, UITextView, NSString;

@interface PKPaymentSetupPrivacyFooterView : UIView <UITextViewDelegate> {

	id<PKPaymentSetupPrivacyFooterViewDelegate> _delegate;
	UIColor* _messageColor;
	UIColor* _linkColor;
	UITextView* _message;
	long long _context;

}

@property (assign,nonatomic) id<PKPaymentSetupPrivacyFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) UIColor * messageColor;                                              //@synthesize messageColor=_messageColor - In the implementation block
@property (nonatomic,copy) UIColor * linkColor;                                                 //@synthesize linkColor=_linkColor - In the implementation block
@property (nonatomic,retain) UITextView * message;                                              //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) long long context;                                                 //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pk_applyAppearance:(PKAppearanceSpecifier*)arg1 ;
-(id)pk_childrenForAppearance;
-(void)setMessageColor:(UIColor *)arg1 ;
-(void)setLinkColor:(UIColor *)arg1 ;
-(id)_linkTextAttributes;
-(id)_defaultMessageColor;
-(id)_defaultLinkColor;
-(void)_reloadMessage;
-(UIColor *)messageColor;
-(UIColor *)linkColor;
-(void)setDelegate:(id<PKPaymentSetupPrivacyFooterViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<PKPaymentSetupPrivacyFooterViewDelegate>)delegate;
-(long long)context;
-(UITextView *)message;
-(void)setMessage:(UITextView *)arg1 ;
-(void)setContext:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 context:(long long)arg2 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(id)_textAttributes;
@end

