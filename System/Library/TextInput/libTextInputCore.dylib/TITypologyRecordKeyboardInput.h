/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:22 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TITypologyRecord.h>

@class TIKeyboardInput, TIKeyboardState, TIKeyboardOutput, TIKeyboardConfiguration;

@interface TITypologyRecordKeyboardInput : TITypologyRecord {

	TIKeyboardInput* _input;
	TIKeyboardState* _keyboardState;
	TIKeyboardOutput* _output;
	TIKeyboardConfiguration* _keyboardConfig;

}

@property (nonatomic,retain) TIKeyboardInput * input;                               //@synthesize input=_input - In the implementation block
@property (nonatomic,retain) TIKeyboardState * keyboardState;                       //@synthesize keyboardState=_keyboardState - In the implementation block
@property (nonatomic,retain) TIKeyboardOutput * output;                             //@synthesize output=_output - In the implementation block
@property (nonatomic,retain) TIKeyboardConfiguration * keyboardConfig;              //@synthesize keyboardConfig=_keyboardConfig - In the implementation block
-(void)applyToStatistic:(id)arg1 ;
-(void)setInput:(TIKeyboardInput *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(TIKeyboardInput *)input;
-(TIKeyboardOutput *)output;
-(void)setOutput:(TIKeyboardOutput *)arg1 ;
-(id)textSummary;
-(void)setKeyboardState:(TIKeyboardState *)arg1 ;
-(TIKeyboardState *)keyboardState;
-(TIKeyboardConfiguration *)keyboardConfig;
-(void)setKeyboardConfig:(TIKeyboardConfiguration *)arg1 ;
@end

