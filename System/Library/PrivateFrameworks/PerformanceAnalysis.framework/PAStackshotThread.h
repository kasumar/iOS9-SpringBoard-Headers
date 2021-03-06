/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:12 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
@class PAStackshotTask;

@interface PAStackshotThread : NSObject {

	thread_snapshot* thread_snap;
	PAStackshotTask* _task;
	const void* _kernelFrames;
	const void* _userFrames;
	unsigned long long _kernelFrameSize;
	unsigned long long _userFrameSize;
	unsigned long long _bytesUsed;

}

@property (readonly) BOOL isFromMicrostackshot; 
-(id)initWithTask:(id)arg1 ;
-(BOOL)hasDispatchQueue;
-(BOOL)isFromMicrostackshot;
-(const void*)firstFrame;
-(void)_calculateOffsets;
-(id)frameIterator;
-(unsigned long long)_frameSize:(BOOL)arg1 ;
-(BOOL)isDarwinBG;
-(unsigned)powerstatsFlags;
-(unsigned long long)kernelFrameSize;
-(unsigned long long)userFrameSize;
-(BOOL)hasKernelContinuation;
-(unsigned long long)dispatchQueueId;
-(unsigned long long)kernelFramesOffsetFromHeaderStart;
-(unsigned long long)userFramesOffsetFromHeaderStart;
-(BOOL)setBufferPosition:(const char*)arg1 withRemainingBytes:(unsigned long long)arg2 ;
-(void)iterateFrames:(/*^block*/id)arg1 ;
-(unsigned long long)bytesUsedInBuffer;
@end

