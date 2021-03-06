/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:24 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOPDCategory : PBCodable <NSCopying> {

	int _level;
	NSMutableArray* _localizedNames;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) BOOL hasLevel; 
@property (assign,nonatomic) int level;                                    //@synthesize level=_level - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedNames;              //@synthesize localizedNames=_localizedNames - In the implementation block
+(id)_allCategoriesForPlaceData:(id)arg1 type:(unsigned)arg2 ;
+(BOOL)hasCategoryNamesForPlaceData:(id)arg1 type:(unsigned)arg2 ;
+(id)categoryNamesForPlaceData:(id)arg1 type:(unsigned)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLevel:(int)arg1 ;
-(int)level;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLocalizedNames:(NSMutableArray *)arg1 ;
-(unsigned long long)localizedNamesCount;
-(NSMutableArray *)localizedNames;
-(void)clearLocalizedNames;
-(void)addLocalizedName:(id)arg1 ;
-(void)setHasLevel:(BOOL)arg1 ;
-(id)localizedNameAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasLevel;
-(BOOL)readFrom:(id)arg1 ;
@end

