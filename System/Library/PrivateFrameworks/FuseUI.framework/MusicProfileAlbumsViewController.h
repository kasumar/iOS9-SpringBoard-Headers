/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:13 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicProductTracklistTableViewController.h>

@class MusicLibraryAlbumsViewConfiguration, MPAVController;

@interface MusicProfileAlbumsViewController : MusicProductTracklistTableViewController {

	BOOL _collapseSections;
	MusicLibraryAlbumsViewConfiguration* _libraryAlbumsViewConfiguration;
	MPAVController* _player;

}

@property (nonatomic,readonly) MusicLibraryAlbumsViewConfiguration * libraryAlbumsViewConfiguration; 
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(id)initWithLibraryViewConfiguration:(id)arg1 ;
-(void)_updateCollapseSections;
-(MusicLibraryAlbumsViewConfiguration *)libraryAlbumsViewConfiguration;
-(void)_setCollapseSections:(BOOL)arg1 ;
-(long long)handleSelectionOfSectionHeaderForSectionEntityValueContext:(id)arg1 ;
-(void)tableViewDataDidReload;
@end
