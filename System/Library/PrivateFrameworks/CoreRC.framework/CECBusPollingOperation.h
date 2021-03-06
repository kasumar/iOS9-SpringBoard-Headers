/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CECBusPollingOperationDelegate;
@class CECInterface, NSObject;

@interface CECBusPollingOperation : NSObject {

	CECInterface* _interface;
	unsigned char _initiatorAddress;
	unsigned char _pollingAddress;
	NSObject*<OS_dispatch_queue> _queue;
	id<CECBusPollingOperationDelegate> _delegate;

}

@property (assign,nonatomic) id<CECBusPollingOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<CECBusPollingOperationDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<CECBusPollingOperationDelegate>)delegate;
-(void)stopPolling;
-(id)initWithInterface:(id)arg1 initiator:(unsigned char)arg2 queue:(id)arg3 ;
-(void)startPolling;
-(void)continuePolling;
-(void)poll;
@end

