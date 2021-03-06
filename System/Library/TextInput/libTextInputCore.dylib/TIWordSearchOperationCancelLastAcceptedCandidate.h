/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:22 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TIWordSearchOperation.h>

@class TIMecabraWrapper;

@interface TIWordSearchOperationCancelLastAcceptedCandidate : TIWordSearchOperation {

	TIMecabraWrapper* _mecabraWrapper;

}

@property (nonatomic,retain) TIMecabraWrapper * mecabraWrapper;              //@synthesize mecabraWrapper=_mecabraWrapper - In the implementation block
-(void)cancel;
-(void)dealloc;
-(void)perform;
-(TIMecabraWrapper *)mecabraWrapper;
-(void)setMecabraWrapper:(TIMecabraWrapper *)arg1 ;
-(id)initWithWordSearch:(id)arg1 ;
@end

