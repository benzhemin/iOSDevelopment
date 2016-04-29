/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <MKMapViewDelegate>, <MKMapViewDelegate><MKMapViewDelegatePrivate>, CLLocation, MKAnnotationContainerView, MKAnnotationView, MKAttributionLabel, MKBasicMapView, MKCompassView, MKMapAnnotationManager, MKMapCamera, MKMapGestureController, MKMapViewInternal, MKOverlayContainerView, MKScaleView, MKUserLocation, NSArray, NSString, NSTimer, UIGestureRecognizer, UIImageView, UILabel, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer, UITextView, UIView, VKLabelMarker, VKMapView, VKPuckAnimator, _MKEnvironmentLabel;

@interface MKMapView : UIView <VKPuckAnimatorDelegate, MKOverlayContainerViewDelegate, UIGestureRecognizerDelegate, MKVariableDelayTapRecognizerDelegate, MKAnnotationContainerViewDelegate, VKMapViewDelegate, MKMapGestureControllerDelegate, MKAnnotationMarkerContainer, MKAnnotationManagerDelegate, GEOResourceManifestTileGroupObserver, NSCoding> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct { 
        unsigned int callsDelegateForAllRegionChanges : 1; 
        unsigned int changingRegion : 1; 
        unsigned int debugViewHeading : 1; 
        unsigned int didStartDragging : 1; 
        unsigned int draggingInterrupted : 1; 
        unsigned int didStartSmoothScrolling : 1; 
        unsigned int hasRenderedSomething : 1; 
        unsigned int ignoreHeadingUpdates : 1; 
        unsigned int ignoreLocationUpdates : 1; 
        unsigned int isSuspended : 1; 
        unsigned int longPressing : 1; 
        unsigned int persistFixedUserLocation : 1; 
        unsigned int regionChangeIsAnimated : 1; 
        unsigned int rotationSupported : 1; 
        unsigned int scrollEnabled : 1; 
        unsigned int scrolling : 1; 
        unsigned int shouldRotateForHeading : 1; 
        unsigned int useVehicleHeading : 1; 
        unsigned int showsUserLocation : 1; 
        unsigned int zoomEnabled : 1; 
        unsigned int zoomIsAnimated : 1; 
        unsigned int zooming : 1; 
        unsigned int isChangingViewSize : 1; 
        unsigned int isChangingEdgeInsets : 1; 
        unsigned int showsAttribution : 1; 
        unsigned int showsAttributionBadge : 1; 
        unsigned int useOld2DAnnotationContainer : 1; 
        unsigned int rotating : 1; 
        unsigned int pitching : 1; 
        unsigned int rotateEnabled : 1; 
        unsigned int pitchEnabled : 1; 
        unsigned int showsBuildings : 1; 
        unsigned int showsPointsOfInterest : 1; 
        unsigned int allowsRotation : 1; 
        unsigned int hasPendingCameraChange : 1; 
        unsigned int backdropViewQualityChangingDisabled : 1; 
        unsigned int canSelectPOIs : 1; 
        unsigned int canSelectAllLabels : 1; 
        unsigned int vectorKitConsoleEnabled : 1; 
        unsigned int edgeInsetsAreExplicit : 1; 
        unsigned int locationPropagationEnabled : 1; 
        unsigned int userInteractionPausesLocationUpdates : 1; 
        unsigned int locationPulseEnabled : 1; 
        unsigned int shouldSplitRouteLine : 1; 
        unsigned int shouldAnimatePositionWithRouteMatch : 1; 
        unsigned int showsCurrentEnvironmentName : 1; 
        unsigned int processingUserLocationUpdate : 1; 
        unsigned int changingMapType : 1; 
        unsigned int userRotatedAwayFromVerticalYaw : 1; 
        unsigned int goingToDefaultLocation : 1; 
        unsigned int delayLocationUpdatesUntilInitialRendering : 1; 
        unsigned int isDraggingAnnotationView : 1; 
        unsigned int showsPressedLabelMarkerEffect : 1; 
        unsigned int delegateShouldReceiveTouch : 1; 
        unsigned int delegateShouldDelayTapResponse : 1; 
        unsigned int delegateDidUpdateUserLocation : 1; 
        unsigned int delegateDidFailToLocateUser : 1; 
        unsigned int delegateWillChangeRegion : 1; 
        unsigned int delegateDidChangeRegion : 1; 
        unsigned int delegateDidStartMapRendering : 1; 
        unsigned int delegateDidFinishMapRendering : 1; 
        unsigned int delegateDidChangeUserTrackingMode : 1; 
        unsigned int delegateDidChangeUserTrackingModeButton : 1; 
        unsigned int delegateDidChangeMapType : 1; 
    MKAnnotationContainerView *_annotationContainer;
    id _annotationCoordinateTest;
    MKMapAnnotationManager *_annotationManager;
    id _annotationRectTest;
    UIImageView *_attributionBadgeView;
    MKAttributionLabel *_attributionLabel;
    MKBasicMapView *_basicMapView;
    id _bottomLayoutGuide;
    MKMapCamera *_camera;
    BOOL _compassEnabled;
    NSTimer *_compassHideTimer;
    MKCompassView *_compassView;
    BOOL _compassVisible;
    UIView *_contentView;
    unsigned long long _currentFlyoverAnimationID;
    id _debugConsoleAdditionalInfoProvider;
    _MKEnvironmentLabel *_debugCurrentEnvironmentLabel;
    NSTimer *_debugTimer;
    UILabel *_debugView;
    unsigned int _debugViewIndex;
    NSTimer *_defaultLocationTimer;
    } _edgeInsets;
    } _flags;
    MKMapGestureController *_gestureController;
    BOOL _hasSetLayoutMargins;
    double _heading;
    MKMapViewInternal *_internal;
    UIGestureRecognizer *_locationConsoleGesture;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    unsigned int _mapType;
    VKMapView *_mapView;
    UITapGestureRecognizer *_nonselectingTapGestureRecognizer;
    MKOverlayContainerView *_overlayContainer;
    VKLabelMarker *_pressedLabelMarker;
    id _regionSetterWhenSized;
    <MKMapViewDelegate><MKMapViewDelegatePrivate> *_safeDelegate;
    BOOL _scaleEnabled;
    MKScaleView *_scaleView;
    BOOL _scaleVisible;
    UIView *_scrollContainerView;
    id _selectAnnotationViewAfterRedrawBlock;
    UITapGestureRecognizer *_selectingTapGestureRecognizer;
    id _showCalloutAfterRegionChangeBlock;
    NSTimer *_startEffectsTimer;
    unsigned int _suspendedEffectsCount;
    id _topLayoutGuide;
    <MKMapViewDelegate><MKMapViewDelegatePrivate> *_unsafeDelegate;
    unsigned int _userInteractionDisabledCount;
    MKUserLocation *_userLocation;
    VKPuckAnimator *_userLocationAnimator;
    int _userTrackingMode;
    UITextView *_vectorKitDebugView;
    UIPanGestureRecognizer *_vectorKitStyleDebugGestureRecognizer;
    double _verticalYawOverride;
}

@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } annotationVisibleRect;
@property(readonly) NSArray * annotations;
@property(copy) MKMapCamera * camera;
@property struct { double x1; double x2; } centerCoordinate;
@property(getter=_currentFlyoverAnimationID,setter=_setCurrentFlyoverAnimationID:) unsigned long long currentFlyoverAnimationID;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * debugDescription;
@property <MKMapViewDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * description;
@property(getter=_detailedDescription,readonly) NSString * detailedDescription;
@property(readonly) unsigned int hash;
@property(readonly) unsigned int hash;
@property BOOL ignoreLocationUpdates;
@property unsigned int mapType;
@property(readonly) NSArray * overlays;
@property(getter=isPitchEnabled) BOOL pitchEnabled;
@property(retain) CLLocation * predictedUserLocation;
@property struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } region;
@property(getter=isRotateEnabled) BOOL rotateEnabled;
@property(getter=isScrollEnabled) BOOL scrollEnabled;
@property(copy) NSArray * selectedAnnotations;
@property BOOL showsBuildings;
@property BOOL showsPointsOfInterest;
@property BOOL showsUserLocation;
@property(readonly) Class superclass;
@property(readonly) Class superclass;
@property(readonly) MKUserLocation * userLocation;
@property(retain,readonly) MKAnnotationView * userLocationView;
@property(getter=isUserLocationVisible,readonly) BOOL userLocationVisible;
@property int userTrackingMode;
@property struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } visibleMapRect;
@property(getter=_visibleTileSets,readonly) NSArray * visibleTileSets;
@property(getter=isZoomEnabled) BOOL zoomEnabled;

+ (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_mapRectThatFitsViewBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 mapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2 viewInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg3 edgePadding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg4 minZoomLevel:(float)arg5 maxZoomLevel:(float)arg6 snapToZoomLevel:(BOOL)arg7;
+ (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_regionThatFitsMapType:(unsigned int)arg1 viewSize:(struct CGSize { float x1; float x2; })arg2 viewInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg3 edgePadding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg4 region:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg5 minZoomLevel:(float)arg6 maxZoomLevel:(float)arg7 snapToZoomLevel:(BOOL)arg8;
+ (unsigned int)minZoomLevelForMapType:(unsigned int)arg1 viewSize:(struct CGSize { float x1; float x2; })arg2;
+ (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })regionThatFitsMapType:(unsigned int)arg1 viewSize:(struct CGSize { float x1; float x2; })arg2 edgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg3 region:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg4;
+ (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })regionThatFitsMapType:(unsigned int)arg1 viewSize:(struct CGSize { float x1; float x2; })arg2 region:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (void)setRendersInBackgroundByDefault:(BOOL)arg1;

- (void).cxx_destruct;
- (void)_addAnnotation:(id)arg1 allowAnimation:(BOOL)arg2;
- (void)_addAnnotations:(id)arg1 allowAnimation:(BOOL)arg2;
- (void)_addDebugGesture;
- (void)_addPersistentVectorOverlay:(id)arg1;
- (void)_addSetRegionBlockWhenSized:(id)arg1;
- (void)_addVectorOverlay:(id)arg1;
- (void)_addViewsForAnnotations:(id)arg1;
- (BOOL)_allowsPopoverWhenNotInWindow;
- (void)_annotationViewDragStateChanged:(id)arg1;
- (id)_annotationViews;
- (BOOL)_annotationViewsAreAddedImmediately;
- (int)_applicationState;
- (float)_boundedZoomLevel:(float)arg1 coordinate:(struct { double x1; double x2; })arg2;
- (float)_boundedZoomLevel:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_calloutContentRect;
- (id)_calloutPopoverController;
- (id)_camera;
- (BOOL)_canEnter3DMode;
- (BOOL)_canEnterNightMode;
- (BOOL)_canSelectAllLabels;
- (BOOL)_canSelectPOIs;
- (BOOL)_canShowAnimationForSearchResultWithMapRegion:(id)arg1;
- (BOOL)_canShowFlyover;
- (BOOL)_canZoomIn;
- (BOOL)_canZoomOut;
- (struct { double x1; double x2; })_centerMapPoint;
- (struct CGPoint { float x1; float x2; })_centerPoint;
- (void)_clearFixedUserLocation;
- (void)_clearGestureRecognizers;
- (void)_clearLayoutGuides;
- (id)_commonInitFromIB:(BOOL)arg1 gestureRecognizerHostView:(id)arg2 showsAttribution:(BOOL)arg3;
- (id)_compassHideTimer;
- (void)_configureGestureRecognizers:(id)arg1;
- (struct CGPoint { float x1; float x2; })_convertCoordinate:(struct { double x1; double x2; })arg1 toPointToView:(id)arg2;
- (struct CGPoint { float x1; float x2; })_convertMapPoint:(struct { double x1; double x2; })arg1 toPointToView:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_convertMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 toRectToView:(id)arg2;
- (struct { double x1; double x2; })_convertPoint:(struct CGPoint { float x1; float x2; })arg1 toCoordinateFromView:(id)arg2;
- (struct { double x1; double x2; })_convertPoint:(struct CGPoint { float x1; float x2; })arg1 toMapPointFromView:(id)arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toMapRectFromView:(id)arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toRegionFromView:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_convertRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 toRectToView:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_currentEnvironmentNameFrame;
- (unsigned long long)_currentFlyoverAnimationID;
- (id)_debugConsoleAdditionalInfoProvider;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_debugViewFrame;
- (id)_defaultLocationTimer;
- (void)_deselectLabelMarkerAnimated:(BOOL)arg1;
- (id)_detailedDescription;
- (void)_didChangeRegionMidstream:(BOOL)arg1;
- (void)_didEndScroll;
- (void)_didEndUserInteraction;
- (void)_didEndZoom;
- (void)_displayWorld;
- (void)_dropDraggingAnnotationView:(BOOL)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_edgeInsets;
- (void)_enter3DMode;
- (void)_exit3DMode;
- (id)_findLayoutGuideVC;
- (void)_fixUserLocationFromPresentationValue;
- (double)_goToCenterCoordinate:(struct { double x1; double x2; })arg1 zoomLevel:(float)arg2 animated:(BOOL)arg3;
- (void)_goToMapRegion:(id)arg1 duration:(double)arg2 animated:(BOOL)arg3 completionHandler:(id)arg4;
- (void)_goToMapRegion:(id)arg1 duration:(double)arg2 animated:(BOOL)arg3;
- (void)_handleLongPressDidEnd;
- (void)_handleStyleDebugGesture:(id)arg1;
- (void)_handleTapToDeselect:(id)arg1;
- (void)_handleTapToSelect:(id)arg1;
- (void)_hideCompassFromTimer:(id)arg1;
- (BOOL)_hitSomethingAtTouch:(id)arg1;
- (BOOL)_iconsShouldAlignToPixels;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 gestureRecognizerHostView:(id)arg2 showsAttribution:(BOOL)arg3;
- (void)_insertSubview:(id)arg1;
- (int)_interfaceOrientation;
- (BOOL)_isCalloutExpanded;
- (BOOL)_isChangingRegionForGesture;
- (BOOL)_isHandlingNonselectingTap;
- (BOOL)_isHandlingUserEvent;
- (BOOL)_isLocationPropagationEnabled;
- (BOOL)_isLocationPulseEnabled;
- (BOOL)_isPitched;
- (BOOL)_isShowingFlyover;
- (BOOL)_isUserLocationInView:(BOOL)arg1;
- (BOOL)_isUserLocationViewCentered:(float)arg1;
- (BOOL)_isUsingDevResourceStyleSheet;
- (BOOL)_isVectorKitConsoleEnabled;
- (BOOL)_isVectorKitStyleDebugEnabled;
- (BOOL)_isVisible;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_labelEdgeInsets;
- (void)_layoutAttribution;
- (id)_longPressGestureRecognizer;
- (unsigned int)_mapDisplayStyle;
- (id)_mapLayer;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_mapRectWithFraction:(double)arg1 ofVisible:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_mapRegionOfInterest;
- (id)_mapRegionWithCenterCoordinate:(struct { double x1; double x2; })arg1 zoomScale:(float)arg2;
- (float)_maxZoomLevelForCoordinate:(struct { double x1; double x2; })arg1;
- (float)_maximumZoomLevel;
- (float)_minimumZoomLevel;
- (id)_nonselectingTapGestureRecognizer;
- (double)_panDurationFromPoint:(struct CGPoint { float x1; float x2; })arg1 toPoint:(struct CGPoint { float x1; float x2; })arg2;
- (BOOL)_panWithMomentum;
- (id)_panningGestureRecognizer;
- (void)_pauseFlyoverAnimation;
- (void)_pauseUserLocationUpdates;
- (void)_performFlyoverAnimation:(id)arg1 animateToStart:(BOOL)arg2;
- (void)_performFlyoverAnimation:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_prepareFlyoverAnimation:(id)arg1 inBackground:(BOOL)arg2 completion:(id)arg3;
- (void)_removePersistentVectorOverlay:(id)arg1;
- (void)_removeVectorOverlay:(id)arg1;
- (void)_replaceAnnotation:(id)arg1 withAnnotation:(id)arg2;
- (void)_resetMaximumZoomLevel;
- (void)_restoreViewportFromDictionary:(id)arg1;
- (void)_resumeFlyoverAnimation;
- (void)_resumeUserInteraction;
- (void)_resumeUserLocationUpdates:(BOOL)arg1;
- (BOOL)_roomForCompass;
- (BOOL)_rotationPossible;
- (int)_roundedZoomLevel;
- (void)_selectAnnotation:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)_selectLabelMarker:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)_selectLabelMarker:(id)arg1 animated:(BOOL)arg2;
- (void)_selectUserLocationTypeWithDeltaZoomLevel:(float)arg1;
- (id)_selectedLabelMarker;
- (id)_selectingTapGestureRecognizer;
- (void)_setAllowsPopoverWhenNotInWindow:(BOOL)arg1;
- (void)_setApplicationState:(int)arg1;
- (void)_setCamera:(id)arg1 animated:(BOOL)arg2;
- (void)_setCamera:(id)arg1 duration:(double)arg2 timing:(id)arg3;
- (void)_setCamera:(id)arg1 duration:(double)arg2 timingCurve:(int)arg3;
- (void)_setCamera:(id)arg1;
- (void)_setCanSelectAllLabels:(BOOL)arg1;
- (void)_setCanSelectPOIs:(BOOL)arg1;
- (void)_setCompassVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setCurrentFlyoverAnimationID:(unsigned long long)arg1;
- (void)_setDebugConsoleAdditionalInfoProvider:(id)arg1;
- (void)_setEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1 explicit:(BOOL)arg2;
- (void)_setEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_setLabelEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_setLocationPropagationEnabled:(BOOL)arg1;
- (void)_setLocationPulseEnabled:(BOOL)arg1;
- (void)_setMapDisplayStyle:(unsigned int)arg1;
- (void)_setMapType:(unsigned int)arg1 onInit:(BOOL)arg2;
- (void)_setMaximumZoomLevel:(float)arg1;
- (void)_setPanWithMomentum:(BOOL)arg1;
- (void)_setSafeDelegate:(id)arg1;
- (void)_setScaleVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setScrolling:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setScrolling:(BOOL)arg1;
- (void)_setShouldAnimatePositionWithRouteMatch:(BOOL)arg1;
- (void)_setShouldDelayLocationUpdatesUntilInitialRendering:(BOOL)arg1;
- (void)_setShouldSplitRouteLine:(BOOL)arg1;
- (void)_setShowsCurrentEnvironmentName:(BOOL)arg1;
- (void)_setShowsPressedLabelMarkerEffect:(BOOL)arg1;
- (void)_setShowsTraffic:(BOOL)arg1;
- (void)_setTracePlaybackSpeedMultiplier:(double)arg1;
- (void)_setUseVehicleHeading:(BOOL)arg1;
- (void)_setUserInteractionPausesLocationUpdates:(BOOL)arg1;
- (void)_setUserTrackingMode:(int)arg1 animated:(BOOL)arg2 fromTrackingButton:(BOOL)arg3;
- (void)_setUserTrackingZoomStyle:(int)arg1;
- (void)_setVectorKitConsoleEnabled:(BOOL)arg1;
- (void)_setVectorKitStyleDebugEnabled:(BOOL)arg1;
- (void)_setVisibleMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(BOOL)arg2 completionHandler:(id)arg3;
- (void)_setVisibleMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 duration:(double)arg2 completionHandler:(id)arg3;
- (void)_setZoomScale:(float)arg1 centerCoordinate:(struct { double x1; double x2; })arg2 duration:(double)arg3 animated:(BOOL)arg4;
- (void)_setZoomScale:(float)arg1 centerMapPoint:(struct { double x1; double x2; })arg2 duration:(double)arg3 animated:(BOOL)arg4;
- (BOOL)_shouldAnimatePositionWithRouteMatch;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (BOOL)_shouldDelayLocationUpdatesUntilInitialRendering;
- (BOOL)_shouldDisplayScaleForCurrentRegion;
- (BOOL)_shouldSplitRouteLine;
- (void)_showAnimationAtCoordinate:(struct { double x1; double x2; })arg1 withMapRegion:(id)arg2;
- (BOOL)_showsCurrentEnvironmentName;
- (BOOL)_showsPressedLabelMarkerEffect;
- (BOOL)_showsTraffic;
- (void)_sizeDidChangeWithCenterCoordinate:(struct { double x1; double x2; })arg1;
- (void)_sizeWillChange;
- (void)_snapToNorthIfNecessary;
- (id)_startEffectsTimer;
- (void)_startFlyoverTourAnimation:(unsigned long long)arg1 completion:(id)arg2;
- (void)_startPanningAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_startTrackingHeading;
- (void)_stopFlyoverAnimation;
- (void)_stopPanningAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_stopTrackingHeading;
- (BOOL)_supportsVKMapType:(int)arg1;
- (void)_suspendUserInteraction;
- (void)_toggleLocationConsole:(id)arg1;
- (void)_updateAttribution;
- (void)_updateCameraState;
- (void)_updateCompassPosition;
- (void)_updateCompassVisibility;
- (void)_updateContentBounds;
- (void)_updateCourseForMapViewHeading:(id)arg1;
- (void)_updateDebugViewFrameWithEdgeInsets;
- (void)_updateEffects;
- (void)_updateEnvironmentLabelText;
- (void)_updateFromCamera:(id)arg1 duration:(double)arg2 timing:(id)arg3;
- (void)_updateFromCamera:(id)arg1;
- (void)_updateHeading:(id)arg1 animated:(BOOL)arg2;
- (void)_updateHeadingOrientation;
- (void)_updateIconsShouldAlignToPixels;
- (void)_updateInsets;
- (void)_updateLocationConsole;
- (void)_updatePanWithTranslation:(struct CGPoint { float x1; float x2; })arg1;
- (void)_updatePitchAllowed:(BOOL)arg1;
- (void)_updateRotateAllowed:(BOOL)arg1;
- (void)_updateRotationAttributes;
- (BOOL)_updateRotationSupported;
- (void)_updateScalePosition;
- (void)_updateScaleVisibility;
- (void)_updateScrollContainerView:(BOOL)arg1;
- (void)_updateScrollingAndGestures;
- (void)_updateShouldDisplayEffects;
- (void)_updateVectorKitConsoleFrameWithEdgeInsets;
- (BOOL)_useVehicleHeading;
- (BOOL)_userInteractionPausesLocationUpdates;
- (void)_userScrollingEnded;
- (int)_userTrackingZoomStyle;
- (int)_viewIndexForSubview:(id)arg1;
- (id)_viewportDictionary;
- (id)_visibleTileSets;
- (void)_willChangeRegionAnimated:(BOOL)arg1;
- (void)_willChangeStatusBarFrame:(id)arg1;
- (void)_willStartScroll;
- (void)_willStartUserInteraction;
- (void)_willStartZoom:(BOOL)arg1;
- (void)_zoomIn;
- (float)_zoomLevel;
- (float)_zoomLevelForMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 includeAccessoryPadding:(BOOL)arg2;
- (float)_zoomLevelForRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 includeAccessoryPadding:(BOOL)arg2;
- (void)_zoomOut;
- (struct { float x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_zoomRegionForMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 edgePadding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2 maxZoomLevel:(int)arg3 minZoomLevel:(int)arg4;
- (float)_zoomScale;
- (float)_zoomScaleForMapRegion:(id)arg1;
- (void)_zoomWithAmount:(double)arg1;
- (void)addAnnotation:(id)arg1;
- (void)addAnnotationRepresentation:(id)arg1 allowAnimation:(BOOL)arg2;
- (void)addAnnotations:(id)arg1;
- (void)addOverlay:(id)arg1 level:(int)arg2;
- (void)addOverlay:(id)arg1;
- (void)addOverlays:(id)arg1 level:(int)arg2;
- (void)addOverlays:(id)arg1;
- (void)annotationContainer:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (float)annotationContainer:(id)arg1 pinDropDistanceForCoordinate:(struct { double x1; double x2; })arg2 maxDistance:(float*)arg3 startPoint:(struct CGPoint { float x1; float x2; }*)arg4 shadowStartPoint:(struct CGPoint { float x1; float x2; }*)arg5;
- (void)annotationContainer:(id)arg1 scrollToRevealCalloutWithOffset:(struct CGPoint { float x1; float x2; })arg2 annotationCoordinate:(struct { double x1; double x2; })arg3 completionHandler:(id)arg4;
- (void)annotationContainerDidAnimateBubble:(id)arg1;
- (void)annotationContainerDidDropPins:(id)arg1;
- (void)annotationContainerDidFinishMapsTransitionExpanding:(id)arg1;
- (BOOL)annotationContainerIsRotated:(id)arg1;
- (BOOL)annotationContainerShouldAlignToPixels:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })annotationContainerVisibleRect:(id)arg1;
- (void)annotationContainerWillAnimateBubble:(id)arg1;
- (void)annotationContainerWillDropPins:(id)arg1;
- (id)annotationCoordinateTest;
- (void)annotationManager:(id)arg1 didAddAnnotationRepresentations:(id)arg2;
- (void)annotationManager:(id)arg1 didDeselectAnnotationRepresentation:(id)arg2;
- (void)annotationManager:(id)arg1 didSelectAnnotationRepresentation:(id)arg2;
- (id)annotationManager:(id)arg1 representationForAnnotation:(id)arg2;
- (void)annotationManager:(id)arg1 willDeselectAnnotationRepresentation:(id)arg2;
- (id)annotationRectTest;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })annotationVisibleRect;
- (id)annotations;
- (id)annotationsInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })attributionFrame;
- (id)awakeAfterUsingCoder:(id)arg1;
- (void)calloutDidAppearForAnnotationView:(id)arg1 inContainer:(id)arg2;
- (BOOL)calloutViewContainsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)callsDelegateForAllRegionChanges;
- (id)camera;
- (BOOL)canRotateForHeading;
- (struct { double x1; double x2; })centerCoordinate;
- (id)compassView;
- (id)compassVisibilityAnimation;
- (BOOL)compassVisible;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (struct CGPoint { float x1; float x2; })convertCoordinate:(struct { double x1; double x2; })arg1 toPointToView:(id)arg2;
- (struct { double x1; double x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toCoordinateFromView:(id)arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toRegionFromView:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 toRectToView:(id)arg2;
- (id)createDrawableForOverlay:(id)arg1;
- (void)dealloc;
- (id)debugView;
- (id)delegate;
- (id)dequeueReusableAnnotationViewWithIdentifier:(id)arg1;
- (id)descriptionForLocation:(id)arg1 compact:(BOOL)arg2;
- (void)deselectAnnotation:(id)arg1 animated:(BOOL)arg2;
- (void)deselectAnnotationRepresentation:(id)arg1 animated:(BOOL)arg2;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forViewPrintFormatter:(id)arg2;
- (BOOL)effectsEnabled;
- (void)enableMapRotationIfNeeded;
- (void)encodeWithCoder:(id)arg1;
- (void)exchangeOverlay:(id)arg1 withOverlay:(id)arg2;
- (void)exchangeOverlayAtIndex:(unsigned int)arg1 withOverlayAtIndex:(unsigned int)arg2;
- (void)geoDefaultsDidChange:(id)arg1;
- (double)gestureController:(id)arg1 shouldWaitForNextTapForDuration:(double)arg2 afterTouch:(id)arg3;
- (void)gestureControllerDidStopPanning:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)gestureControllerDidStopPanningDecelerating:(id)arg1;
- (void)gestureControllerDidStopRotating:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)gestureControllerDidStopRotatingDecelerating:(id)arg1;
- (void)gestureControllerDidStopTilting:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)gestureControllerDidStopTiltingDecelerating:(id)arg1;
- (void)gestureControllerDidStopTwoFingerLongPress:(id)arg1;
- (void)gestureControllerDidStopUserInteraction:(id)arg1;
- (void)gestureControllerDidStopZooming:(id)arg1 direction:(int)arg2 willDecelerate:(BOOL)arg3;
- (void)gestureControllerDidStopZoomingDecelerating:(id)arg1 direction:(int)arg2;
- (void)gestureControllerWillStartPanning:(id)arg1;
- (void)gestureControllerWillStartRotating:(id)arg1;
- (void)gestureControllerWillStartTilting:(id)arg1;
- (void)gestureControllerWillStartTwoFingerLongPress:(id)arg1;
- (void)gestureControllerWillStartUserInteraction:(id)arg1;
- (void)gestureControllerWillStartZooming:(id)arg1 animated:(BOOL)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)goToDefaultLocation;
- (void)handleCompassTap:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (BOOL)hasRenderedSomething;
- (BOOL)hasUserLocation;
- (BOOL)ignoreLocationUpdates;
- (id)initFromIBWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned int)arg2 level:(int)arg3;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (BOOL)isCompassEnabled;
- (BOOL)isLocationConsoleEnabled;
- (BOOL)isPitchEnabled;
- (BOOL)isRegionChanging;
- (BOOL)isRotateEnabled;
- (BOOL)isScaleEnabled;
- (BOOL)isScrollEnabled;
- (BOOL)isShowingNoDataPlaceholders;
- (BOOL)isSuspended;
- (BOOL)isUserLocationVisible;
- (BOOL)isZoomEnabled;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateHeading:(id)arg1 withError:(id)arg2;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedHeading:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (id)mapAttributionWithStringAttributes:(id)arg1;
- (void)mapLayer:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
- (void)mapLayer:(id)arg1 canShowFlyoverDidChange:(BOOL)arg2;
- (void)mapLayer:(id)arg1 canZoomInDidChange:(BOOL)arg2;
- (void)mapLayer:(id)arg1 canZoomOutDidChange:(BOOL)arg2;
- (void)mapLayer:(id)arg1 didBecomePitched:(BOOL)arg2;
- (void)mapLayer:(id)arg1 didChangeRegionAnimated:(BOOL)arg2;
- (void)mapLayer:(id)arg1 didStopFlyoverTourCompleted:(BOOL)arg2;
- (void)mapLayer:(id)arg1 didUpdateVerticalYawTo:(double)arg2;
- (void)mapLayer:(id)arg1 flyoverTourLabelDidChange:(id)arg2;
- (id)mapLayer:(id)arg1 painterForOverlay:(id)arg2;
- (id)mapLayer:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)mapLayer:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
- (void)mapLayer:(id)arg1 showingFlyoverDidChange:(BOOL)arg2;
- (void)mapLayer:(id)arg1 willChangeRegionAnimated:(BOOL)arg2;
- (void)mapLayer:(id)arg1 willTransitionFrom:(int)arg2 to:(int)arg3 duration:(double)arg4;
- (void)mapLayerDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2;
- (void)mapLayerDidBecomePartiallyDrawn:(id)arg1;
- (void)mapLayerDidChangeVisibleRegion:(id)arg1;
- (void)mapLayerDidDraw:(id)arg1;
- (void)mapLayerDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
- (void)mapLayerDidFinishLoadingTiles:(id)arg1;
- (void)mapLayerDidStartLoadingTiles:(id)arg1;
- (void)mapLayerWillStartFlyoverTour:(id)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRectThatFits:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 edgePadding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRectThatFits:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)mapRegion;
- (unsigned int)mapType;
- (void)moveAnnotationRepresentation:(id)arg1 fromCoordinate:(struct { double x1; double x2; })arg2 animated:(BOOL)arg3 duration:(double)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)overlayContainer;
- (void)overlayContainerAddedDrawables:(id)arg1;
- (id)overlays;
- (id)overlaysInLevel:(int)arg1;
- (void)pauseUserHeadingUpdates;
- (void)pauseUserLocationUpdates;
- (id)predictedUserLocation;
- (void)puckAnimator:(id)arg1 runAnimation:(id)arg2;
- (void)puckAnimator:(id)arg1 updatedPosition:(struct { double x1; double x2; double x3; })arg2 course:(double)arg3;
- (void)puckAnimator:(id)arg1 updatedTargetPosition:(struct { double x1; double x2; double x3; })arg2;
- (void)puckAnimatorDidStop:(id)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })region;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })regionThatFits:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)removeAnnotation:(id)arg1;
- (void)removeAnnotationRepresentation:(id)arg1;
- (void)removeAnnotations:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)removeOverlays:(id)arg1;
- (void)removeUserLocation;
- (id)rendererForOverlay:(id)arg1;
- (BOOL)rendersInBackground;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)resumeUserHeadingUpdates;
- (void)resumeUserLocationUpdates;
- (id)scaleView;
- (void)selectAnnotation:(id)arg1 animated:(BOOL)arg2;
- (void)selectAnnotationRepresentation:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)selectedAnnotations;
- (void)setBackdropViewQualityChangingDisabled:(BOOL)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCallsDelegateForAllRegionChanges:(BOOL)arg1;
- (void)setCamera:(id)arg1 animated:(BOOL)arg2;
- (void)setCamera:(id)arg1;
- (void)setCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1 animated:(BOOL)arg2;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1;
- (void)setCompassEnabled:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setIgnoreLocationUpdates:(BOOL)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setLocationConsoleEnabled:(BOOL)arg1;
- (void)setMapType:(unsigned int)arg1;
- (void)setPitchEnabled:(BOOL)arg1;
- (void)setPredictedUserLocation:(id)arg1;
- (void)setRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (void)setRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRendersInBackground:(BOOL)arg1;
- (void)setRotateEnabled:(BOOL)arg1;
- (void)setScaleEnabled:(BOOL)arg1;
- (void)setScrollEnabled:(BOOL)arg1;
- (void)setSelectedAnnotations:(id)arg1;
- (void)setShouldRotateForHeading:(BOOL)arg1;
- (void)setShowsAttribution:(BOOL)arg1;
- (void)setShowsAttributionBadge:(BOOL)arg1;
- (void)setShowsBuildings:(BOOL)arg1;
- (void)setShowsPointsOfInterest:(BOOL)arg1;
- (void)setShowsUserLocation:(BOOL)arg1;
- (void)setSuspended:(BOOL)arg1;
- (void)setUserTrackingMode:(int)arg1 animated:(BOOL)arg2;
- (void)setUserTrackingMode:(int)arg1;
- (void)setVisibleMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (void)setVisibleMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 edgePadding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2 animated:(BOOL)arg3;
- (void)setVisibleMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setZoomEnabled:(BOOL)arg1;
- (void)set_annotationViewsAreAddedImmediately:(BOOL)arg1;
- (void)set_compassHideTimer:(id)arg1;
- (void)set_defaultLocationTimer:(id)arg1;
- (void)set_startEffectsTimer:(id)arg1;
- (BOOL)shouldHideOffscreenSelectedAnnotation;
- (BOOL)shouldRotateForHeading;
- (void)showAnnotations:(id)arg1 animated:(BOOL)arg2;
- (BOOL)showsAttribution;
- (BOOL)showsAttributionBadge;
- (BOOL)showsBuildings;
- (BOOL)showsPointsOfInterest;
- (BOOL)showsUserLocation;
- (void)snapToNorth:(id)arg1;
- (void)startEffects;
- (void)startUpdatingUserLocation;
- (void)stopEffects;
- (void)stopUpdatingUserLocation;
- (void)toggleLocationConsole:(id)arg1;
- (void)updateLayoutGuides;
- (id)userLocation;
- (id)userLocationView;
- (int)userTrackingMode;
- (id)viewForAnnotation:(id)arg1;
- (id)viewForOverlay:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleCenteringRectInView:(id)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })visibleMapRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRectInView:(id)arg1;
- (id)vk_mapLayer;
- (void)willMoveToWindow:(id)arg1;

@end
