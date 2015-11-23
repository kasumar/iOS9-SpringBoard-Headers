/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:07 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoAnalyzer.h>

@class NSMutableArray;

@interface VCPLightVideoAnalyzer : VCPVideoAnalyzer {

	BOOL _finalized;
	FrameBuffer* _frameBuffer;
	EncodeAnalysis* _encodeAnalysis;
	MetadataAnalysis* _metadataAnalysis;
	float _qualityArray[3];
	LightweightFeature* _features[2];
	LightweightFeature* _keyFrameFeature;
	LightweightFeature* _lastKeyFrameFeature;
	SCD_Struct_VC6 _keyFrameTimestamp;
	int _sceneLength;
	float _bestQuality;
	SCD_Struct_VC8 _bestClip;
	BOOL _significantSceneChange;
	SCD_Struct_VC6 _faceStart;
	BOOL _keyFrameFace;
	BOOL _lastKeyFrameFace;
	SCD_Struct_VC6 _sceneStart;
	float _sceneScore;
	float _lastQuantScore;
	SCD_Struct_VC6 _lastChangeTime;
	float _bestQualityInScene;
	BOOL _isFirstScene;
	float _sceneDistance;
	int _minPanningPerSec;
	LightweightMotionVectorAnalysis* _motionVectorAnalyzer;
	NSMutableArray* _globalMotionDict;
	NSMutableArray* _sceneResults;
	NSMutableArray* _qualityResults;
	NSMutableArray* _videoSegTypes;

}
-(void)dealloc;
-(id)init;
-(id)results;
-(int)cameraMotionFilter;
-(int)processFrame:(int)arg1 ;
-(void)addSceneFrom:(const SCD_Struct_VC6*)arg1 to:(const SCD_Struct_VC6*)arg2 distance:(float)arg3 ;
-(int)finishAnalysisPass:(SCD_Struct_VC8)arg1 complete:(BOOL*)arg2 ;
-(int)analyzeFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 flags:(unsigned long long*)arg4 ;
-(BOOL)resetFaceDetector;
@end
