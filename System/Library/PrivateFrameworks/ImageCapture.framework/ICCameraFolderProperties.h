/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:38 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface ICCameraFolderProperties : NSObject {

	NSMutableArray* _files;
	NSMutableArray* _folders;

}

@property (retain) NSMutableArray * files;                //@synthesize files=_files - In the implementation block
@property (retain) NSMutableArray * folders;              //@synthesize folders=_folders - In the implementation block
-(void)dealloc;
-(NSMutableArray *)folders;
-(void)setFolders:(NSMutableArray *)arg1 ;
-(void)finalize;
-(NSMutableArray *)files;
-(void)setFiles:(NSMutableArray *)arg1 ;
@end

