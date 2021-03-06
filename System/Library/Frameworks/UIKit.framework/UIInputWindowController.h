/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:05 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIApplicationRotationFollowingControllerNoTouches.h>
#import <UIKit/UISplitKeyboardSource.h>
#import <UIKit/UIInputViewAnimationHost.h>
#import <UIKit/_UIRemoteKeyboardViewSource.h>
#import <UIKit/_UITextEffectsSceneObserver.h>
#import <UIKit/_UIRemoteKeyboardDistributedViewSource.h>

@protocol _UIRemoteKeyboardControllerDelegate;
@class UIView, UIViewController, UIInputViewSetPlacement, UIInputViewSet, NSMutableArray, NSArray, NSMutableDictionary, UIInputViewSetNotificationInfo, NSString, UIInputViewController, UIKBInputBackdropView, NSLayoutConstraint, UIInputViewPlacementTransition;

@interface UIInputWindowController : UIApplicationRotationFollowingControllerNoTouches <UISplitKeyboardSource, UIInputViewAnimationHost, _UIRemoteKeyboardViewSource, _UITextEffectsSceneObserver, _UIRemoteKeyboardDistributedViewSource> {

	NSMutableArray* _animationStyleStack;
	int _suppressedCallbacks;
	int _suppressedNotifications;
	BOOL _isChangingPlacement;
	BOOL _isChangingInputViews;
	BOOL _requiresConstraintUpdate;
	int _hiddenCount;
	BOOL _inhibitingHiding;
	unsigned long long _rotationState;
	BOOL _disablePlacementChanges;
	BOOL _suppressUpdateVisibilityConstraints;
	NSArray* _rootViewConstraints;
	NSMutableDictionary* _inputViewEdgeConstraints;
	NSMutableDictionary* _accessoryViewEdgeConstraints;
	NSMutableDictionary* _assistantViewEdgeConstraints;
	NSMutableDictionary* _inputBackdropViewEdgeConstraints;
	NSMutableDictionary* _assistantBackdropViewEdgeConstraints;
	NSMutableDictionary* _accessoryBackdropViewEdgeConstraints;
	UIView* _preRotationSnapshot;
	CGSize _preRotationInputViewSize;
	CGSize _preRotationInputAssistantViewSize;
	CGSize _preRotationInputAccessoryViewSize;
	CGAffineTransform _preRotationInputViewTransform;
	CGAffineTransform _preRotationInputAssistantViewTransform;
	CGAffineTransform _preRotationInputAccessoryViewTransform;
	UIInputViewSetNotificationInfo* _rotationInfo;
	SEL _interactiveTransitionCleanupSelector;
	CGRect _preLayoutHostViewFrame;
	BOOL _didOverridePreLayoutHostViewFrame;
	BOOL _didPostLayoutNotification;
	UIInputViewSetNotificationInfo* _keyboardHeightChangeNotificationInfo;
	BOOL _wasOnScreen;
	NSString* _lastKeyboardID;
	BOOL _shouldNotifyRemoteKeyboards;
	UIView* _hostView;
	UIInputViewSet* _inputViewSet;
	UIInputViewSetPlacement* _placement;
	UIInputViewController* _inputViewController;
	UIInputViewController* _inputAssistantViewController;
	UIInputViewController* _inputAccessoryViewController;
	UIKBInputBackdropView* _inputBackdropView;
	UIKBInputBackdropView* _inputAssistantBackdropView;
	UIKBInputBackdropView* _inputAccessoryBackdropView;
	NSArray* _visibilityConstraints;
	NSLayoutConstraint* _verticalVisibilityConstraint;
	UIInputViewSetPlacement* _postRotationPlacement;
	UIInputViewSet* _postRotationInputViewSet;
	UIInputViewSetNotificationInfo* _postRotationInputViewNotificationInfo;
	UIInputViewSetNotificationInfo* _templateNotificationInfo;
	UIInputViewPlacementTransition* _currentTransition;
	id<_UIRemoteKeyboardControllerDelegate> _controllerDelegate;
	NSLayoutConstraint* _inputViewHeightConstraint;
	NSLayoutConstraint* _assistantViewHeightConstraint;
	NSLayoutConstraint* _accessoryViewHeightConstraint;

}

@property (nonatomic,retain) UIInputViewSet * inputViewSet;                                                                          //@synthesize inputViewSet=_inputViewSet - In the implementation block
@property (assign,nonatomic) UIInputViewSetPlacement * placement;                                                                    //@synthesize placement=_placement - In the implementation block
@property (nonatomic,readonly) UIView * hostView;                                                                                    //@synthesize hostView=_hostView - In the implementation block
@property (nonatomic,readonly) UIKBInputBackdropView * inputViewBackdrop; 
@property (nonatomic,retain,readonly) UIInputViewSetPlacement * placementIgnoringRotation; 
@property (assign,nonatomic) BOOL shouldNotifyRemoteKeyboards;                                                                       //@synthesize shouldNotifyRemoteKeyboards=_shouldNotifyRemoteKeyboards - In the implementation block
@property (nonatomic,readonly) long long keyboardOrientation; 
@property (nonatomic,readonly) UIView * _inputView; 
@property (nonatomic,readonly) UIView * _inputAssistantView; 
@property (nonatomic,readonly) UIView * _inputAccessoryView; 
@property (nonatomic,retain) UIInputViewController * _inputViewController;                                                           //@synthesize inputViewController=_inputViewController - In the implementation block
@property (nonatomic,retain) UIInputViewController * _inputAssistantViewController;                                                  //@synthesize inputAssistantViewController=_inputAssistantViewController - In the implementation block
@property (nonatomic,retain) UIInputViewController * _inputAccessoryViewController;                                                  //@synthesize inputAccessoryViewController=_inputAccessoryViewController - In the implementation block
@property (setter=setInputBackdropView:,nonatomic,retain) UIKBInputBackdropView * _inputBackdropView;                                //@synthesize inputBackdropView=_inputBackdropView - In the implementation block
@property (setter=setInputAssistantBackdropView:,nonatomic,retain) UIKBInputBackdropView * _inputAssistantBackdropView;              //@synthesize inputAssistantBackdropView=_inputAssistantBackdropView - In the implementation block
@property (setter=setInputAccessoryBackdropView:,nonatomic,retain) UIKBInputBackdropView * _inputAccessoryBackdropView;              //@synthesize inputAccessoryBackdropView=_inputAccessoryBackdropView - In the implementation block
@property (nonatomic,retain) NSArray * visibilityConstraints;                                                                        //@synthesize visibilityConstraints=_visibilityConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * verticalVisibilityConstraint;                                                      //@synthesize verticalVisibilityConstraint=_verticalVisibilityConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * inputViewHeightConstraint;                                                         //@synthesize inputViewHeightConstraint=_inputViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * assistantViewHeightConstraint;                                                     //@synthesize assistantViewHeightConstraint=_assistantViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * accessoryViewHeightConstraint;                                                     //@synthesize accessoryViewHeightConstraint=_accessoryViewHeightConstraint - In the implementation block
@property (nonatomic,retain) UIInputViewSetPlacement * postRotationPlacement;                                                        //@synthesize postRotationPlacement=_postRotationPlacement - In the implementation block
@property (nonatomic,retain) UIInputViewSet * postRotationInputViewSet;                                                              //@synthesize postRotationInputViewSet=_postRotationInputViewSet - In the implementation block
@property (nonatomic,retain) UIInputViewSetNotificationInfo * postRotationInputViewNotificationInfo;                                 //@synthesize postRotationInputViewNotificationInfo=_postRotationInputViewNotificationInfo - In the implementation block
@property (nonatomic,retain) UIInputViewSetNotificationInfo * templateNotificationInfo;                                              //@synthesize templateNotificationInfo=_templateNotificationInfo - In the implementation block
@property (nonatomic,retain) UIInputViewPlacementTransition * currentTransition;                                                     //@synthesize currentTransition=_currentTransition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<_UIRemoteKeyboardControllerDelegate> controllerDelegate;                                             //@synthesize controllerDelegate=_controllerDelegate - In the implementation block
@property (nonatomic,readonly) BOOL isOnScreenRotating; 
@property (nonatomic,retain,readonly) UIView * view; 
@property (nonatomic,readonly) BOOL isChangingPlacement; 
@property (nonatomic,readonly) double positionConstraintConstant; 
+(BOOL)_doesOverrideLegacyFullScreenLayout;
+(id)tranformedUserInfoForNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(id)containerView;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CGRect)_defaultInitialViewFrame;
-(BOOL)isRotating;
-(CGPoint)_centerForOrientation:(long long)arg1 ;
-(CGRect)_boundsForOrientation:(long long)arg1 ;
-(void)window:(id)arg1 statusBarWillChangeFromHeight:(double)arg2 toHeight:(double)arg3 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)pushAnimationStyle:(id)arg1 ;
-(void)popAnimationStyle;
-(void)transitionDidFinish:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_UI78*)arg1 ;
-(void)updateViewConstraints;
-(id)transitioningView;
-(void)updateToPlacement:(id)arg1 withNormalAnimationsAndNotifications:(BOOL)arg2 ;
-(id)viewForTransitionScreenSnapshot;
-(CGRect)transitioningFrame;
-(void)setInputViewsHidden:(BOOL)arg1 ;
-(int)_clipCornersOfView:(id)arg1 ;
-(UIView *)hostView;
-(UIInputViewSet *)inputViewSet;
-(BOOL)isChangingPlacement;
-(UIInputViewSetPlacement *)placement;
-(BOOL)isUndocked;
-(void)setPlacement:(id)arg1 quietly:(BOOL)arg2 animated:(BOOL)arg3 generateSplitNotification:(BOOL)arg4 ;
-(void)setInterfaceAutorotationDisabled:(BOOL)arg1 ;
-(double)positionConstraintConstant;
-(void)completeTransition:(id)arg1 withInfo:(id)arg2 ;
-(void)startTransition:(id)arg1 withInfo:(id)arg2 ;
-(void)updateTransition:(id)arg1 withInfo:(id)arg2 ;
-(BOOL)isTranslating;
-(void)updateProgress:(double)arg1 startHeight:(double)arg2 endHeight:(double)arg3 ;
-(BOOL)isSplitting;
-(void)finishScrollViewTransition;
-(id)constructNotificationInfoForScrollWithMode:(unsigned long long)arg1 ;
-(void)prepareKeyboardHeightChangeWithDelta:(double)arg1 duration:(double)arg2 ;
-(void)keyboardHeightChangeDone;
-(BOOL)isOnScreen;
-(CGRect)visibleFrame;
-(UIView *)_inputView;
-(UIView *)_inputAccessoryView;
-(void)hostAppSceneBoundsChanged;
-(void)willSnapshot;
-(void)didSnapshot;
-(void)setShouldNotifyRemoteKeyboards:(BOOL)arg1 ;
-(long long)keyboardOrientation;
-(id)inputViewSnapshotOfView:(id)arg1 afterScreenUpdates:(BOOL)arg2 ;
-(void)didSuspend:(id)arg1 ;
-(void)setCurrentTransition:(UIInputViewPlacementTransition *)arg1 ;
-(UIInputViewPlacementTransition *)currentTransition;
-(id)nextAnimationStyle;
-(void)setAccessoryViewVisible:(BOOL)arg1 delay:(double)arg2 ;
-(void)syncToExistingAnimations;
-(void)setPlacementChangeDisabled:(BOOL)arg1 withPlacement:(id)arg2 ;
-(void)performOperations:(/*^block*/id)arg1 withAnimationStyle:(id)arg2 ;
-(void)setPlacement:(UIInputViewSetPlacement *)arg1 ;
-(void)setRotationAwarePlacement:(id)arg1 ;
-(void)setInputViewSet:(UIInputViewSet *)arg1 ;
-(void)extendKeyboardBackdropHeight:(double)arg1 withDuration:(double)arg2 ;
-(void)animateAccessoryViewVisibility:(BOOL)arg1 withDuration:(double)arg2 ;
-(void)candidateBarWillChangeHeight:(double)arg1 withDuration:(double)arg2 ;
-(UIView *)_inputAssistantView;
-(UIInputViewController *)_inputViewController;
-(UIKBInputBackdropView *)_inputBackdropView;
-(UIKBInputBackdropView *)_inputAccessoryBackdropView;
-(void)willResume:(id)arg1 ;
-(void)transferPlacementStateToInputWindowController:(id)arg1 ;
-(BOOL)inhibitRotationAnimation;
-(BOOL)isOnScreenRotating;
-(UIInputViewSetPlacement *)placementIgnoringRotation;
-(void)checkPlaceholdersForRemoteKeyboards;
-(id<_UIRemoteKeyboardControllerDelegate>)controllerDelegate;
-(void)setControllerDelegate:(id<_UIRemoteKeyboardControllerDelegate>)arg1 ;
-(void)ignoreLayoutNotifications:(/*^block*/id)arg1 ;
-(void)updateViewSizingConstraints;
-(void)registerPowerLogEvent:(BOOL)arg1 ;
-(void)willBeginTranslation;
-(void)finishSplitTransition:(BOOL)arg1 ;
-(void)didFinishTranslation;
-(void)performWithSafeTransitionFrames:(/*^block*/id)arg1 ;
-(void)updateInputAssistantViewForInputViewSet:(id)arg1 ;
-(void)_updateBackdropViews;
-(void)_forcePreLayoutHostViewFrame;
-(id)splitKeyboardController;
-(id)scrollDismissController;
-(void)updateInputAssistantView:(id)arg1 ;
-(void)setInputViewSet:(id)arg1 forKeyboardAssistantBar:(id)arg2 ;
-(void)performWithoutAppearanceCallbacks:(/*^block*/id)arg1 ;
-(void)setTemplateNotificationInfo:(UIInputViewSetNotificationInfo *)arg1 ;
-(BOOL)shouldNotifyRemoteKeyboards;
-(id)viewMatchingConstraintForAttribute:(long long)arg1 primaryView:(id)arg2 secondaryView:(id)arg3 ;
-(BOOL)isViewLandscape;
-(UIInputViewController *)_inputAccessoryViewController;
-(NSLayoutConstraint *)inputViewHeightConstraint;
-(void)setInputViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)assistantViewHeightConstraint;
-(void)setAssistantViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)accessoryViewHeightConstraint;
-(void)setAccessoryViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)clearViewSizingConstraints:(unsigned long long)arg1 ;
-(BOOL)_subviewUsesClassicLayout:(id)arg1 ;
-(UIEdgeInsets)_aligningInsetsForChildInputViewController:(id)arg1 includeSceneBounds:(BOOL)arg2 ;
-(UIInputViewController *)_inputAssistantViewController;
-(void)updateConstraintInsets;
-(void)rebuildConstraints:(id)arg1 forView:(id)arg2 toMatchView:(id)arg3 ;
-(UIKBInputBackdropView *)_inputAssistantBackdropView;
-(void)updateVisibilityConstraintsForPlacement:(id)arg1 ;
-(NSArray *)visibilityConstraints;
-(void)setVerticalVisibilityConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setVisibilityConstraints:(NSArray *)arg1 ;
-(UIInputViewSetNotificationInfo *)templateNotificationInfo;
-(int)appearStateForChild:(unsigned long long)arg1 placement:(id)arg2 start:(BOOL)arg3 ;
-(void)changeChild:(unsigned long long)arg1 toAppearState:(int)arg2 animated:(BOOL)arg3 ;
-(void)transferActiveNotificationInfoToInfo:(id)arg1 ;
-(void)postStartNotifications:(unsigned long long)arg1 withInfo:(id)arg2 ;
-(void)postEndNotifications:(unsigned long long)arg1 withInfo:(id)arg2 ;
-(void)checkPlaceholdersForRemoteKeyboardsAndForceConstraintsUpdate:(BOOL)arg1 ;
-(void)clearInteractiveTransitionStateIfNecessary;
-(BOOL)mergeTransitionIfNecessaryWithTransition:(id)arg1 ;
-(id)initialNotificationInfo;
-(void)updateAppearStatesForPlacement:(id)arg1 start:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_collectTransitionTimeStatistics:(unsigned long long)arg1 ;
-(void)performWithoutCallbacksOrNotifications:(/*^block*/id)arg1 ;
-(void)fillInNotificationInfo:(id)arg1 forDismissMode:(unsigned long long)arg2 ;
-(void)setPostRotationPlacement:(UIInputViewSetPlacement *)arg1 ;
-(void)performOperations:(/*^block*/id)arg1 withTemplateNotificationInfo:(id)arg2 ;
-(UIInputViewSetPlacement *)postRotationPlacement;
-(BOOL)_useLiveRotation;
-(UIInputViewSet *)postRotationInputViewSet;
-(UIInputViewSetNotificationInfo *)postRotationInputViewNotificationInfo;
-(void)setPostRotationInputViewSet:(UIInputViewSet *)arg1 ;
-(void)setPostRotationInputViewNotificationInfo:(UIInputViewSetNotificationInfo *)arg1 ;
-(NSLayoutConstraint *)verticalVisibilityConstraint;
-(void)generateNotificationsForStart:(BOOL)arg1 ;
-(void)moveFromPlacement:(id)arg1 toPlacement:(id)arg2 starting:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)postTransitionEndNotification;
-(void)set_inputViewController:(UIInputViewController *)arg1 ;
-(void)set_inputAssistantViewController:(UIInputViewController *)arg1 ;
-(void)set_inputAccessoryViewController:(UIInputViewController *)arg1 ;
-(void)invalidateInputAssistantView;
-(void)setInputAssistantBackdropView:(id)arg1 ;
-(void)initializeTranslateGestureRecognizerIfNecessary;
-(void)invalidateInputView;
-(void)setInputBackdropView:(id)arg1 ;
-(void)invalidateInputAccessoryView;
-(void)setInputAccessoryBackdropView:(id)arg1 ;
-(id)currentPresentationPlacement;
-(unsigned long long)changeToInputViewSet:(id)arg1 ;
-(void)setPlacement:(id)arg1 starting:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(UIKBInputBackdropView *)inputViewBackdrop;
-(void)setInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3 ;
@end

