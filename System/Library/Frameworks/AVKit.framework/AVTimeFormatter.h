/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSLocale, NSString, NSNumberFormatter;

@interface AVTimeFormatter : NSFormatter {

	long long _style;
	unsigned _fullWidth : 1;
	double _formatTemplate;
	NSLocale* _locale;
	unsigned _isRightToLeft : 1;
	NSString* _cachedDateFormatterFormat;
	NSString* _cachedDateFormatterTemplate;
	NSNumberFormatter* _numberFormatterWithOneMinimumIntegerDigits;
	NSNumberFormatter* _numberFormatterWithTwoMinimumIntegerDigits;

}

@property (assign) long long style; 
@property (assign) double formatTemplate; 
@property (getter=isFullWidth) BOOL fullWidth; 
-(id)stringFromTimeInterval:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(double)formatTemplate;
-(BOOL)isFullWidth;
-(void)setFormatTemplate:(double)arg1 ;
-(void)setFullWidth:(BOOL)arg1 ;
@end
