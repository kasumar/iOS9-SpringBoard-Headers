/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:28 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, UIView;


@protocol CalloutViewControllerProtocol <NSObject>
@property (nonatomic,copy) NSString * calloutTitle; 
@property (nonatomic,copy) NSString * calloutSubtitle; 
@property (nonatomic,retain) UIView * leftView; 
@property (nonatomic,retain) UIView * rightView; 
@property (nonatomic,retain) UIView * detailView; 
@required
-(void)setCalloutSubtitle:(id)arg1 animated:(BOOL)arg2;
-(NSString *)calloutSubtitle;
-(void)setDetailView:(id)arg1 animated:(BOOL)arg2;
-(BOOL)canDisplayCompleteTitleWhenExpanded;
-(void)beginMapsTransitionMovingSideways;
-(void)setCalloutSubtitle:(id)arg1;
-(UIView *)detailView;
-(void)setDetailView:(id)arg1;
-(void)setLeftView:(id)arg1 animated:(BOOL)arg2;
-(void)setRightView:(id)arg1 animated:(BOOL)arg2;
-(void)setLeftView:(id)arg1;
-(void)setRightView:(id)arg1;
-(UIView *)leftView;
-(UIView *)rightView;
-(NSString *)calloutTitle;
-(void)setCalloutTitle:(id)arg1;

@end

