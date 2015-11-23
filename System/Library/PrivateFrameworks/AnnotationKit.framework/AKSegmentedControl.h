/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKit/UIControl.h>

@class NSArray, NSMutableOrderedSet;

@interface AKSegmentedControl : UIControl {

	unsigned long long _selectionType;
	unsigned long long _selectedSegment;
	NSArray* _images;
	NSArray* _buttons;
	NSMutableOrderedSet* _selectionStack;

}

@property (assign,nonatomic) unsigned long long selectionType;                  //@synthesize selectionType=_selectionType - In the implementation block
@property (assign,nonatomic) unsigned long long selectedSegment;                //@synthesize selectedSegment=_selectedSegment - In the implementation block
@property (nonatomic,retain) NSArray * images;                                  //@synthesize images=_images - In the implementation block
@property (nonatomic,retain) NSArray * buttons;                                 //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * selectionStack;              //@synthesize selectionStack=_selectionStack - In the implementation block
-(unsigned long long)selectionType;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSArray *)images;
-(void)_commonInit;
-(void)setSelectedSegment:(unsigned long long)arg1 ;
-(void)setEnabled:(BOOL)arg1 forSegment:(unsigned long long)arg2 ;
-(BOOL)isEnabledForSegment:(unsigned long long)arg1 ;
-(unsigned long long)selectedSegment;
-(void)setImages:(NSArray *)arg1 ;
-(NSArray *)buttons;
-(void)_buttonTapped:(id)arg1 ;
-(id)initWithImages:(id)arg1 ;
-(void)_configureForNewImages;
-(void)_setSelected:(BOOL)arg1 forSegment:(unsigned long long)arg2 ;
-(id)segmentForTag:(long long)arg1 ;
-(void)setSelected:(BOOL)arg1 forSegment:(unsigned long long)arg2 ;
-(BOOL)isSelectedForSegment:(unsigned long long)arg1 ;
-(void)selectSegmentWithTag:(long long)arg1 ;
-(void)deselectAllSegments;
-(void)setTag:(long long)arg1 forSegment:(unsigned long long)arg2 ;
-(long long)tagForSegment:(unsigned long long)arg1 ;
-(void)setSelectionType:(unsigned long long)arg1 ;
-(NSMutableOrderedSet *)selectionStack;
-(void)setSelectionStack:(NSMutableOrderedSet *)arg1 ;
-(unsigned long long)segmentCount;
-(id)segmentAtIndex:(unsigned long long)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
@end
