/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:31 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADDebugInterface.h>

@interface CADDebugOperationGroup : CADOperationGroup <CADDebugInterface>
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
+(id)whitelistedBundles;
-(void)CADDebugMoveDiagnosticsDBToCrashReporterFolderWithError:(/*^block*/id)arg1 ;
-(void)CADDebugGatherLogsWithError:(/*^block*/id)arg1 ;
-(id)_trimAndCompressTextData:(id)arg1 toMaxLength:(unsigned long long)arg2 ;
-(id)_compressData:(id)arg1 ;
-(id)_trimTextData:(id)arg1 toLength:(unsigned long long)arg2 ;
@end
