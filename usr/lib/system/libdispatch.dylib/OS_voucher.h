/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/system/libdispatch.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libdispatch.dylib/OS_object.h>
#import <libobjc.A.dylib/OS_voucher.h>

@protocol OS_voucher <NSObject>
@end


@class NSString;

@interface OS_voucher : OS_object <OS_voucher>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
-(void)_dispose;
-(id)init;
-(NSString *)debugDescription;
-(void)_xref_dispose;
@end

