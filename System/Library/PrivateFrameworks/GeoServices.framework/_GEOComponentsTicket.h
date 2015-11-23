/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOMapServiceTicket.h>

@class NSDictionary, NSString, GEOMapServiceTraits, GEOMapRegion;

@interface _GEOComponentsTicket : NSObject <GEOMapServiceTicket> {

	NSDictionary* _components;
	unsigned long long _muid;
	int _resultProviderID;
	NSString* _contentProvider;
	GEOMapServiceTraits* _traits;
	BOOL _canceled;

}

@property (getter=isCanceled,nonatomic,readonly) BOOL canceled;                          //@synthesize canceled=_canceled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits;                             //@synthesize traits=_traits - In the implementation block
@property (nonatomic,readonly) GEOMapRegion * resultBoundingRegion; 
@property (getter=isChainResultSet,nonatomic,readonly) BOOL chainResultSet; 
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
@property (nonatomic,readonly) NSString * resultSectionHeader; 
-(void)cancel;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(GEOMapServiceTraits *)traits;
-(BOOL)isChainResultSet;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(void)submitWithHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3 ;
-(void)applyToCorrectedSearch:(id)arg1 ;
-(void)applyToPlaceInfo:(id)arg1 ;
-(NSDictionary *)responseUserInfo;
-(GEOMapRegion *)resultBoundingRegion;
-(NSString *)resultSectionHeader;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3 ;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(BOOL)isCanceled;
-(id)initWithComponents:(id)arg1 muid:(unsigned long long)arg2 resultProviderID:(int)arg3 contentProvider:(id)arg4 traits:(id)arg5 ;
@end
