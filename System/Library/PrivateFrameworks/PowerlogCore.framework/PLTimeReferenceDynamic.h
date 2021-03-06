/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PLTimeReference.h>

@class NSMutableDictionary, NSDate, NSMutableArray, PLTimer;

@interface PLTimeReferenceDynamic : PLTimeReference {

	int _offsetHistoryHead;
	NSMutableDictionary* _timeChangeBlocks;
	double _tooFarInFutureDistance;
	double _tooFarInPastDistance;
	NSDate* _lastQueryTime;
	NSMutableArray* _offsetHistory;
	PLTimer* _periodicCurrentTime;

}

@property (retain) NSMutableDictionary * timeChangeBlocks;              //@synthesize timeChangeBlocks=_timeChangeBlocks - In the implementation block
@property (assign) double tooFarInFutureDistance;                       //@synthesize tooFarInFutureDistance=_tooFarInFutureDistance - In the implementation block
@property (assign) double tooFarInPastDistance;                         //@synthesize tooFarInPastDistance=_tooFarInPastDistance - In the implementation block
@property (retain) NSDate * lastQueryTime;                              //@synthesize lastQueryTime=_lastQueryTime - In the implementation block
@property (retain) NSMutableArray * offsetHistory;                      //@synthesize offsetHistory=_offsetHistory - In the implementation block
@property (assign) int offsetHistoryHead;                               //@synthesize offsetHistoryHead=_offsetHistoryHead - In the implementation block
@property (retain) PLTimer * periodicCurrentTime;                       //@synthesize periodicCurrentTime=_periodicCurrentTime - In the implementation block
+(double)nearestDistanceFromDate:(id)arg1 toRegionWithStartDate:(id)arg2 andEndDate:(id)arg3 ;
-(void)setOffset:(double)arg1 ;
-(id)initWithTimeManager:(id)arg1 entryDefinitionKey:(id)arg2 timeReferenceType:(long long)arg3 ;
-(void)setTooFarInFutureDistance:(double)arg1 ;
-(void)setTooFarInPastDistance:(double)arg1 ;
-(void)setLastQueryTime:(NSDate *)arg1 ;
-(void)checkForTimeChangeWithCurrentTime:(id)arg1 ;
-(void)registerForTimeChangedNotification;
-(void)registerForTimeChangedCallbackWithIdentifier:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)initializeOffsetWithEntries:(id)arg1 ;
-(id)removeTimeOffsetFromReferenceTime:(id)arg1 ;
-(void)unregisterForTimeChangedCallbackWithIdentifier:(id)arg1 ;
-(NSMutableDictionary *)timeChangeBlocks;
-(void)initializeOffsetHistoryWithEntries:(id)arg1 ;
-(void)setPeriodicCurrentTime:(PLTimer *)arg1 ;
-(NSMutableArray *)offsetHistory;
-(void)setOffsetHistoryHead:(int)arg1 ;
-(int)offsetHistoryHead;
-(id)newOffsetEntryWithCurrentTime;
-(void)notifyTimeChange:(double)arg1 ;
-(double)tooFarInFutureDistance;
-(double)tooFarInPastDistance;
-(BOOL)shouldQueryCurrentTime;
-(NSDate *)lastQueryTime;
-(void)setTimeChangeBlocks:(NSMutableDictionary *)arg1 ;
-(void)setOffsetHistory:(NSMutableArray *)arg1 ;
-(PLTimer *)periodicCurrentTime;
@end

