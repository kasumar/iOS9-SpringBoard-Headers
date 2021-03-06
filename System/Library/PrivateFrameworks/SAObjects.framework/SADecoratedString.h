/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SADecoratedString : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * regions; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)decoratedString;
+(id)decoratedStringWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)siriui_enumeratePropertyRangesUsingBlock:(/*^block*/id)arg1 ;
-(void)siriui_enumerateRangesOfRegionsWithProperty:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)siriui_attributedStringValueWithAttribute:(id)arg1 value:(id)arg2 forRegionsWithProperty:(id)arg3 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setRegions:(NSArray *)arg1 ;
-(NSArray *)regions;
-(id)encodedClassName;
@end

