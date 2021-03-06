/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKEventEditItem.h>

@interface EKEventPrivacyLevelInlineEditItem : EKEventEditItem {

	BOOL _originalSwitchState;
	BOOL _currentSwitchState;

}
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(void)refreshFromCalendarItemAndStore;
-(BOOL)isInline;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(BOOL)requiresReconfigurationOnCommit;
-(BOOL)shouldAppearWithVisibility:(int)arg1 ;
-(BOOL)forceTableReloadOnCommit;
-(double)footerHeightForWidth:(double)arg1 ;
-(void)_switchChanged:(id)arg1 ;
-(id)footerTitle;
@end

