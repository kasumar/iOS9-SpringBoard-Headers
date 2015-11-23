/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:24 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GEOTileServerProxyDelegate, OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSObject, GEOResourceManifestConfiguration, NSLocale;

@interface GEOTileServerProxy : NSObject {

	id<GEOTileServerProxyDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQ;
	GEOResourceManifestConfiguration* _manifestConfiguration;
	NSLocale* _locale;

}

@property (assign,nonatomic) id<GEOTileServerProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> delegateQ;               //@synthesize delegateQ=_delegateQ - In the implementation block
-(void)setDelegate:(id<GEOTileServerProxyDelegate>)arg1 ;
-(void)dealloc;
-(id<GEOTileServerProxyDelegate>)delegate;
-(void)close;
-(void)reprioritizeKey:(const GEOTileKey*)arg1 newPriority:(unsigned)arg2 ;
-(void)reportCorruptTile:(const GEOTileKey*)arg1 ;
-(void)endPreloadSession;
-(void)flushPendingWrites;
-(BOOL)skipNetworkForKeysWhenPreloading:(id)arg1 ;
-(void)shrinkDiskCacheToSize:(unsigned long long)arg1 ;
-(void)loadTiles:(id)arg1 priorities:(unsigned*)arg2 options:(unsigned long long)arg3 client:(id)arg4 ;
-(void)beginPreloadSessionOfSize:(unsigned long long)arg1 exclusive:(BOOL)arg2 ;
-(void)open;
-(void)calculateFreeableSize;
-(void)cancel:(const GEOTileKey*)arg1 ;
-(id)initWithCacheLocation:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)delegateQ;
-(void)setDelegateQ:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
