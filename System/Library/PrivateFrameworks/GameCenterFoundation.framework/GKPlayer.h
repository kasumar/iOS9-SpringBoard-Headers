/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GKPlayerInternal, NSAttributedString, NSArray, NSString, NSDate, GKGame;

@interface GKPlayer : NSObject <NSCoding, NSSecureCoding> {

	GKPlayerInternal* _internal;
	NSAttributedString* _whenString;
	NSArray* _friends;

}

@property (readonly) NSString * referenceKey; 
@property (nonatomic,retain) NSString * reason; 
@property (nonatomic,retain) NSString * reason2; 
@property (assign,nonatomic) unsigned rid; 
@property (assign,nonatomic) int source; 
@property (nonatomic,readonly) BOOL isFriendRecommendation; 
@property (nonatomic,retain) NSString * playerID; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,copy) NSString * alias; 
@property (nonatomic,readonly) NSString * guestIdentifier; 
@property (retain) GKPlayerInternal * internal;                               //@synthesize internal=_internal - In the implementation block
@property (nonatomic,copy) NSString * status; 
@property (nonatomic,readonly) NSString * firstName; 
@property (nonatomic,readonly) NSString * lastName; 
@property (nonatomic,readonly) NSDate * lastPlayedDate; 
@property (nonatomic,readonly) GKGame * lastPlayedGame; 
@property (nonatomic,readonly) BOOL hasPhoto; 
@property (getter=isLoaded,nonatomic,readonly) BOOL loaded; 
@property (nonatomic,readonly) BOOL isFamiliarFriend; 
@property (assign,nonatomic) unsigned long long numberOfFriends; 
@property (nonatomic,readonly) SCD_Struct_GK4 stats; 
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,retain) NSAttributedString * whenString;                 //@synthesize whenString=_whenString - In the implementation block
@property (nonatomic,readonly) BOOL isLocalPlayer; 
@property (nonatomic,readonly) BOOL isAnonymousPlayer; 
@property (nonatomic,readonly) BOOL isUnknownPlayer; 
@property (nonatomic,readonly) BOOL isAutomatchPlayer; 
@property (nonatomic,retain) NSArray * friends;                               //@synthesize friends=_friends - In the implementation block
@property (assign,nonatomic) BOOL isFriend; 
+(void)preloadImagesForPlayers:(id)arg1 size:(long long)arg2 ;
+(long long)sizeForPhotoSize:(long long)arg1 ;
+(id)canonicalizedPlayerForInternal:(id)arg1 ;
+(id)playerFromPlayerID:(id)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(BOOL)supportsSecureCoding;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(void)loadPlayersForLegacyIdentifiers:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(id)cacheKeyForPlayerID:(id)arg1 ;
+(void)_loadPlayersForIdentifiers:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(id)anonymousPlayer;
+(id)unknownPlayer;
+(id)anonymousGuestPlayerWithIdentifier:(id)arg1 ;
+(void)loadCompletePlayersForPlayers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)loadPlayersForIdentifiers:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(id)automatchPlayer;
-(void)_loadPhotoForSize:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)loadPhotoForSize:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)placeholderImage;
-(id)photoURLForSize:(long long)arg1 ;
-(id)placeholderImageForType:(unsigned char)arg1 ;
-(id)imageSourceForPlaceholders;
-(id)imageURLForPhotoSizeList;
-(NSString *)referenceKey;
-(id)minimalPlayer;
-(BOOL)isFriendRecommendation;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(NSString *)cacheKey;
-(NSString *)displayName;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)setInternal:(GKPlayerInternal *)arg1 ;
-(void)loadCommonFriends:(BOOL)arg1 asPlayersWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)loadGamesPlayedIncludingInstalledGames:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isFamiliarFriend;
-(void)acceptFriendRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)declineFriendRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadGamesPlayed:(/*^block*/id)arg1 ;
-(void)loadGamesPlayedDetailsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadProfileWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isFriendablePlayer;
-(NSString *)playerID;
-(id)displayNameWithOptions:(unsigned char)arg1 ;
-(NSAttributedString *)whenString;
-(SCD_Struct_GK4)stats;
-(GKPlayerInternal *)internal;
-(void)loadRecentMatchesForGame:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)setWhenString:(NSAttributedString *)arg1 ;
-(GKGame *)lastPlayedGame;
-(id)sortName;
-(void)loadFriendsAsPlayersWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)hasPhoto;
-(id)email;
-(id)emails;
-(void)_postChangeNotification;
-(void)setFriends:(NSArray *)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)postChangeNotification;
-(NSArray *)friends;
@end
