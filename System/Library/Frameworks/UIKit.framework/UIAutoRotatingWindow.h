/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIApplicationRotationFollowingWindow.h>

@interface UIAutoRotatingWindow : UIApplicationRotationFollowingWindow {

	long long _interfaceOrientation;
	BOOL _unknownOrientation;

}
+(id)sharedPopoverHostingWindow;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_initWithFrame:(CGRect)arg1 attached:(BOOL)arg2 ;
-(void)_didRemoveSubview:(id)arg1 ;
-(void)updateForOrientation:(long long)arg1 ;
-(void)commonInit;
@end

