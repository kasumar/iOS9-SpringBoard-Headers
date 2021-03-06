/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:07 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SPProtoObjectMessage, SPProtoAudioFilePlayerAssetUpdateMetaData;

@interface SPProtoAudioFilePlayerAsset : PBCodable <NSCopying> {

	SPProtoObjectMessage* _destroy;
	SPProtoAudioFilePlayerAssetUpdateMetaData* _upsertWithMetaData;

}

@property (nonatomic,readonly) BOOL hasUpsertWithMetaData; 
@property (nonatomic,retain) SPProtoAudioFilePlayerAssetUpdateMetaData * upsertWithMetaData;              //@synthesize upsertWithMetaData=_upsertWithMetaData - In the implementation block
@property (nonatomic,readonly) BOOL hasDestroy; 
@property (nonatomic,retain) SPProtoObjectMessage * destroy;                                              //@synthesize destroy=_destroy - In the implementation block
-(id)sockPuppetMessage;
-(SPProtoObjectMessage *)destroy;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setDestroy:(SPProtoObjectMessage *)arg1 ;
-(BOOL)hasDestroy;
-(void)setUpsertWithMetaData:(SPProtoAudioFilePlayerAssetUpdateMetaData *)arg1 ;
-(BOOL)hasUpsertWithMetaData;
-(SPProtoAudioFilePlayerAssetUpdateMetaData *)upsertWithMetaData;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

