/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:27 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDWiProxLeSendDataRequest : PBRequest <NSCopying> {

	unsigned long long _timestamp;
	unsigned _dataLength;
	NSString* _peerId;
	NSString* _sessionId;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionId; 
@property (nonatomic,retain) NSString * sessionId;                      //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasPeerId; 
@property (nonatomic,retain) NSString * peerId;                         //@synthesize peerId=_peerId - In the implementation block
@property (assign,nonatomic) BOOL hasDataLength; 
@property (assign,nonatomic) unsigned dataLength;                       //@synthesize dataLength=_dataLength - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasSessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)sessionId;
-(unsigned)dataLength;
-(void)setDataLength:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasDataLength:(BOOL)arg1 ;
-(BOOL)hasDataLength;
-(void)setPeerId:(NSString *)arg1 ;
-(BOOL)hasPeerId;
-(NSString *)peerId;
@end
