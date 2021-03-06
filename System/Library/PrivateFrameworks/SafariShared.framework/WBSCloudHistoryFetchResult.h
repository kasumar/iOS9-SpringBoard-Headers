/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:36 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSData, NSArray;

@interface WBSCloudHistoryFetchResult : NSObject {

	NSMutableArray* _mutableCloudHistoryVisits;
	NSMutableArray* _mutableHistoryTombstones;
	NSData* _serverChangeTokenData;

}

@property (nonatomic,readonly) NSArray * cloudHistoryVisits; 
@property (nonatomic,readonly) NSArray * historyTombstones; 
@property (nonatomic,readonly) NSData * serverChangeTokenData;              //@synthesize serverChangeTokenData=_serverChangeTokenData - In the implementation block
-(id)init;
-(id)description;
-(NSData *)serverChangeTokenData;
-(NSArray *)cloudHistoryVisits;
-(NSArray *)historyTombstones;
-(void)_addCloudHistoryVisit:(id)arg1 ;
-(void)_addHistoryTombstone:(id)arg1 ;
-(void)_setServerChangeTokenData:(id)arg1 ;
@end

