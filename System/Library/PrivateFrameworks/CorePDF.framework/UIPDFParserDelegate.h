/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSString;

@interface UIPDFParserDelegate : NSObject <NSXMLParserDelegate> {

	CGPoint _p[4];
	CGPathRef _path;
	BOOL _parserError;

}

@property (readonly) CGPathRef path; 
@property (readonly) BOOL parserError;                              //@synthesize parserError=_parserError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)parserError;
-(void)dealloc;
-(id)init;
-(CGPathRef)path;
-(void)parserDidStartDocument:(id)arg1 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
@end

