/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:05 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNContactFilter.h>

@class NSSet;

@interface CNContactStoreFilter : CNContactFilter {

	BOOL _isServerFilter;
	NSSet* _groupIdentifiers;
	NSSet* _containerIdentifiers;

}

@property (nonatomic,retain) NSSet * groupIdentifiers;                  //@synthesize groupIdentifiers=_groupIdentifiers - In the implementation block
@property (nonatomic,retain) NSSet * containerIdentifiers;              //@synthesize containerIdentifiers=_containerIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL showsEverything; 
@property (assign,nonatomic) BOOL isServerFilter;                       //@synthesize isServerFilter=_isServerFilter - In the implementation block
-(BOOL)isServerFilter;
-(NSSet *)groupIdentifiers;
-(NSSet *)containerIdentifiers;
-(void)setContainerIdentifiers:(NSSet *)arg1 ;
-(void)setGroupIdentifiers:(NSSet *)arg1 ;
-(void)setIsServerFilter:(BOOL)arg1 ;
-(BOOL)supportsSections;
-(BOOL)showsEverything;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)predicate;
@end
