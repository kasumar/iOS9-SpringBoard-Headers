/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:55 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
#import <libAVFAudio.dylib/AVAudioUnitMIDIInstrument.h>

@interface AVAudioUnitSampler : AVAudioUnitMIDIInstrument

@property (assign,nonatomic) float stereoPan; 
@property (assign,nonatomic) float masterGain; 
@property (assign,nonatomic) float globalTuning; 
-(id)initWithAudioComponentDescription:(AudioComponentDescription)arg1 ;
-(BOOL)loadInstrumentAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)loadSoundBankInstrumentAtURL:(id)arg1 program:(unsigned char)arg2 bankMSB:(unsigned char)arg3 bankLSB:(unsigned char)arg4 error:(id*)arg5 ;
-(BOOL)loadAudioFilesAtURLs:(id)arg1 error:(id*)arg2 ;
-(float)stereoPan;
-(float)masterGain;
-(float)globalTuning;
-(void)setStereoPan:(float)arg1 ;
-(void)setMasterGain:(float)arg1 ;
-(void)setGlobalTuning:(float)arg1 ;
-(id)init;
@end
