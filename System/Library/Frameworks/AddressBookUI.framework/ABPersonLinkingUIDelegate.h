/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABPersonLinkingUIDelegate
@required
-(BOOL)shouldAllowLinkingAnotherContact;
-(long long)numberOfLinkedCardRows;
-(id)sourceNameForCardAtRow:(long long)arg1;
-(id)personNameForCardAtRow:(long long)arg1;
-(BOOL)manuallyUnlinkCardAtRow:(long long)arg1;
-(BOOL)canUnlinkCardAtRow:(long long)arg1;
-(BOOL)manuallyLinkPerson:(id)arg1;
-(BOOL)shouldAllowLinkingPersonWithRecordID:(int)arg1;
-(id)newPersonViewControllerForLinkedCardAtRow:(long long)arg1;
-(id)newPeoplePickerForLinking;

@end
