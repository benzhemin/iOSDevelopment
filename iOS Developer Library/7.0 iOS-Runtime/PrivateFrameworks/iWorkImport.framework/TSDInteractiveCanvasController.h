/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <TSDAnnotationHosting>, <TSDAnnotationPopoverController>, <TSDCanvasLayerHosting>, <TSDEditor>, <TSDInteractiveCanvasControllerDelegate>, <TSKDocumentRootProvider>, CALayer, NSArray, NSFormatter, NSMutableArray, NSMutableSet, NSObject<TSDImageHUDController>, NSObject<TSDRulerController>, NSString, TSDBackgroundLayoutAndRenderState, TSDCanvas, TSDCanvasAnimation, TSDCanvasLayer, TSDCanvasView, TSDContainerRep, TSDDynamicOperationController, TSDEditorController, TSDGuideController, TSDLayoutController, TSDTileStorage, TSDTrackerManipulatorCoordinator, TSDUserDefinedGuideController, TSKAccessController, TSKChangeNotifier, TSKCommandController, TSKDocumentRoot, TSPObjectContext;

@interface TSDInteractiveCanvasController : NSObject <TSDCanvasDelegate, TSDErrorPresenter, TSKChangeSourceObserver, NSCoding, TSKScrollViewDelegate, TSDBackgroundLayoutAndRenderStateDelegate, TSDRepTrackerDelegateCreation> {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGPoint { 
        float x; 
        float y; 
    BOOL mAnimatingScroll;
    BOOL mAnimatingViewScale;
    <TSDAnnotationPopoverController> *mAnnotationPopoverController;
    TSDBackgroundLayoutAndRenderState *mBackgroundLayoutAndRenderState;
    NSMutableArray *mBackgroundRenderingObjects;
    TSDCanvas *mCanvas;
    struct __CFDictionary { } *mContainerLayersByRep;
    BOOL mCreateRepsForOffscreenLayouts;
    TSDCanvasAnimation *mCurrentAnimation;
    BOOL mCurrentlyScrolling;
    BOOL mCurrentlyWaitingOnThreadedLayoutAndRender;
    NSMutableArray *mDecorators;
    <TSDInteractiveCanvasControllerDelegate> *mDelegate;
    int mDisableThreadedLayoutAndRender;
    <TSDAnnotationHosting> *mDisplayedAnnotation;
    TSDDynamicOperationController *mDynOpController;
    int mDynamicOperationCounter;
    float mDynamicViewScale;
    BOOL mDynamicallyZooming;
    TSDEditorController *mEditorController;
    TSDGuideController *mGuideController;
    BOOL mHadLayerHost;
    BOOL mHasBeenTornDown;
    NSMutableArray *mHiddenTopLevelLayers;
    NSObject<TSDImageHUDController> *mIAHUDController;
    long mIAHUDLock;
    NSObject<TSDImageHUDController> *mImageHUDController;
    long mImageHUDLock;
    BOOL mInDynamicOperation;
    BOOL mInReadMode;
    BOOL mInVersionBrowsingMode;
    NSMutableArray *mInspectorGestureRecognizersToReenable;
    BOOL mInspectorModeEnabled;
    id mInspectorSingleTapBlock;
    } mLastTapPoint;
    <TSDCanvasLayerHosting> *mLayerHost;
    BOOL mLayerHostHasBeenTornDown;
    NSArray *mLayersWithZoomFadeAnimation;
    BOOL mLayoutAndRenderOnThreadDuringScroll;
    NSMutableSet *mNotificationsToPostWithValidLayouts;
    CALayer *mOverlayLayer;
    BOOL mOverlayLayerSuppressed;
    CALayer *mPopoutLayer;
    BOOL mPreventSettingNilEditorOnTextResponder;
    CALayer *mRepContainerLayer;
    struct __CFDictionary { } *mRepLayersByRep;
    struct __CFDictionary { } *mRepsByContainerLayer;
    struct __CFDictionary { } *mRepsByRepLayer;
    BOOL mResizeCanvasOnLayout;
    NSObject<TSDRulerController> *mRulerController;
    <TSDEditor> *mSelectionChangeNotificationDeferredEditor;
    struct CGColor { } *mSelectionHighlightColor;
    BOOL mShouldAnimateAutoscroll;
    BOOL mShouldAutoscrollToSelectionAfterGestures;
    BOOL mShouldAutoscrollToSelectionAfterLayout;
    BOOL mShouldCenterSelectionWhenAutoscrolling;
    BOOL mShouldClipThemeContentToCanvas;
    BOOL mShouldSuppressRendering;
    BOOL mShowGrayOverlay;
    BOOL mShowInvisibleObjects;
    BOOL mShowUserDefinedGuides;
    BOOL mSupportsBackgroundTileRendering;
    BOOL mSuppressAutozoomToSelectionAfterLayout;
    BOOL mSuppressedAutozoom;
    BOOL mSuppressingKeyboard;
    BOOL mSuspendedLowPriorityThreadDispatcher;
    TSDTrackerManipulatorCoordinator *mTMCoordinator;
    float mTargetPointSize;
    BOOL mTemporarilyDisabledLayoutAndRenderOnThreadDuringScroll;
    BOOL mTextGesturesInFlight;
    TSDTileStorage *mTileStorage;
    NSFormatter *mUnitFormatter;
    } mUnobscuredScrollViewFrame;
    TSDUserDefinedGuideController *mUserDefinedGuideController;
    BOOL mUsesAlternateDrawableSelectionHighlight;
    } mVisibleBoundsRectForTiling;
    } mVisibleUnscaledRect;
    } mZoomCenterInBounds;
}

@property(readonly) TSKAccessController * accessController;
@property(readonly) NSArray * additionalLayersUnderRepLayers;
@property(readonly) BOOL animatingViewScale;
@property(readonly) struct CGSize { float x1; float x2; } annotationPopoverSize;
@property(readonly) unsigned int annotationPreferredRectEdge;
@property(readonly) TSDCanvas * canvas;
@property(readonly) TSDCanvasLayer * canvasLayer;
@property(readonly) id canvasReferenceController;
@property(readonly) struct CGSize { float x1; float x2; } canvasScrollingOutset;
@property(readonly) TSDCanvasView * canvasView;
@property(readonly) TSKChangeNotifier * changeNotifier;
@property(readonly) TSKCommandController * commandController;
@property BOOL createRepsForOffscreenLayouts;
@property(readonly) float currentViewScale;
@property(readonly) BOOL currentlyScrolling;
@property(readonly) BOOL currentlyWaitingOnThreadedLayoutAndRender;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) struct CGSize { float x1; float x2; } defaultMinimumUnscaledCanvasSize;
@property <TSDInteractiveCanvasControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) <TSDAnnotationHosting> * displayedAnnotation;
@property(readonly) BOOL displayedAnnotationPresentedPinned;
@property(readonly) TSKDocumentRoot * documentRoot;
@property(readonly) <TSKDocumentRootProvider> * documentRootProvider;
@property(retain,readonly) TSDDynamicOperationController * dynamicOperationController;
@property(readonly) TSDEditorController * editorController;
@property(readonly) float fitWidthViewScale;
@property(readonly) TSDGuideController * guideController;
@property(readonly) unsigned int hash;
@property BOOL inReadMode;
@property BOOL inVersionBrowsingMode;
@property(copy) NSArray * infosToDisplay;
@property(readonly) BOOL inspectorModeEnabled;
@property struct CGPoint { float x1; float x2; } lastTapPoint;
@property <TSDCanvasLayerHosting> * layerHost;
@property BOOL layoutAndRenderOnThreadDuringScroll;
@property(readonly) TSDLayoutController * layoutController;
@property(readonly) TSPObjectContext * objectContext;
@property(readonly) CALayer * overlayLayer;
@property BOOL overlayLayerSuppressed;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } p_visibleBoundsRectForTiling;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } p_visibleUnscaledRect;
@property BOOL preventSettingNilEditorOnTextResponder;
@property(readonly) CALayer * repContainerLayer;
@property BOOL resizeCanvasOnLayout;
@property NSObject<TSDRulerController> * rulerController;
@property struct CGColor { }* selectionHighlightColor;
@property BOOL shouldAutoscrollToSelectionAfterLayout;
@property BOOL shouldClipThemeContentToCanvas;
@property BOOL shouldShowUserDefinedGuides;
@property BOOL shouldSuppressRendering;
@property BOOL showGrayOverlay;
@property BOOL showInvisibleObjects;
@property BOOL showsComments;
@property(readonly) struct CGSize { float x1; float x2; } sizeOfScrollViewEnclosingCanvas;
@property(readonly) Class superclass;
@property BOOL supportsBackgroundTileRendering;
@property BOOL suppressAutozoomToSelectionAfterLayout;
@property BOOL textGesturesInFlight;
@property(retain,readonly) TSDTrackerManipulatorCoordinator * tmCoordinator;
@property(readonly) TSDContainerRep * topLevelContainerRepForEditing;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } unobscuredScrollViewFrame;
@property(readonly) TSDUserDefinedGuideController * userDefinedGuideController;
@property BOOL usesAlternateDrawableSelectionHighlight;
@property float viewScale;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } visibleBoundsRect;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } visibleBoundsRectForTiling;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } visibleBoundsRectUsingSizeOfEnclosingScrollView;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } visibleUnscaledRect;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } visibleUnscaledRectForAutoscroll;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } visibleUnscaledRectForCanvasUI;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } visibleUnscaledRectForScrollingAutomatically;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } visibleUnscaledRectValidWhileZooming;

+ (id)keyPathsForValuesAffectingCurrentViewScale;
+ (id)keyPathsForValuesAffectingDocumentRoot;
+ (id)keyPathsForValuesAffectingEditorController;
+ (id)keyPathsForValuesAffectingViewScale;
+ (BOOL)selectorIsActionMethod:(SEL)arg1;
+ (float)smallRepOutsetForHitTesting;

- (id)accessController;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)actionGhostKnobForRep:(id)arg1;
- (void)actionGhostKnobHitForRep:(id)arg1;
- (void)addBackgroundRenderingObject:(id)arg1;
- (void)addCommonObservers;
- (void)addDecorator:(id)arg1;
- (void)addOrShowComment:(id)arg1;
- (id)additionalLayersUnderRepLayers;
- (id)additionalVisibleInfosForCanvas:(id)arg1;
- (BOOL)allowAutoscroll;
- (BOOL)allowNegativeAutoscroll;
- (void)animateToViewScale:(float)arg1 contentOffset:(struct CGPoint { float x1; float x2; })arg2 duration:(double)arg3 orientation:(int)arg4;
- (BOOL)animatingViewScale;
- (id)annotationController;
- (struct CGSize { float x1; float x2; })annotationPopoverSize;
- (unsigned int)annotationPreferredRectEdge;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })annotationRectInParentView;
- (void)asyncProcessChanges:(id)arg1 forChangeSource:(id)arg2;
- (BOOL)attachedCommentsAllowedForDrawable:(id)arg1;
- (void)backgroundLayoutAndRenderState:(id)arg1 performWorkInBackgroundTilingOnly:(BOOL)arg2;
- (void)backgroundLayoutAndRenderStateDidPerformBackgroundWork:(id)arg1;
- (void)beginAnimations:(id)arg1 context:(void*)arg2;
- (void)beginDynamicOperation;
- (id)beginEditingRep:(id)arg1 clearingSelection:(BOOL)arg2 withEditorProvider:(id)arg3;
- (id)beginEditingRep:(id)arg1;
- (id)beginEditingRepForInfo:(id)arg1;
- (void)beginPossiblyParallelInspectorDynamicOperation;
- (void)beginScrollingOperation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingRectForActiveGuidesForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)canDrawTilingLayerInBackground:(id)arg1;
- (BOOL)canPerformInteractiveAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canZoomToCurrentSelection;
- (void)canvas:(id)arg1 createdRep:(id)arg2;
- (id)canvas;
- (void)canvasDidLayout:(id)arg1;
- (void)canvasDidUpdateRepsFromLayouts:(id)arg1;
- (void)canvasDidUpdateVisibleBounds:(id)arg1;
- (void)canvasDidValidateLayouts:(id)arg1;
- (void)canvasDidValidateLayoutsWithDependencies:(id)arg1;
- (id)canvasEditor;
- (id)canvasLayer;
- (void)canvasLayoutInvalidated:(id)arg1;
- (id)canvasReferenceController;
- (struct CGSize { float x1; float x2; })canvasScrollingOutset;
- (id)canvasView;
- (void)canvasWillLayout:(id)arg1;
- (void)canvasWillUpdateRepsFromLayouts:(id)arg1;
- (id)changeNotifier;
- (struct CGPoint { float x1; float x2; })clampedUnscaledContentOffset:(struct CGPoint { float x1; float x2; })arg1 forViewScale:(float)arg2;
- (void)clipGuideToContainer:(id)arg1 atUnscaledPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)closeOverlays;
- (id)commandController;
- (void)commitAnimations;
- (struct CGPoint { float x1; float x2; })contentOffset;
- (struct CGPoint { float x1; float x2; })convertBoundsToUnscaledPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertBoundsToUnscaledRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })convertBoundsToUnscaledSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })convertUnscaledToBoundsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertUnscaledToBoundsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })convertUnscaledToBoundsSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)createRepsForOffscreenLayouts;
- (float)currentViewScale;
- (BOOL)currentlyScrolling;
- (BOOL)currentlyWaitingOnThreadedLayoutAndRender;
- (void)dealloc;
- (int)defaultKnobTypeForRep:(id)arg1;
- (struct CGSize { float x1; float x2; })defaultMinimumUnscaledCanvasSize;
- (id)delegate;
- (void)deselectAll:(id)arg1;
- (void)didEndDrawingTilingLayerInBackground:(id)arg1 withToken:(id)arg2;
- (void)disableThreadedLayoutAndRender;
- (void)discardRepForClassChange:(id)arg1;
- (void)displayRulerForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)displayRulerWithSlowFade:(BOOL)arg1;
- (id)displayedAnnotation;
- (BOOL)displayedAnnotationPresentedPinned;
- (id)documentRoot;
- (id)documentRootProvider;
- (void)doubleTappedCanvasBackgroundAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)dynamicOperationController;
- (id)editorController;
- (void)enableThreadedLayoutAndRender;
- (void)encodeWithCoder:(id)arg1;
- (void)endDynamicOperation;
- (void)endEditing;
- (void)endPossiblyParallelInspectorDynamicOperation;
- (void)endScrollingOperation;
- (float)fitWidthViewScale;
- (void)getCurrentAnnotationAuthor:(id*)arg1 commandToCreateIfNecessary:(id*)arg2;
- (void)getCurrentAnnotationAuthorCreatingIfNecessaryWithCompletionHandler:(id)arg1;
- (struct CGSize { float x1; float x2; })growUnscaledCanvasLayerSize:(struct CGSize { float x1; float x2; })arg1;
- (id)guideController;
- (id)guideStorageAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)handleDoubleTapAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)handleMultipleTapAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)handleSingleTapAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)hasAnnotations;
- (void)hideAnnotationUIWithPinned:(BOOL)arg1;
- (void)hideDisplayedAnnotation;
- (void)hideRuler;
- (id)hitKnobAtPoint:(struct CGPoint { float x1; float x2; })arg1 returningRep:(id*)arg2;
- (id)hitRep:(struct CGPoint { float x1; float x2; })arg1 passingTest:(id)arg2;
- (id)hitRep:(struct CGPoint { float x1; float x2; })arg1;
- (id)hitRepChromeAtUnscaledPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)hitRepIgnoringClickThrough:(struct CGPoint { float x1; float x2; })arg1;
- (id)hitRepsAtPoint:(struct CGPoint { float x1; float x2; })arg1 withSlop:(struct CGSize { float x1; float x2; })arg2;
- (struct CGSize { float x1; float x2; })i_canvasCenterOffsetForProposedViewScale:(float)arg1 originalViewScale:(float)arg2;
- (void)i_canvasContentsScaleDidChange;
- (id)i_currentAnimation;
- (id)i_descriptionForViewScale:(float)arg1;
- (void)i_drawRepWithReadLock:(id)arg1 inContext:(struct CGContext { }*)arg2 forLayer:(id)arg3;
- (BOOL)i_inPrintPreviewMode;
- (void)i_invalidateSelectionHighlightLayers;
- (void)i_layerHostHasBeenTornDown;
- (void)i_layout;
- (void)i_layoutRegistered:(id)arg1;
- (void)i_layoutUnregistered:(id)arg1;
- (float)i_nextCanvasViewScaleDetentForProposedViewScale:(float)arg1 greater:(BOOL)arg2;
- (void)i_recordUserViewScale;
- (void)i_repNeedsDisplay:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)i_repNeedsDisplay:(id)arg1;
- (BOOL)i_temporarilyDisabledLayoutAndRenderOnThreadDuringScroll;
- (id)i_tileStorage;
- (void)i_viewDidZoomToViewScale:(float)arg1;
- (void)i_viewIsZoomingAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)i_viewScaleDidChange;
- (float)i_viewScaleForProposedViewScale:(float)arg1 originalViewScale:(float)arg2;
- (void)i_viewScrollDidChange;
- (void)i_viewScrollingEnded;
- (void)i_viewWillBeginZooming;
- (id)iaHUDController;
- (id)imageHUDController;
- (BOOL)inReadMode;
- (BOOL)inVersionBrowsingMode;
- (id)infoForModel:(id)arg1 withSelection:(id)arg2;
- (id)infoToScrollToForModel:(id)arg1 withSelection:(id)arg2;
- (id)infosForGuides;
- (id)infosToDisplay;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)inspectorModeEnabled;
- (void)invalidateComments;
- (void)invalidateLayers;
- (void)invalidateReps;
- (void)invalidateVisibleBounds;
- (BOOL)isCanvasInteractive;
- (BOOL)isInDynamicOperation;
- (BOOL)isInInspectorDynamicOperation;
- (BOOL)isPrinting;
- (BOOL)isPrintingCanvas;
- (struct CGPoint { float x1; float x2; })lastTapPoint;
- (id)layerForRep:(id)arg1;
- (id)layerHost;
- (BOOL)layoutAndRenderOnThreadDuringScroll;
- (id)layoutController;
- (id)layoutForInfo:(id)arg1;
- (id)layoutForInfoNearestVisibleRect:(id)arg1 intersectingSelection:(id)arg2;
- (id)layoutForInfoNearestVisibleRect:(id)arg1;
- (id)layoutForModel:(id)arg1 withSelection:(id)arg2;
- (void)layoutIfNeeded;
- (void)layoutInvalidated;
- (id)layoutsForInfo:(id)arg1 intersectingSelection:(id)arg2;
- (id)layoutsForInfo:(id)arg1;
- (id)layoutsForModel:(id)arg1 withSelection:(id)arg2;
- (id)localizedPercentStringForAlignmentGuide:(id)arg1;
- (void)makeEditorPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)makeUserDefinedGuidesVisible;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)mustDrawTilingLayerOnMainThread:(id)arg1;
- (id)newCanvasEditor;
- (struct CGColor { }*)newDefaultSelectionHighlightColor;
- (void)nextAnnotation:(id)arg1;
- (void)nextAnnotationAfterVisibleAnnotation:(id)arg1;
- (id)objectContext;
- (float)offsetForTranslatingGuidesInStorage:(id)arg1 guideType:(int)arg2;
- (float)offsetForTranslatingToCenterRulerForGuidesInStorage:(id)arg1 guideType:(int)arg2;
- (id)overlayLayer;
- (BOOL)overlayLayerSuppressed;
- (void)p_acquireLockAndPerformAction:(id)arg1;
- (void)p_addOrShowComment:(id)arg1 selector:(SEL)arg2;
- (void)p_annotationAuthorNameDidChange:(id)arg1;
- (BOOL)p_annotationShouldShowUI:(id)arg1;
- (void)p_autoscrollToSelection:(id)arg1 withInfo:(id)arg2 isInitialSelection:(BOOL)arg3 focusRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 scrollImmediately:(BOOL)arg5 skipZoom:(BOOL)arg6;
- (void)p_autoscrollToSelection:(id)arg1 withInfo:(id)arg2 isInitialSelection:(BOOL)arg3 focusRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (id)p_backgroundLayoutAndRenderState;
- (void)p_beginZoomingOperation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_calculateVisibleBoundsRectForTiling;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_calculateVisibleUnscaledRect;
- (BOOL)p_centerOnInitialSelection;
- (void)p_commonInit;
- (id)p_decorators;
- (void)p_discardLayer:(id)arg1 forRep:(id)arg2;
- (void)p_drawLayerWithReadLock:(id)arg1;
- (void)p_editorControllerDidChangeCurrentEditors:(id)arg1;
- (void)p_editorControllerDidChangeTextInputEditor:(id)arg1;
- (void)p_editorControllerSelectionDidChange:(id)arg1;
- (void)p_editorControllerSelectionDidChangeAndWantsKeyboard:(id)arg1;
- (void)p_editorDidChangeSelection:(id)arg1 withSelectionFlags:(unsigned int)arg2;
- (void)p_editorDoneChangingSelection:(id)arg1 withFlags:(unsigned int)arg2;
- (void)p_editorDoneChangingSelection:(id)arg1;
- (BOOL)p_endEditingToBeginEditingRep:(id)arg1;
- (void)p_endZoomingOperation;
- (void)p_guideColorChanged:(id)arg1;
- (void)p_layoutWithReadLock;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_outsetSelectionRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)p_overlayLayerForReps:(id)arg1;
- (void)p_postNotificationOnMainThreadWithValidLayouts:(id)arg1;
- (void)p_recursiveHitKnobAtPoint:(struct CGPoint { float x1; float x2; })arg1 inRep:(id)arg2 minDistance:(float*)arg3 hitKnob:(id*)arg4 hitRep:(id*)arg5;
- (void)p_recursivelyUpdateLayerEdgeAntialiasingForLayer:(id)arg1;
- (void)p_recursivelyUpdateLayerForRep:(id)arg1 accumulatingLayers:(id)arg2 andReps:(id)arg3;
- (id)p_repForLayout:(id)arg1 createIfNeeded:(BOOL)arg2;
- (void)p_rulerUnitsDidChangeNotification:(id)arg1;
- (void)p_scrollModelToVisible:(id)arg1 withSelection:(id)arg2;
- (void)p_scrollToPrimarySelectionForEditor:(id)arg1 skipZoom:(BOOL)arg2;
- (id)p_setSelection:(id)arg1 onInfo:(id)arg2 withFlags:(unsigned int)arg3;
- (void)p_setTargetPointSize:(float)arg1;
- (void)p_setupPopoutLayerForReps:(id)arg1;
- (BOOL)p_shouldLayoutAndRenderOnThread;
- (BOOL)p_shouldSuppressAutozoomForEditor:(id)arg1;
- (void)p_syncWithLayoutThread;
- (float)p_targetPointSize;
- (void)p_textGesturesDidEndNotification:(id)arg1;
- (void)p_textGesturesWillBeginNotification:(id)arg1;
- (void)p_updateCanvasSizeFromLayouts;
- (void)p_updateLayersFromReps;
- (void)p_viewScrollingEnded;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_visibleBoundsRectForTiling;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_visibleBoundsRectUsingSizeOfEnclosingScrollView:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_visibleUnscaledRect;
- (void)p_willEnterForeground:(id)arg1;
- (void)presentAnnotationUI:(id)arg1 model:(id)arg2 selection:(id)arg3 beginEditing:(BOOL)arg4 pinned:(BOOL)arg5 viaKnob:(BOOL)arg6;
- (void)presentError:(id)arg1 completionHandler:(id)arg2;
- (void)presentErrors:(id)arg1 withLocalizedDescription:(id)arg2 completionHandler:(id)arg3;
- (BOOL)preventSettingNilEditorOnTextResponder;
- (void)previousAnnotation:(id)arg1;
- (void)previousAnnotationBeforeVisibleAnnotation:(id)arg1;
- (id)provideDynamicGuidesForLayout:(id)arg1;
- (id)provideUserDefinedGuides;
- (id)queueForDrawingTilingLayerInBackground:(id)arg1;
- (void)recreateAllLayoutsAndReps;
- (void)removeBackgroundRenderingObject:(id)arg1;
- (void)removeCommonObservers;
- (void)removeDecorator:(id)arg1;
- (id)repContainerLayer;
- (id)repForInfo:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)repForInfo:(id)arg1;
- (id)repForLayout:(id)arg1;
- (id)replaceImageController;
- (id)repsForInfo:(id)arg1;
- (BOOL)resizeCanvasOnLayout;
- (void)resumeEditing;
- (struct CGSize { float x1; float x2; })rulerCenterOffsetSizeForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)rulerController;
- (void)scrollCurrentSelectionToVisible;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })scrollFocusRectForModel:(id)arg1 withSelection:(id)arg2;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (void)scrollRectToVisibleCenter:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2 onlyScrollNecessaryAxes:(BOOL)arg3;
- (void)scrollRectToVisibleWithSelectionOutset:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (void)scrollSearchReferenceToVisible:(id)arg1;
- (void)scrollToPrimarySelection;
- (void)scrollToPrimarySelectionForEditor:(id)arg1;
- (void)scrollToSelection:(id)arg1 onModel:(id)arg2 scrollImmediately:(BOOL)arg3;
- (void)scrollToSelection:(id)arg1 onModel:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (BOOL)selectionContainsOnlyInfosOnCanvas:(id)arg1 model:(id)arg2;
- (struct CGColor { }*)selectionHighlightColor;
- (void)setAnimation:(id)arg1 forLayer:(id)arg2 forKey:(id)arg3;
- (void)setAnimationCompletionBlock:(id)arg1;
- (void)setAnimationDelay:(double)arg1;
- (void)setAnimationDelegate:(id)arg1;
- (void)setAnimationDidStopSelector:(SEL)arg1;
- (void)setAnimationDuration:(double)arg1;
- (void)setAnimationRepeatAutoreverses:(BOOL)arg1;
- (void)setAnimationRepeatCount:(float)arg1;
- (void)setAnimationStartDate:(id)arg1;
- (void)setAnimationTimingFunction:(id)arg1;
- (void)setAnimationWillStartSelector:(SEL)arg1;
- (void)setAnnotationAuthorColor:(id)arg1;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1 animated:(BOOL)arg2;
- (void)setCreateRepsForOffscreenLayouts:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInReadMode:(BOOL)arg1;
- (void)setInVersionBrowsingMode:(BOOL)arg1;
- (void)setInfosToDisplay:(id)arg1;
- (void)setLastTapPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setLayerHost:(id)arg1;
- (void)setLayoutAndRenderOnThreadDuringScroll:(BOOL)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 onLayer:(id)arg2;
- (void)setNeedsDisplayOnLayer:(id)arg1;
- (void)setOverlayLayerSuppressed:(BOOL)arg1;
- (void)setP_visibleBoundsRectForTiling:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setP_visibleUnscaledRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPreventSettingNilEditorOnTextResponder:(BOOL)arg1;
- (void)setResizeCanvasOnLayout:(BOOL)arg1;
- (void)setRulerController:(id)arg1;
- (void)setSelection:(id)arg1 onModel:(id)arg2 withFlags:(unsigned int)arg3;
- (void)setSelectionHighlightColor:(struct CGColor { }*)arg1;
- (void)setShouldAutoscrollToSelectionAfterLayout:(BOOL)arg1;
- (void)setShouldClipThemeContentToCanvas:(BOOL)arg1;
- (void)setShouldShowUserDefinedGuides:(BOOL)arg1;
- (void)setShouldSuppressRendering:(BOOL)arg1;
- (void)setShowGrayOverlay:(BOOL)arg1;
- (void)setShowInvisibleObjects:(BOOL)arg1;
- (void)setShowsComments:(BOOL)arg1;
- (void)setSupportsBackgroundTileRendering:(BOOL)arg1;
- (void)setSuppressAutozoomToSelectionAfterLayout:(BOOL)arg1;
- (void)setTextGesturesInFlight:(BOOL)arg1;
- (void)setUnobscuredScrollViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setUsesAlternateDrawableSelectionHighlight:(BOOL)arg1;
- (void)setViewScale:(float)arg1 andScrollViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 animated:(BOOL)arg3;
- (void)setViewScale:(float)arg1 andScrollViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 maintainPosition:(BOOL)arg3 animated:(BOOL)arg4;
- (void)setViewScale:(float)arg1 contentOffset:(struct CGPoint { float x1; float x2; })arg2 animated:(BOOL)arg3;
- (void)setViewScale:(float)arg1;
- (BOOL)shouldAutoscrollToSelectionAfterLayout;
- (BOOL)shouldBeginDrawingTilingLayerInBackground:(id)arg1 returningToken:(id*)arg2 andQueue:(id*)arg3;
- (BOOL)shouldClipThemeContentToCanvas;
- (BOOL)shouldDisplayCommentUIForAuthor:(id)arg1 info:(id)arg2;
- (BOOL)shouldDisplayCommentUIForInfo:(id)arg1;
- (BOOL)shouldEverShowPathHighlightOnInvisibleShapes;
- (BOOL)shouldLayoutTilingLayer:(id)arg1;
- (BOOL)shouldPopKnobsOutsideEnclosingScrollView;
- (BOOL)shouldResizeCanvasToScrollView;
- (BOOL)shouldShowInstructionalText;
- (BOOL)shouldShowOnRepHyperlinkUI;
- (BOOL)shouldShowPathHighlightOnUnselectedInvisibleShapes;
- (BOOL)shouldShowTextOverflowGlyphs;
- (BOOL)shouldShowUserDefinedGuides;
- (BOOL)shouldSuppressRendering;
- (BOOL)shouldZoomOnSelectionChange;
- (void)showAnnotation:(id)arg1 model:(id)arg2 selection:(id)arg3 beginEditing:(BOOL)arg4 pinned:(BOOL)arg5 shouldSetSelection:(BOOL)arg6 viaKnob:(BOOL)arg7;
- (void)showAnnotation:(id)arg1 model:(id)arg2 selection:(id)arg3 beginEditing:(BOOL)arg4 pinned:(BOOL)arg5 shouldSetSelection:(BOOL)arg6;
- (BOOL)showGrayOverlay;
- (BOOL)showInvisibleObjects;
- (void)showOrHideComments:(id)arg1;
- (BOOL)showsComments;
- (struct CGSize { float x1; float x2; })sizeOfScrollViewEnclosingCanvas;
- (struct CGPoint { float x1; float x2; })smartZoomCenterForNoSelection;
- (BOOL)spellCheckingSupported;
- (BOOL)spellCheckingSuppressed;
- (BOOL)supportsBackgroundTileRendering;
- (BOOL)suppressAutozoomToSelectionAfterLayout;
- (void)syncProcessChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)tappedCanvasBackgroundAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)teardown;
- (void)teardownBackgroundRendering;
- (void)teardownCanvasEditor;
- (BOOL)textGesturesInFlight;
- (id)tmCoordinator;
- (void)toggleAnnotationVisibility:(id)arg1 model:(id)arg2 selection:(id)arg3 beginEditing:(BOOL)arg4 shouldSetSelection:(BOOL)arg5;
- (void)toggleHyperlinkUIForRep:(id)arg1;
- (void)toggleShouldShowUserDefinedGuides;
- (id)topLevelContainerRepForEditing;
- (id)topLevelRepsForDragSelecting;
- (id)topLevelRepsForHitTesting;
- (id)topLevelZOrderedSiblingsOfInfos:(id)arg1;
- (void)translateGuide:(id)arg1 toContainerRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)translateGuides:(id)arg1 toContainerRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)unitFormatter;
- (id)unitStringForAngle:(float)arg1 andLength:(float)arg2;
- (id)unitStringForAngle:(float)arg1;
- (id)unitStringForNumber:(float)arg1;
- (id)unitStringForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)unitStringForSize:(struct CGSize { float x1; float x2; })arg1;
- (void)unobscuredFrameDidChange;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })unobscuredFrameOfView:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })unobscuredScrollViewFrame;
- (void)updateSelectionForTapAtPoint:(struct CGPoint { float x1; float x2; })arg1 extendingSelection:(BOOL)arg2;
- (void)updateSelectionForTapOnSelectedRep:(id)arg1;
- (id)userDefinedGuideController;
- (Class)userDefinedGuideControllerClass;
- (BOOL)usesAlternateDrawableSelectionHighlight;
- (id)validatedLayoutForInfo:(id)arg1;
- (void)viewDidEndZooming;
- (float)viewScale;
- (id)viewWithTransferredLayers;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleBoundsForTilingLayer:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleBoundsRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleBoundsRectForTiling;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleBoundsRectUsingSizeOfEnclosingScrollView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleScaledBoundsForClippingRepsOnCanvas:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleUnscaledRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleUnscaledRectForAutoscroll;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleUnscaledRectForCanvasUI;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleUnscaledRectForScrollingAutomatically;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleUnscaledRectValidWhileZooming;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visualContainerRectForGuideStorage:(id)arg1;
- (void)zoomToCurrentSelection;
- (void)zoomWithAnimationToUnscaledRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
