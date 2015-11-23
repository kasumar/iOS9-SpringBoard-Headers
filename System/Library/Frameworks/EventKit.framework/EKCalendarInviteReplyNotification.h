/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:16 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKCalendarNotification.h>

@interface EKCalendarInviteReplyNotification : EKCalendarNotification {

	unsigned long long _status;
	unsigned long long _allowedEntityTypes;

}

@property (assign,nonatomic) unsigned long long status;                          //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) unsigned long long allowedEntityTypes;              //@synthesize allowedEntityTypes=_allowedEntityTypes - In the implementation block
-(BOOL)supportsDisplay;
-(id)titleStringWithOptions:(unsigned long long)arg1 ;
-(id)messageStringForDescriptionWithOptions:(unsigned long long)arg1 ;
-(id)messageStringsForDescriptionWithOptions:(unsigned long long)arg1 ;
-(void)setAllowedEntityTypes:(unsigned long long)arg1 ;
-(id)inviteReplyNotificationFromEventStore:(id)arg1 ;
-(unsigned long long)allowedEntityTypes;
-(id)initWithType:(long long)arg1 ;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1 ;
@end
