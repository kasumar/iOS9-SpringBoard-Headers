/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:54 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UIEvent : NSObject {

	GSEventRef _gsEvent;
	IOHIDEventRef _hidEvent;
	double _timestamp;

}

@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) long long subtype; 
@property (nonatomic,readonly) double timestamp; 
-(id)_screen;
-(id)_init;
-(id)_windows;
-(void)_sendEventToResponder:(id)arg1 ;
-(double)_wheelVelocity;
-(void)_setTimestamp:(double)arg1 ;
-(BOOL)isKeyDown;
-(IOHIDEventRef)_hidEvent;
-(GSEventRef)_gsEvent;
-(BOOL)_isKeyDown;
-(id)_modifiedInput;
-(void)_setHIDEvent:(IOHIDEventRef)arg1 ;
-(void)_setGSEvent:(GSEventRef)arg1 ;
-(id)_triggeringPhysicalButton;
-(unsigned long long)_focusHeading;
-(long long)_moveDirection;
-(CGPoint)_digitizerLocation;
-(long long)_modifierFlags;
-(id)_unmodifiedInput;
-(id)_initWithEvent:(GSEventRef)arg1 touches:(id)arg2 ;
-(id)_touchesForGestureRecognizer:(id)arg1 ;
-(int)_shakeState;
-(id)_allPhysicalButtons;
-(id)_physicalButtonsForResponder:(id)arg1 ;
-(id)_physicalButtonsForGestureRecognizer:(id)arg1 ;
-(void)dealloc;
-(double)timestamp;
-(long long)type;
-(id)touchesForGestureRecognizer:(id)arg1 ;
-(id)allTouches;
-(long long)subtype;
-(id)touchesForWindow:(id)arg1 ;
-(id)touchesForView:(id)arg1 ;
-(id)coalescedTouchesForTouch:(id)arg1 ;
-(id)predictedTouchesForTouch:(id)arg1 ;
@end
