/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:19 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogAccounting/PLAccountingDependency.h>

@class PLAccountingDistributionEventEntry;

@interface PLAccountingDistributionDependency : PLAccountingDependency {

	PLAccountingDistributionEventEntry* _distributionEvent;

}

@property (retain) PLAccountingDistributionEventEntry * distributionEvent;              //@synthesize distributionEvent=_distributionEvent - In the implementation block
-(id)range;
-(void)setRange:(id)arg1 ;
-(id)ID;
-(id)activationDate;
-(id)initWithDistributionEvent:(id)arg1 ;
-(PLAccountingDistributionEventEntry *)distributionEvent;
-(void)setDistributionEvent:(PLAccountingDistributionEventEntry *)arg1 ;
@end

