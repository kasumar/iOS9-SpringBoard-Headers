/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:02 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKOperationResult.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKServerChangeToken, NSNumber;

@interface CKFetchChangedRecordZonesOperationResult : CKOperationResult <NSSecureCoding> {

	CKServerChangeToken* _serverChangeToken;
	NSNumber* _status;

}

@property (nonatomic,retain) CKServerChangeToken * serverChangeToken;              //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
@property (nonatomic,retain) NSNumber * status;                                    //@synthesize status=_status - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSNumber *)status;
-(void)setStatus:(NSNumber *)arg1 ;
-(id)CKPropertiesDescription;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(CKServerChangeToken *)serverChangeToken;
@end
