/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:13 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface WLLogController : NSObject {

	BOOL _logToFile;
	BOOL _logToSyslog;
	unsigned long long _maxLogLevel;

}
+(id)sharedLogger;
+(id)_logDirectory;
-(id)init;
-(void)_reloadLogPreferences;
-(void)logMessageWithLevel:(unsigned long long)arg1 format:(id)arg2 args:(char*)arg3 ;
-(BOOL)_loggingEnabled;
@end
