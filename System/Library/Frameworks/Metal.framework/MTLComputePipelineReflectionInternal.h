/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:35 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLComputePipelineReflection.h>

@class NSArray, NSDictionary;

@interface MTLComputePipelineReflectionInternal : MTLComputePipelineReflection {

	NSArray* _arguments;
	NSArray* _builtInArguments;
	NSDictionary* _performanceStatistics;
	SCD_Struct_MT10 _flags;

}
-(void)setPerformanceStatistics:(id)arg1 ;
-(id)initWithSerializedData:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 flags:(SCD_Struct_MT10)arg4 ;
-(id)performanceStatistics;
-(id)builtInArguments;
-(void)dealloc;
-(id)description;
-(id)arguments;
@end

