/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:33 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MFComposeRecipient.h>

@class CRRecentContact;

@interface MFRecentComposeRecipient : MFComposeRecipient {

	CRRecentContact* _recent;

}
-(id)placeholderName;
-(id)preferredSendingAddress;
-(id)initWithRecentContact:(id)arg1 ;
-(id)recentContact;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(BOOL)isGroup;
-(BOOL)isRemovableFromSearchResults;
@end
