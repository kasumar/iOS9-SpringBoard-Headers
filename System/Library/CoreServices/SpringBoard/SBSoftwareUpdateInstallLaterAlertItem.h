//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBBaseSoftwareUpdateAlertItem.h"

@class NSMutableArray, NSString, SUAutoInstallOperation;

@interface SBSoftwareUpdateInstallLaterAlertItem : SBBaseSoftwareUpdateAlertItem
{
    SUAutoInstallOperation *_tryTonightOperation;
    NSMutableArray *_buttonActionBlocks;
    NSString *_repopReason;
    _Bool _choseInstallTonight;
    _Bool _scheduleInstallAlertRepopOnDismiss;
}

@property(retain, nonatomic) SUAutoInstallOperation *tryTonightOperation; // @synthesize tryTonightOperation=_tryTonightOperation;
- (void)_clearTryTonightOperationCancelling:(_Bool)arg1 forReason:(id)arg2;
- (void)_scheduleInstallAlertRepopOnDismissWithReason:(id)arg1;
- (void)_addButtonWithTitle:(id)arg1 action:(CDUnknownBlockType)arg2;
- (_Bool)shouldShowInLockScreen;
- (_Bool)undimsScreen;
- (_Bool)dismissOnLock;
- (_Bool)allowLockScreenDismissal;
- (_Bool)allowMenuButtonDismissal;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didDeactivateForReason:(int)arg1;
- (void)willDeactivateForReason:(int)arg1;
- (void)dealloc;
- (id)initWithDescriptor:(id)arg1 softwareUpdateController:(id)arg2 tryTonightOperation:(id)arg3;

@end
