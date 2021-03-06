/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:44 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MTLDevice, OS_dispatch_semaphore;
#import <SceneKit/SceneKit-Structs.h>
@class SCNMetalLibraryManager, MTLRenderPipelineDescriptor, NSObject, SCNMTLShaderBindingsGenerator;

@interface SCNMetalShaderManager : NSObject {

	id<MTLDevice> _device;
	BOOL _isValidationEnabled;
	SCNMetalLibraryManager* _libraryManager;
	_C3DEngineStats* __engineStats;
	MTLRenderPipelineDescriptor* _renderPipelineDescriptor;
	CFDictionaryRef _availablePipelineStates;
	NSObject*<OS_dispatch_semaphore> _availablePipelineStatesLock;
	SCNMTLShaderBindingsGenerator* _bindingsGenerator;

}
-(void)setBlendStates:(C3DBlendStatesRef)arg1 ;
-(id)renderResourceForProgram:(_C3DFXProgram*)arg1 material:(C3DMaterialRef)arg2 geometry:(_C3DGeometry*)arg3 pass:(_C3DFXPass*)arg4 renderMesh:(id)arg5 blendStates:(C3DBlendStatesRef)arg6 ;
-(void)_removeMatchingProgram:(_C3DFXProgram*)arg1 pass:(_C3DFXPass*)arg2 ;
-(id)initWithResourceManager:(id)arg1 passDescription:(id)arg2 ;
-(BOOL)matchPassDescriptor:(id)arg1 ;
-(void)programWillDie:(_C3DFXProgram*)arg1 ;
-(void)passWillDie:(_C3DFXPass*)arg1 ;
-(void)dealloc;
@end

