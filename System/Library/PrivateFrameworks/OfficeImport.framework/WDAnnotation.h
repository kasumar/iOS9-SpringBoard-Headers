/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:06 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/WDRun.h>

@class WDCharacterRun, WDAnnotationData;

@interface WDAnnotation : WDRun {

	int mType;
	WDCharacterRun* mReference;
	BOOL mReferencePopertiesFixed;
	WDAnnotationData* mData;
	WDAnnotation* mOtherEndOfRangedAnnotation;

}
-(void)dealloc;
-(id)description;
-(id)date;
-(id)text;
-(id)data;
-(void)setDate:(id)arg1 ;
-(int)runType;
-(id)reference;
-(void)setOwner:(id)arg1 ;
-(BOOL)referencePropertiesFixed;
-(void)setReferencePropertiesFixed;
-(void)setOtherEndOfRangedAnnotation:(id)arg1 ;
-(void)useDataFromOtherEnd;
-(id)owner;
-(id)initWithParagraph:(id)arg1 type:(int)arg2 ;
-(int)annotationType;
-(id)otherEndOfRangedAnnotation;
@end
