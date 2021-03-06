/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSSpringAnimationSettings.h>

@class CAMediaTimingFunction;

@interface BSMutableSpringAnimationSettings : BSSpringAnimationSettings

@property (assign,nonatomic) double delay; 
@property (assign,nonatomic) double frameInterval; 
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction; 
@property (assign,nonatomic) double mass; 
@property (assign,nonatomic) double stiffness; 
@property (assign,nonatomic) double damping; 
@property (assign,nonatomic) double epsilon; 
@property (assign,nonatomic) double initialVelocity; 
-(void)setInitialVelocity:(double)arg1 ;
-(void)setStiffness:(double)arg1 ;
-(void)setDamping:(double)arg1 ;
-(void)setMass:(double)arg1 ;
-(void)setDelay:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFrameInterval:(double)arg1 ;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)setEpsilon:(double)arg1 ;
@end

