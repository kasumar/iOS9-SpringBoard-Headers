/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:50 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@interface ML3DatabaseBlob : NSObject {

	sqlite3_blobRef _sqliteHandle;

}
-(void)dealloc;
-(id)init;
-(unsigned long long)length;
-(id)data;
-(int)readData:(id)arg1 numberOfBytes:(unsigned long long)arg2 offset:(unsigned long long)arg3 ;
-(id)initWithSQLiteHandle:(sqlite3_blobRef)arg1 ;
-(int)writeData:(id)arg1 numberOfBytes:(unsigned long long)arg2 offset:(unsigned long long)arg3 ;
@end

