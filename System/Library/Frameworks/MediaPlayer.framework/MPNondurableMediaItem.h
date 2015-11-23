/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:31 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaItem.h>

@interface MPNondurableMediaItem : MPMediaItem {

	unsigned long long _persistentID;

}
+(BOOL)canFilterByProperty:(id)arg1 ;
+(id)defaultPropertyValues;
-(id)mediaLibrary;
-(id)initWithPersistentID:(unsigned long long)arg1 ;
-(id)valuesForProperties:(id)arg1 ;
-(void)noteWasPlayedToTime:(double)arg1 skipped:(BOOL)arg2 ;
-(BOOL)didSkipWithPlayedToTime:(double)arg1 ;
-(void)incrementPlayCountForPlayingToEnd;
-(BOOL)incrementPlayCountForStopTime:(double)arg1 ;
-(BOOL)existsInLibrary;
-(void)enumerateValuesForProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)markNominalAmountHasBeenPlayed;
-(void)incrementSkipCount;
-(void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(/*^block*/id)arg1 ;
-(double)nominalHasBeenPlayedThreshold;
-(BOOL)isUsableAsRepresentativeItem;
-(unsigned long long)persistentID;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
@end
