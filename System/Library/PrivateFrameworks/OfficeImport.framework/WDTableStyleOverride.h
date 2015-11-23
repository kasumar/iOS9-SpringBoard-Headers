/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:07 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WDDocument, WDStyle, WDParagraphProperties, WDCharacterProperties, WDTableRowProperties, WDTableCellProperties;

@interface WDTableStyleOverride : NSObject <NSCopying> {

	WDDocument* mDocument;
	WDStyle* mStyle;
	int mPart;
	WDParagraphProperties* mParagraphProperties;
	WDCharacterProperties* mCharacterProperties;
	WDTableRowProperties* mTableRowProperties;
	WDTableCellProperties* mTableCellStyleProperties;
	unsigned mParagraphPropertiesOverridden : 1;
	unsigned mCharacterPropertiesOverridden : 1;
	unsigned mTableRowPropertiesOverridden : 1;
	unsigned mTableCellStylePropertiesOverridden : 1;

}
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)style;
-(void)setStyle:(id)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(id)paragraphProperties;
-(id)characterProperties;
-(BOOL)isCharacterPropertiesOverridden;
-(id)tableProperties;
-(id)tableRowProperties;
-(void)setPart:(int)arg1 ;
-(int)part;
-(BOOL)isParagraphPropertiesOverridden;
-(void)setParagraphPropertiesOverridden:(BOOL)arg1 ;
-(void)setCharacterPropertiesOverridden:(BOOL)arg1 ;
-(BOOL)isTablePropertiesOverridden;
-(BOOL)isTableRowPropertiesOverridden;
-(void)setTableRowPropertiesOverridden:(BOOL)arg1 ;
-(id)tableCellStyleProperties;
-(BOOL)isTableCellStylePropertiesOverridden;
-(void)setTableCellStylePropertiesOverridden:(BOOL)arg1 ;
-(id)mutableParagraphProperties;
-(id)mutableCharacterProperties;
-(id)mutableTableRowProperties;
-(id)mutableTableCellStyleProperties;
@end
