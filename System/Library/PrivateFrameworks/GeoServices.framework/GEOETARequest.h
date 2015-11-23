/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOAdditionalEnabledMarkets, GEOAutomobileOptions, NSMutableArray, GEOETARequestAttributes, GEOWaypoint, GEOWaypointTyped, GEORouteSummaryAttributes, GEOTFTrafficSnapshot, GEOTransitOptions, GEOWalkingOptions;

@interface GEOETARequest : PBRequest <NSCopying> {

	SCD_Struct_GE4 _sessionID;
	SCD_Struct_GE61 _timepoint;
	GEOAdditionalEnabledMarkets* _additionalEnabledMarkets;
	GEOAutomobileOptions* _automobileOptions;
	NSMutableArray* _destinationWaypointTypeds;
	NSMutableArray* _destinations;
	unsigned _distanceLimitMeters;
	GEOETARequestAttributes* _etaRequestAttributes;
	GEOWaypoint* _origin;
	GEOWaypointTyped* _originWaypointTyped;
	GEORouteSummaryAttributes* _routeSummaryAttributes;
	NSMutableArray* _serviceTags;
	GEOTFTrafficSnapshot* _trafficSnapshot;
	GEOTransitOptions* _transitOptions;
	int _transportType;
	GEOWalkingOptions* _walkingOptions;
	BOOL _allowPartialResults;
	BOOL _includeDistance;
	BOOL _includeHistoricTravelTime;
	BOOL _isFromAPI;
	BOOL _useLiveTrafficAsFallback;
	SCD_Struct_GE103 _has;

}

@property (nonatomic,readonly) BOOL hasTrafficSnapshot; 
@property (nonatomic,retain) GEOTFTrafficSnapshot * trafficSnapshot; 
@property (assign,nonatomic) BOOL hasUseLiveTrafficAsFallback; 
@property (assign,nonatomic) BOOL useLiveTrafficAsFallback; 
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType;                                                   //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) BOOL hasTimepoint; 
@property (assign,nonatomic) SCD_Struct_GE64 timepoint;                                           //@synthesize timepoint=_timepoint - In the implementation block
@property (nonatomic,readonly) BOOL hasOrigin; 
@property (nonatomic,retain) GEOWaypoint * origin;                                                //@synthesize origin=_origin - In the implementation block
@property (nonatomic,retain) NSMutableArray * destinations;                                       //@synthesize destinations=_destinations - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeHistoricTravelTime; 
@property (assign,nonatomic) BOOL includeHistoricTravelTime;                                      //@synthesize includeHistoricTravelTime=_includeHistoricTravelTime - In the implementation block
@property (assign,nonatomic) BOOL hasAllowPartialResults; 
@property (assign,nonatomic) BOOL allowPartialResults;                                            //@synthesize allowPartialResults=_allowPartialResults - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeDistance; 
@property (assign,nonatomic) BOOL includeDistance;                                                //@synthesize includeDistance=_includeDistance - In the implementation block
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) SCD_Struct_GE4 sessionID;                                            //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL hasDistanceLimitMeters; 
@property (assign,nonatomic) unsigned distanceLimitMeters;                                        //@synthesize distanceLimitMeters=_distanceLimitMeters - In the implementation block
@property (nonatomic,readonly) BOOL hasAdditionalEnabledMarkets; 
@property (nonatomic,retain) GEOAdditionalEnabledMarkets * additionalEnabledMarkets;              //@synthesize additionalEnabledMarkets=_additionalEnabledMarkets - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginWaypointTyped; 
@property (nonatomic,retain) GEOWaypointTyped * originWaypointTyped;                              //@synthesize originWaypointTyped=_originWaypointTyped - In the implementation block
@property (nonatomic,retain) NSMutableArray * destinationWaypointTypeds;                          //@synthesize destinationWaypointTypeds=_destinationWaypointTypeds - In the implementation block
@property (nonatomic,readonly) BOOL hasAutomobileOptions; 
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions;                            //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitOptions; 
@property (nonatomic,retain) GEOTransitOptions * transitOptions;                                  //@synthesize transitOptions=_transitOptions - In the implementation block
@property (nonatomic,readonly) BOOL hasWalkingOptions; 
@property (nonatomic,retain) GEOWalkingOptions * walkingOptions;                                  //@synthesize walkingOptions=_walkingOptions - In the implementation block
@property (assign,nonatomic) BOOL hasIsFromAPI; 
@property (assign,nonatomic) BOOL isFromAPI;                                                      //@synthesize isFromAPI=_isFromAPI - In the implementation block
@property (nonatomic,readonly) BOOL hasEtaRequestAttributes; 
@property (nonatomic,retain) GEOETARequestAttributes * etaRequestAttributes;                      //@synthesize etaRequestAttributes=_etaRequestAttributes - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteSummaryAttributes; 
@property (nonatomic,retain) GEORouteSummaryAttributes * routeSummaryAttributes;                  //@synthesize routeSummaryAttributes=_routeSummaryAttributes - In the implementation block
@property (nonatomic,retain) NSMutableArray * serviceTags;                                        //@synthesize serviceTags=_serviceTags - In the implementation block
-(id)initWithQuickETARequest:(id)arg1 ;
-(BOOL)hasTrafficSnapshot;
-(void)setTrafficSnapshot:(GEOTFTrafficSnapshot *)arg1 ;
-(GEOTFTrafficSnapshot *)trafficSnapshot;
-(BOOL)useLiveTrafficAsFallback;
-(void)setHasUseLiveTrafficAsFallback:(BOOL)arg1 ;
-(void)setUseLiveTrafficAsFallback:(BOOL)arg1 ;
-(BOOL)hasUseLiveTrafficAsFallback;
-(void)setDestinations:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOWaypoint *)origin;
-(void)setOrigin:(GEOWaypoint *)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)destinations;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSessionID:(SCD_Struct_GE4)arg1 ;
-(SCD_Struct_GE4)sessionID;
-(BOOL)hasSessionID;
-(void)setHasSessionID:(BOOL)arg1 ;
-(Class)responseClass;
-(unsigned)requestTypeCode;
-(void)setTransportType:(int)arg1 ;
-(BOOL)hasTransportType;
-(void)setHasTransportType:(BOOL)arg1 ;
-(int)transportType;
-(void)clearServiceTags;
-(void)addServiceTag:(id)arg1 ;
-(GEORouteSummaryAttributes *)routeSummaryAttributes;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(id)serviceTagAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)serviceTagsCount;
-(BOOL)isFromAPI;
-(NSMutableArray *)serviceTags;
-(BOOL)hasAdditionalEnabledMarkets;
-(BOOL)hasIsFromAPI;
-(void)setRouteSummaryAttributes:(GEORouteSummaryAttributes *)arg1 ;
-(void)setHasIsFromAPI:(BOOL)arg1 ;
-(void)setIsFromAPI:(BOOL)arg1 ;
-(void)setAdditionalEnabledMarkets:(GEOAdditionalEnabledMarkets *)arg1 ;
-(GEOAdditionalEnabledMarkets *)additionalEnabledMarkets;
-(BOOL)hasRouteSummaryAttributes;
-(BOOL)hasOrigin;
-(BOOL)hasDistanceLimitMeters;
-(void)setWalkingOptions:(GEOWalkingOptions *)arg1 ;
-(BOOL)hasAllowPartialResults;
-(void)setHasTimepoint:(BOOL)arg1 ;
-(void)clearDestinationWaypointTypeds;
-(void)setTimepoint:(SCD_Struct_GE64)arg1 ;
-(BOOL)includeHistoricTravelTime;
-(void)setHasDistanceLimitMeters:(BOOL)arg1 ;
-(void)setHasAllowPartialResults:(BOOL)arg1 ;
-(void)setOriginWaypointTyped:(GEOWaypointTyped *)arg1 ;
-(BOOL)allowPartialResults;
-(GEOETARequestAttributes *)etaRequestAttributes;
-(void)setEtaRequestAttributes:(GEOETARequestAttributes *)arg1 ;
-(void)setDistanceLimitMeters:(unsigned)arg1 ;
-(void)addDestinationWaypointTyped:(id)arg1 ;
-(void)setAllowPartialResults:(BOOL)arg1 ;
-(BOOL)hasIncludeHistoricTravelTime;
-(void)clearDestinations;
-(void)setHasIncludeHistoricTravelTime:(BOOL)arg1 ;
-(unsigned)distanceLimitMeters;
-(void)setDestinationWaypointTypeds:(NSMutableArray *)arg1 ;
-(BOOL)hasWalkingOptions;
-(BOOL)hasTransitOptions;
-(void)setIncludeHistoricTravelTime:(BOOL)arg1 ;
-(id)destinationAtIndex:(unsigned long long)arg1 ;
-(GEOWaypointTyped *)originWaypointTyped;
-(unsigned long long)destinationsCount;
-(BOOL)hasAutomobileOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(NSMutableArray *)destinationWaypointTypeds;
-(BOOL)includeDistance;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(GEOTransitOptions *)transitOptions;
-(GEOAutomobileOptions *)automobileOptions;
-(BOOL)hasEtaRequestAttributes;
-(SCD_Struct_GE64)timepoint;
-(BOOL)hasIncludeDistance;
-(GEOWalkingOptions *)walkingOptions;
-(unsigned long long)destinationWaypointTypedsCount;
-(BOOL)hasOriginWaypointTyped;
-(void)setHasIncludeDistance:(BOOL)arg1 ;
-(id)destinationWaypointTypedAtIndex:(unsigned long long)arg1 ;
-(void)addDestination:(id)arg1 ;
-(BOOL)hasTimepoint;
-(void)setIncludeDistance:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end
