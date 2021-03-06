/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:22 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libTextInputCore.dylib/libTextInputCore.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSLocale;

@interface TIInputMode : NSObject <NSCopying> {

	NSString* _languageWithRegion;
	NSString* _variant;
	NSLocale* _locale;
	Class _inputManagerClass;
	NSString* _normalizedIdentifier;

}

@property (nonatomic,readonly) NSString * normalizedIdentifier;              //@synthesize normalizedIdentifier=_normalizedIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * languageWithRegion; 
@property (nonatomic,readonly) NSString * variant; 
@property (nonatomic,readonly) NSLocale * locale; 
@property (nonatomic,readonly) Class inputManagerClass; 
@property (nonatomic,readonly) BOOL spaceAutocorrectionEnabled; 
+(id)inputModeWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)normalizedIdentifier;
-(NSLocale *)locale;
-(NSString *)languageWithRegion;
-(NSString *)variant;
-(Class)inputManagerClass;
-(BOOL)spaceAutocorrectionEnabled;
-(id)initWithNormalizedIdentifier:(id)arg1 ;
@end

