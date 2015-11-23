/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:11 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMUIEvent.h>

@interface DOMGestureEvent : DOMUIEvent

@property (readonly) id<DOMEventTarget> target; 
@property (readonly) float scale; 
@property (readonly) float rotation; 
@property (readonly) BOOL ctrlKey; 
@property (readonly) BOOL shiftKey; 
@property (readonly) BOOL altKey; 
@property (readonly) BOOL metaKey; 
-(float)scale;
-(id<DOMEventTarget>)target;
-(float)rotation;
-(BOOL)ctrlKey;
-(BOOL)shiftKey;
-(BOOL)altKey;
-(BOOL)metaKey;
-(void)initGestureEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 detail:(int)arg5 screenX:(int)arg6 screenY:(int)arg7 clientX:(int)arg8 clientY:(int)arg9 ctrlKey:(BOOL)arg10 altKey:(BOOL)arg11 shiftKey:(BOOL)arg12 metaKey:(BOOL)arg13 target:(id)arg14 scale:(float)arg15 rotation:(float)arg16 ;
@end
