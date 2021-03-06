/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:23 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AceObject, AFSpeechPacket;

@interface AFAceParsedData : NSObject {

	unsigned char _type;
	unsigned _identifier;
	AceObject* _object;
	AFSpeechPacket* _speechPacket;

}

@property (assign,nonatomic) unsigned char type;                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) AceObject * object;                         //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) AFSpeechPacket * speechPacket;              //@synthesize speechPacket=_speechPacket - In the implementation block
-(unsigned)identifier;
-(void)setType:(unsigned char)arg1 ;
-(unsigned char)type;
-(AceObject *)object;
-(void)setIdentifier:(unsigned)arg1 ;
-(void)setObject:(AceObject *)arg1 ;
-(void)setSpeechPacket:(AFSpeechPacket *)arg1 ;
-(AFSpeechPacket *)speechPacket;
@end

