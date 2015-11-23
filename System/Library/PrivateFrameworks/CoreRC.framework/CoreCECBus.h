/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <CoreRC/CoreRCBus.h>

@class CoreCECDevice, NSString, CoreCECPhysicalDevice;

@interface CoreCECBus : CoreRCBus {

	BOOL _hasLink;
	CECLanguage _tvLanguageCodeASCII;
	unsigned long long _physicalAddress;
	unsigned long long _systemAudioModeStatus;
	CECOSDName _osdNameASCII;

}

@property (assign,nonatomic) unsigned long long physicalAddress;                        //@synthesize physicalAddress=_physicalAddress - In the implementation block
@property (assign,nonatomic) BOOL hasLink;                                              //@synthesize hasLink=_hasLink - In the implementation block
@property (nonatomic,readonly) CoreCECDevice * activeSource; 
@property (nonatomic,readonly) NSString * osdName; 
@property (nonatomic,readonly) NSString * tvLanguageCode; 
@property (assign,nonatomic) unsigned long long systemAudioModeStatus;                  //@synthesize systemAudioModeStatus=_systemAudioModeStatus - In the implementation block
@property (nonatomic,readonly) CoreCECPhysicalDevice * rootPhysicalDevice; 
@property (assign,nonatomic) CECOSDName osdNameASCII;                                   //@synthesize osdNameASCII=_osdNameASCII - In the implementation block
@property (assign,nonatomic) CECLanguage tvLanguageCodeASCII;                           //@synthesize tvLanguageCodeASCII=_tvLanguageCodeASCII - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)description;
-(id)delegate;
-(BOOL)setOSDName:(id)arg1 error:(id*)arg2 ;
-(id)initWithBus:(id)arg1 ;
-(BOOL)hasLink;
-(CECOSDName)osdNameASCII;
-(unsigned long long)physicalAddress;
-(CECLanguage)tvLanguageCodeASCII;
-(unsigned long long)systemAudioModeStatus;
-(id)initWithPhysicalAddress:(unsigned long long)arg1 ;
-(NSString *)osdName;
-(NSString *)tvLanguageCode;
-(CoreCECDevice *)activeSource;
-(void)setOsdNameASCII:(CECOSDName)arg1 ;
-(void)setTvLanguageCodeASCII:(CECLanguage)arg1 ;
-(id)addDeviceWithType:(unsigned long long)arg1 error:(id*)arg2 ;
-(CoreCECPhysicalDevice *)rootPhysicalDevice;
-(BOOL)setTvLanguageCode:(id)arg1 error:(id*)arg2 ;
-(id)deviceOnBusWithLogicalAddress:(unsigned char)arg1 ;
-(void)notifyDelegateActiveSourceChangedFrom:(id)arg1 newActiveSource:(id)arg2 ;
-(void)notifyDelegateLinkStateUpdated;
-(void)setPhysicalAddress:(unsigned long long)arg1 ;
-(void)setHasLink:(BOOL)arg1 ;
-(void)setSystemAudioModeStatus:(unsigned long long)arg1 ;
@end
