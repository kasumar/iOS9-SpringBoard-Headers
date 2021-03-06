/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface HAPMetadataService : NSObject {

	BOOL _allowAssociatedService;
	NSString* _name;
	NSString* _svcDescription;
	NSString* _uuidStr;
	NSString* _btleuuidStr;
	NSArray* _mandatoryCharacteristics;
	NSArray* _optionalCharacteristics;

}

@property (nonatomic,retain) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * svcDescription;                       //@synthesize svcDescription=_svcDescription - In the implementation block
@property (nonatomic,retain) NSString * uuidStr;                              //@synthesize uuidStr=_uuidStr - In the implementation block
@property (nonatomic,retain) NSString * btleuuidStr;                          //@synthesize btleuuidStr=_btleuuidStr - In the implementation block
@property (nonatomic,retain) NSArray * mandatoryCharacteristics;              //@synthesize mandatoryCharacteristics=_mandatoryCharacteristics - In the implementation block
@property (nonatomic,retain) NSArray * optionalCharacteristics;               //@synthesize optionalCharacteristics=_optionalCharacteristics - In the implementation block
@property (assign,nonatomic) BOOL allowAssociatedService;                     //@synthesize allowAssociatedService=_allowAssociatedService - In the implementation block
-(void)dump;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)generateDictionary:(id)arg1 ;
-(NSString *)uuidStr;
-(NSArray *)mandatoryCharacteristics;
-(void)setMandatoryCharacteristics:(NSArray *)arg1 ;
-(NSArray *)optionalCharacteristics;
-(void)setOptionalCharacteristics:(NSArray *)arg1 ;
-(id)initWithName:(id)arg1 uuid:(id)arg2 description:(id)arg3 mandatoryCharacteristics:(id)arg4 ;
-(void)setAllowAssociatedService:(BOOL)arg1 ;
-(void)setBtleuuidStr:(NSString *)arg1 ;
-(NSString *)svcDescription;
-(NSString *)btleuuidStr;
-(BOOL)allowAssociatedService;
-(void)setUuidStr:(NSString *)arg1 ;
-(void)setSvcDescription:(NSString *)arg1 ;
@end

