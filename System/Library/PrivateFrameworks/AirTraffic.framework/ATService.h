/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:19 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirTraffic/AirTraffic-Structs.h>
#import <libobjc.A.dylib/ATMessageLinkObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSHashTable, NSString;

@interface ATService : NSObject <ATMessageLinkObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _messageLinks;
	NSHashTable* _observers;

}

@property (nonatomic,retain) NSMutableSet * messageLinks;              //@synthesize messageLinks=_messageLinks - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                  //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(BOOL)stop;
-(void)removeObserver:(id)arg1 ;
-(BOOL)run;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)setMessageLinks:(NSMutableSet *)arg1 ;
-(void)addMessageLink:(id)arg1 ;
-(void)removeMessageLink:(id)arg1 ;
-(NSMutableSet *)messageLinks;
-(id)messageLinkForIdentifier:(id)arg1 ;
@end
