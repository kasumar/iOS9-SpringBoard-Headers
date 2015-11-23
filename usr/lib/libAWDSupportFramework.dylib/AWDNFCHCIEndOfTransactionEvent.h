/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:25 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDNFCHCIEndOfTransactionEvent : PBCodable <NSCopying> {

	unsigned long long _iad;
	unsigned long long _timeDeltaFromReference;
	unsigned long long _timestamp;
	unsigned long long _transactionTotal;
	NSData* _aid;
	NSData* _cdi;
	unsigned _command;
	unsigned _commandStatus;
	unsigned _currencyCode;
	unsigned _cvm;
	unsigned _informative;
	NSData* _maid;
	NSData* _maidDeprecated;
	NSData* _mcii;
	unsigned _msc;
	NSData* _transactionId;
	unsigned _transactionStatus;
	NSData* _uuidReference;
	unsigned _version;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                                       //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasCommandStatus; 
@property (assign,nonatomic) unsigned commandStatus;                                 //@synthesize commandStatus=_commandStatus - In the implementation block
@property (assign,nonatomic) BOOL hasCommand; 
@property (assign,nonatomic) unsigned command;                                       //@synthesize command=_command - In the implementation block
@property (assign,nonatomic) BOOL hasTransactionStatus; 
@property (assign,nonatomic) unsigned transactionStatus;                             //@synthesize transactionStatus=_transactionStatus - In the implementation block
@property (assign,nonatomic) BOOL hasInformative; 
@property (assign,nonatomic) unsigned informative;                                   //@synthesize informative=_informative - In the implementation block
@property (nonatomic,readonly) BOOL hasAid; 
@property (nonatomic,retain) NSData * aid;                                           //@synthesize aid=_aid - In the implementation block
@property (assign,nonatomic) BOOL hasTransactionTotal; 
@property (assign,nonatomic) unsigned long long transactionTotal;                    //@synthesize transactionTotal=_transactionTotal - In the implementation block
@property (assign,nonatomic) BOOL hasCurrencyCode; 
@property (assign,nonatomic) unsigned currencyCode;                                  //@synthesize currencyCode=_currencyCode - In the implementation block
@property (assign,nonatomic) BOOL hasIad; 
@property (assign,nonatomic) unsigned long long iad;                                 //@synthesize iad=_iad - In the implementation block
@property (assign,nonatomic) BOOL hasCvm; 
@property (assign,nonatomic) unsigned cvm;                                           //@synthesize cvm=_cvm - In the implementation block
@property (nonatomic,readonly) BOOL hasCdi; 
@property (nonatomic,retain) NSData * cdi;                                           //@synthesize cdi=_cdi - In the implementation block
@property (nonatomic,readonly) BOOL hasMaidDeprecated; 
@property (nonatomic,retain) NSData * maidDeprecated;                                //@synthesize maidDeprecated=_maidDeprecated - In the implementation block
@property (assign,nonatomic) BOOL hasMsc; 
@property (assign,nonatomic) unsigned msc;                                           //@synthesize msc=_msc - In the implementation block
@property (nonatomic,readonly) BOOL hasMcii; 
@property (nonatomic,retain) NSData * mcii;                                          //@synthesize mcii=_mcii - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                                 //@synthesize uuidReference=_uuidReference - In the implementation block
@property (assign,nonatomic) BOOL hasTimeDeltaFromReference; 
@property (assign,nonatomic) unsigned long long timeDeltaFromReference;              //@synthesize timeDeltaFromReference=_timeDeltaFromReference - In the implementation block
@property (nonatomic,readonly) BOOL hasTransactionId; 
@property (nonatomic,retain) NSData * transactionId;                                 //@synthesize transactionId=_transactionId - In the implementation block
@property (nonatomic,readonly) BOOL hasMaid; 
@property (nonatomic,retain) NSData * maid;                                          //@synthesize maid=_maid - In the implementation block
-(unsigned)command;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(unsigned)currencyCode;
-(void)setCurrencyCode:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setUuidReference:(NSData *)arg1 ;
-(BOOL)hasUuidReference;
-(NSData *)uuidReference;
-(void)setTimeDeltaFromReference:(unsigned long long)arg1 ;
-(void)setHasTimeDeltaFromReference:(BOOL)arg1 ;
-(BOOL)hasTimeDeltaFromReference;
-(unsigned long long)timeDeltaFromReference;
-(void)setAid:(NSData *)arg1 ;
-(void)setCdi:(NSData *)arg1 ;
-(void)setMaidDeprecated:(NSData *)arg1 ;
-(void)setMcii:(NSData *)arg1 ;
-(void)setTransactionId:(NSData *)arg1 ;
-(void)setMaid:(NSData *)arg1 ;
-(void)setCommandStatus:(unsigned)arg1 ;
-(void)setHasCommandStatus:(BOOL)arg1 ;
-(BOOL)hasCommandStatus;
-(void)setCommand:(unsigned)arg1 ;
-(void)setHasCommand:(BOOL)arg1 ;
-(BOOL)hasCommand;
-(void)setTransactionStatus:(unsigned)arg1 ;
-(void)setHasTransactionStatus:(BOOL)arg1 ;
-(BOOL)hasTransactionStatus;
-(void)setInformative:(unsigned)arg1 ;
-(void)setHasInformative:(BOOL)arg1 ;
-(BOOL)hasInformative;
-(BOOL)hasAid;
-(void)setTransactionTotal:(unsigned long long)arg1 ;
-(void)setHasTransactionTotal:(BOOL)arg1 ;
-(BOOL)hasTransactionTotal;
-(void)setHasCurrencyCode:(BOOL)arg1 ;
-(BOOL)hasCurrencyCode;
-(void)setIad:(unsigned long long)arg1 ;
-(void)setHasIad:(BOOL)arg1 ;
-(BOOL)hasIad;
-(void)setCvm:(unsigned)arg1 ;
-(void)setHasCvm:(BOOL)arg1 ;
-(BOOL)hasCvm;
-(BOOL)hasCdi;
-(BOOL)hasMaidDeprecated;
-(void)setMsc:(unsigned)arg1 ;
-(void)setHasMsc:(BOOL)arg1 ;
-(BOOL)hasMsc;
-(BOOL)hasMcii;
-(BOOL)hasTransactionId;
-(BOOL)hasMaid;
-(unsigned)commandStatus;
-(unsigned)transactionStatus;
-(unsigned)informative;
-(NSData *)aid;
-(unsigned long long)transactionTotal;
-(unsigned long long)iad;
-(unsigned)cvm;
-(NSData *)cdi;
-(NSData *)maidDeprecated;
-(unsigned)msc;
-(NSData *)mcii;
-(NSData *)transactionId;
-(NSData *)maid;
@end
