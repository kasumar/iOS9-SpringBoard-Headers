/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:04 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/CNQuickPropertyAction.h>

@interface CNQuickFaceTimeAction : CNQuickPropertyAction {

	BOOL _audioOnly;

}

@property (assign,nonatomic) BOOL audioOnly;              //@synthesize audioOnly=_audioOnly - In the implementation block
+(id)defaultFaceTimeAudioTitle;
+(id)defaultFaceTimeTitle;
-(id)_coreDuetInteractionMechanisms;
-(id)_coreDuetValue;
-(void)performWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)titleForContext:(long long)arg1 ;
-(id)subtitleForContext:(long long)arg1 ;
-(unsigned long long)score;
-(id)category;
-(id)identifier;
-(void)setAudioOnly:(BOOL)arg1 ;
-(BOOL)audioOnly;
@end

