/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:05 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIAccessibility/UIAccessibility-Structs.h>
#import <UIAccessibility/__UIAccessibilityElementSuperCategory_super.h>

@interface UIAccessibilityElementSuperCategory : __UIAccessibilityElementSuperCategory_super
+(Class)safeCategoryBaseClass;
+(id)safeCategoryTargetClassName;
-(BOOL)_accessibilitySupportsActivateAction;
-(float)_accessibilityActivationDelay;
-(id)_accessibilityAutomaticIdentifier;
-(void)accessibilityZoomInAtPoint:(CGPoint)arg1 ;
-(void)accessibilityZoomOutAtPoint:(CGPoint)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)accessibilityLabel;
-(CGRect)accessibilityFrame;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)accessibilityLanguage;
-(id)accessibilityPath;
-(void)setAccessibilityContainer:(id)arg1 ;
-(void)accessibilityElementDidBecomeFocused;
-(void)accessibilityElementDidLoseFocus;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(BOOL)accessibilityActivate;
-(id)initWithAccessibilityContainer:(id)arg1 ;
-(BOOL)_accessibilitySupportsHandwriting;
-(BOOL)_accessibilityProvidesOwnFrame;
-(void)_accessibilitySetValue:(id)arg1 ;
@end
