/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/TextInput_chr.bundle/TextInput_chr
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput_chr/TextInput_chr-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManagerZephyr.h>

@interface TIKeyboardInputManager_chr : TIKeyboardInputManagerZephyr
-(id)externalStringToInternal:(id)arg1 ;
-(id)internalStringToExternal:(id)arg1 ;
-(BOOL)dictionaryUsesExternalEncoding;
-(TIInputManagerZephyr*)initImplementation;
-(BOOL)doesComposeText;
@end
