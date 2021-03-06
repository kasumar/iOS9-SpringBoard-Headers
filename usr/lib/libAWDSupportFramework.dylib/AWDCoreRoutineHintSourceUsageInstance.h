/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:24 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutineHintSourceUsageInstance : PBCodable <NSCopying> {

	int _hintSource;
	int _isLOI;
	int _isVisit;
	SCD_Struct_AW6 _has;

}

@property (assign,nonatomic) BOOL hasHintSource; 
@property (assign,nonatomic) int hintSource;                  //@synthesize hintSource=_hintSource - In the implementation block
@property (assign,nonatomic) BOOL hasIsLOI; 
@property (assign,nonatomic) int isLOI;                       //@synthesize isLOI=_isLOI - In the implementation block
@property (assign,nonatomic) BOOL hasIsVisit; 
@property (assign,nonatomic) int isVisit;                     //@synthesize isVisit=_isVisit - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHintSource:(int)arg1 ;
-(void)setHasHintSource:(BOOL)arg1 ;
-(BOOL)hasHintSource;
-(int)hintSource;
-(void)setIsLOI:(int)arg1 ;
-(void)setHasIsLOI:(BOOL)arg1 ;
-(BOOL)hasIsLOI;
-(void)setIsVisit:(int)arg1 ;
-(void)setHasIsVisit:(BOOL)arg1 ;
-(BOOL)hasIsVisit;
-(int)isLOI;
-(int)isVisit;
@end

