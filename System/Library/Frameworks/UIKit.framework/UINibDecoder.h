/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <Foundation/NSCoder.h>

@class UINibStringIDTable;

@interface UINibDecoder : NSCoder {

	Class arrayClass;
	Class setClass;
	Class dictionaryClass;
	Class* classes;
	id* missingClasses;
	UINibDecoderObjectEntry* objects;
	UINibDecoderValue* values;
	char* valueTypes;
	void* valueData;
	unsigned long long valueDataSize;
	UINibDecoderHeader header;
	id* objectsByObjectID;
	unsigned* longObjectClassIDs;
	char* shortObjectClassIDs;
	unsigned* keyMasks;
	long long inlinedValueKey;
	UINibDecoderRecursiveState recursiveState;
	UINibStringIDTable* keyIDTable;
	id delegate;
	UIKeyToKeyIDCache* keyIDCache;
	UIKeyAndScopeToValueCache* valueCache;
	long long lookupRounds;
	long long maxPossibleLookupRounds;
	long long failedByKeyMask;
	long long savedByKeyMask;

}

@property (assign) id delegate; 
+(id)unarchiveObjectWithData:(id)arg1 ;
+(id)unarchiveObjectWithFile:(id)arg1 ;
-(id)decodeObjectForKey:(id)arg1 ;
-(BOOL)decodeBoolForKey:(id)arg1 ;
-(BOOL)containsValueForKey:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(unsigned)systemVersion;
-(int)decodeIntForKey:(id)arg1 ;
-(void)finishDecoding;
-(BOOL)allowsKeyedCoding;
-(long long)decodeIntegerForKey:(id)arg1 ;
-(const char*)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2 ;
-(float)decodeFloatForKey:(id)arg1 ;
-(CGPoint)decodeCGPointForKey:(id)arg1 ;
-(CGSize)decodeCGSizeForKey:(id)arg1 ;
-(CGRect)decodeCGRectForKey:(id)arg1 ;
-(CGAffineTransform)decodeCGAffineTransformForKey:(id)arg1 ;
-(UIEdgeInsets)decodeUIEdgeInsetsForKey:(id)arg1 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(id)initForReadingWithData:(id)arg1 ;
-(id)initForReadingWithData:(id)arg1 error:(id*)arg2 ;
-(void)replaceObject:(id)arg1 withObject:(id)arg2 ;
-(BOOL)validateAndIndexData:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateAndIndexClasses:(const void*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)validateAndIndexKeys:(const void*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)validateAndIndexValues:(const void*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)validateAndIndexObjects:(const void*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)decodeArrayOfCGFloats:(double*)arg1 count:(long long)arg2 forKey:(id)arg3 ;
-(id)nextGenericKey;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(void)decodeValueOfObjCType:(const char*)arg1 at:(void*)arg2 ;
-(int)decodeInt32ForKey:(id)arg1 ;
-(BOOL)decodeArrayOfFloats:(float*)arg1 count:(long long)arg2 forKey:(id)arg3 ;
-(BOOL)decodeArrayOfDoubles:(double*)arg1 count:(long long)arg2 forKey:(id)arg3 ;
-(id)decodeNXObject;
-(id)decodeDataObject;
-(id)decodeObject;
-(id)decodePropertyList;
-(void)decodeValuesOfObjCTypes:(const char*)arg1 ;
-(void)decodeArrayOfObjCType:(const char*)arg1 count:(unsigned long long)arg2 at:(void*)arg3 ;
-(void*)decodeBytesWithReturnedLength:(unsigned long long*)arg1 ;
-(long long)versionForClassName:(id)arg1 ;
@end

