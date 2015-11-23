/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/ISSingleton.h>
#import <libobjc.A.dylib/SUDialogDelegate.h>

@class NSMutableArray, NSString;

@interface SUDialogManager : NSObject <ISSingleton, SUDialogDelegate> {

	NSMutableArray* _dialogs;

}

@property (nonatomic,readonly) long long numberOfPendingDialogs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)newDialogWithError:(id)arg1 ;
+(void)setSharedInstance:(id)arg1 ;
-(void)dealloc;
-(BOOL)presentDialog:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(BOOL)presentDialog:(id)arg1 ;
-(long long)numberOfPendingDialogs;
-(void)_performDefaultActionForDialog:(id)arg1 buttonIndex:(long long)arg2 ;
-(BOOL)_haveEquivalentDialog:(id)arg1 ;
-(void)_finishDialog:(id)arg1 withButtonIndex:(long long)arg2 ;
-(BOOL)presentDialogForError:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)dialog:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)dialogDidCancel:(id)arg1 ;
-(BOOL)presentDialogForError:(id)arg1 ;
@end
