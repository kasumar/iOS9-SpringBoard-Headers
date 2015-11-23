/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:10 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PairedSync/PairedSync-Structs.h>
#import <libobjc.A.dylib/PSYDeviceSyncStateObserver.h>

@protocol OS_dispatch_queue, PSYSyncRestrictionProviderDelegate;
@class NSObject, NSURL, NSString;

@interface PSYSyncRestrictionProvider : NSObject <PSYDeviceSyncStateObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _hasReceivedStartSync;
	NSURL* _pairingDataURL;
	NSURL* _serviceDirectory;
	opaque_pthread_mutex_t _serviceDirectoryLock;
	id<PSYSyncRestrictionProviderDelegate> _delegate;
	NSString* _serviceName;
	unsigned long long _syncRestriction;

}

@property (assign,nonatomic,__weak) id<PSYSyncRestrictionProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * serviceName;                                            //@synthesize serviceName=_serviceName - In the implementation block
@property (assign) unsigned long long syncRestriction;                                            //@synthesize syncRestriction=_syncRestriction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)serviceName;
-(void)setDelegate:(id<PSYSyncRestrictionProviderDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id<PSYSyncRestrictionProviderDelegate>)delegate;
-(unsigned long long)syncRestriction;
-(void)registerForNotifications;
-(void)unregisterForNotifications;
-(id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3 ;
-(void)serviceHasReceivedStartSync;
-(void)setSyncRestriction:(unsigned long long)arg1 ;
-(void)deviceSyncStateDidChange:(unsigned long long)arg1 ;
-(void)_reloadPairingStorePath;
-(void)pairingUpdated;
-(id)pairingDataURL;
-(void)_updateSyncRestrictionIfNeeded;
-(id)_serviceDirectory;
-(id)_dataFileName;
-(id)_pairingDataURL;
-(void)_setServiceDirectory:(id)arg1 ;
-(void)_createPairingDataDirectoryIfNeeded;
-(void)_reloadPersistentData;
-(unsigned long long)_restrictionForCurrentState;
-(void)_didUpdatePairingDataStoreURL:(id)arg1 ;
-(void)unregisterForFirstKeybagUnlockNotification;
-(id)serviceDirectory;
-(void)keybagStateChanged;
-(void)registerForFirstKeybagUnlockNotification;
@end
