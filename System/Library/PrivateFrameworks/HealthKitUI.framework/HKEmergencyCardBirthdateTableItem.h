/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HKEmergencyCardTableItem.h>
#import <libobjc.A.dylib/HKMedicalIDEditorCellEditDelegate.h>

@class HKMedicalIDEditorDateCell, _HKCustomInsetCellLayoutManager;

@interface HKEmergencyCardBirthdateTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate> {

	HKMedicalIDEditorDateCell* _editableCell;
	_HKCustomInsetCellLayoutManager* _layoutManager;

}
-(id)initInEditMode:(BOOL)arg1 ;
-(id)title;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2 ;
-(BOOL)shouldHighlightRowAtIndex:(long long)arg1 ;
-(BOOL)canEditRowAtIndex:(long long)arg1 ;
-(long long)editingStyleForRowAtIndex:(long long)arg1 ;
-(long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2 ;
-(void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2 ;
-(void)medicalIDEditorCellDidChangeValue:(id)arg1 ;
-(id)_createEditableCell;
@end
