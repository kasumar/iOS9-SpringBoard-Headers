/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol GEOServerFormattedString <NSObject>
@property (nonatomic,readonly) NSString * formatString; 
@property (nonatomic,readonly) NSArray * formatTokens; 
@required
-(NSString *)formatString;
-(NSArray *)formatTokens;

@end
