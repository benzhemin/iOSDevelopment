/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class AFDictationConnection, AFDictationOptions, AFPreferences, CADisplayLink, NSArray, NSMutableArray, NSString, NSTimer, UIAlertView, UIDictationStreamingOperations, UIKeyboardInputMode, UIWindow, _UIDictationPrivacySheetController;

@interface UIDictationController : NSObject <_UITouchPhaseChangeDelegate> {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    NSArray *_availableLanguages;
    id _callCenter;
    void *_callCenterFrameworkFileHandle;
    AFDictationConnection *_connection;
    BOOL _connectionWasAlreadyAliveForStatisticsLogging;
    UIAlertView *_dictationAvailableSoonAlert;
    UIWindow *_dictationPresenterWindow;
    _UIDictationPrivacySheetController *_dictationPrivacySheetController;
    BOOL _discardNextHypothesis;
    void *_facetimeCallFrameworkFileHandle;
    id _facetimeCallManager;
    BOOL _hasPreheated;
    UIKeyboardInputMode *_inputModeThatInvokedDictation;
    } _insertionRange;
    NSString *_language;
    double _lastAnimationUpdateTimeStamp;
    NSString *_lastHypothesis;
    AFDictationOptions *_options;
    NSMutableArray *_pendingEdits;
    BOOL _performingStreamingEditingOperation;
    AFPreferences *_preferences;
    NSString *_previousHypothesis;
    BOOL _recievingResults;
    NSTimer *_recordingLimitTimer;
    BOOL _streamingAnimationActive;
    CADisplayLink *_streamingAnimationDisplayLink;
    UIDictationStreamingOperations *_streamingOperations;
    NSString *_targetHypothesis;
    BOOL _updatingDocument;
    BOOL _wasDisabledDueToTelephonyActivity;
    BOOL cancelledByWaitingForLocalResults;
    BOOL dictationStartedFromGesture;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) UIWindow * dictationPresenterWindow;
@property(retain) _UIDictationPrivacySheetController * dictationPrivacySheetController;
@property BOOL dictationStartedFromGesture;
@property BOOL discardNextHypothesis;
@property BOOL hasPreheated;
@property(readonly) unsigned int hash;
@property(retain) UIKeyboardInputMode * inputModeThatInvokedDictation;
@property struct _NSRange { unsigned int x1; unsigned int x2; } insertionRange;
@property(copy) NSString * lastHypothesis;
@property(retain) NSMutableArray * pendingEdits;
@property BOOL performingStreamingEditingOperation;
@property(copy) NSString * previousHypothesis;
@property(readonly) Class superclass;
@property(copy) NSString * targetHypothesis;

+ (id)activeConnection;
+ (id)activeInstance;
+ (void)applicationDidBecomeActive;
+ (void)applicationDidChangeStatusBarFrame;
+ (void)applicationDidEnterBackgroundNotification;
+ (void)applicationWillResignActive;
+ (id)attributedStringForDictationResult:(id)arg1 andCorrectionIdentifier:(id)arg2;
+ (id)bestInterpretationForDictationResult:(id)arg1;
+ (BOOL)dictationIsFunctional;
+ (void)didBeginEditingInTextView:(id)arg1;
+ (void)didOneFingerTapInTextView:(id)arg1;
+ (void)disableGestureHandler;
+ (void)enableGestureHandlerIfNecessary;
+ (BOOL)fetchCurrentInputModeSupportsDictation;
+ (id)interpretation:(id)arg1 forPhraseIndex:(unsigned int)arg2 isShiftLocked:(BOOL)arg3 autocapitalizationType:(int)arg4;
+ (BOOL)isRunning;
+ (BOOL)isTextViewOnStarkScreen:(id)arg1;
+ (void)keyboardDidSetInputMode;
+ (void)keyboardDidUpdateOnScreenStatus;
+ (void)keyboardWillChangeFromDelegate:(id)arg1 toDelegate:(id)arg2;
+ (void)logCorrectionStatisticsForDelegate:(id)arg1;
+ (void)logDictationString:(id)arg1;
+ (id)metadataDictionaryForCorrectionIdentifier:(id)arg1;
+ (BOOL)openAssistantFrameworkIfNecessary;
+ (void)poppedLastStreamingOperation;
+ (id)serializedDictationPhrases:(id)arg1 fromKeyboard:(BOOL)arg2 transform:(struct __CFString { }*)arg3;
+ (id)serializedDictationPhrases:(id)arg1;
+ (id)serializedDictationPhrasesFromTokenMatrix:(id)arg1 fromKeyboard:(BOOL)arg2 transform:(struct __CFString { }*)arg3;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString { }*)arg2 fromKeyboard:(BOOL)arg3 options:(id)arg4;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString { }*)arg2 ranges:(id*)arg3 options:(id)arg4;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString { }*)arg2 ranges:(id*)arg3;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString { }*)arg2;
+ (float)serverManualEndpointingThreshold;
+ (BOOL)setupForOpeningConnections;
+ (BOOL)setupForPhraseSerialization;
+ (id)sharedInstance;
+ (BOOL)shouldDeleteBackwardInInputDelegate:(id)arg1;
+ (BOOL)shouldEnableGestureHandler;
+ (BOOL)shouldHideCursorForTextView:(id)arg1;
+ (BOOL)shouldHideSelectionUIForTextView:(id)arg1;
+ (BOOL)shouldInsertText:(id)arg1 inInputDelegate:(id)arg2;
+ (id)singleLineResultForResult:(id)arg1;
+ (void)siriPreferencesChanged;
+ (BOOL)starkScreenExists;
+ (id)streamingHypothesisForPhrases:(id)arg1;
+ (id)stringForState:(int)arg1;
+ (id)stringForViewMode:(int)arg1;
+ (BOOL)takesPhysicalButtonsBegan:(id)arg1 forTextView:(id)arg2;
+ (BOOL)takesPhysicalButtonsEnded:(id)arg1 forTextView:(id)arg2;
+ (void)updateLandingView;
+ (BOOL)usingServerManualEndpointingThreshold;
+ (BOOL)usingTypeAndTalk;
+ (int)viewMode;

- (void)_beginEnableDictationPrompt;
- (id)_connection;
- (void)_displayLinkFired:(id)arg1;
- (void)_endEnableDictationPromptAnimated:(BOOL)arg1;
- (void)_finalizeDictationText;
- (id)_hypothesisRangeFromSelectionRange:(id)arg1 inputDelegate:(id)arg2;
- (void)_presentOptInAlert;
- (void)_presentPrivacySheet;
- (id)_rangeByExtendingRange:(id)arg1 by:(int)arg2 inputDelegate:(id)arg3;
- (void)_restartDictation;
- (BOOL)_shouldDeleteBackwardInInputDelegate:(id)arg1;
- (BOOL)_shouldInsertText:(id)arg1 inInputDelegate:(id)arg2;
- (void)_startStreamingAnimations;
- (void)_stopStreamingAnimation;
- (void)_touchPhaseChangedForTouch:(id)arg1;
- (void)_updateFromSelectedTextRange:(id)arg1 withNewHypothesis:(id)arg2;
- (id)assistantCompatibleLanguageCodeForInputMode:(id)arg1;
- (float)audioLevel;
- (void)cancelDictation;
- (void)cancelRecordingLimitTimer;
- (void)completeStartConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)completeStartConnectionForReason:(int)arg1;
- (id)connection;
- (id)connectionForStatisticsLogging;
- (void)dealloc;
- (void)delayedTelephonyCheckingSetup;
- (void)dictationConnection:(id)arg1 didHypothesizePhrases:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4;
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)dictationConnectionSpeechRecordingWillBegin:(id)arg1;
- (void)dictationConnnectionDidChangeAvailability:(id)arg1;
- (BOOL)dictationEnabled;
- (id)dictationPhraseArrayFromDictationResult:(id)arg1;
- (id)dictationPresenterWindow;
- (id)dictationPrivacySheetController;
- (BOOL)dictationStartedFromGesture;
- (void)disableAutorotation;
- (BOOL)disabledDueToTelephonyActivity;
- (BOOL)discardNextHypothesis;
- (void)dismissDictationView:(id)arg1;
- (void)enableProximity;
- (void)endSessionIfNecessaryForTransitionFromState:(int)arg1 toState:(int)arg2;
- (void)errorAnimationDidFinish;
- (id)fieldIdentifierInputDelegate:(id)arg1;
- (void)finishDictationRecognitionWithPhrases:(id)arg1 languageModel:(id)arg2 correctionIdentifier:(id)arg3;
- (BOOL)hasPreheated;
- (id)init;
- (id)inputModeThatInvokedDictation;
- (void)insertSerializedDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })insertionRange;
- (BOOL)isRecievingResults;
- (id)language;
- (id)languageCodeForAssistantLanguageCode:(id)arg1;
- (id)lastHypothesis;
- (BOOL)needsLeadingSpaceForPhrases:(id)arg1;
- (BOOL)needsTrailingSpaceForPhrases:(id)arg1;
- (id)pendingEdits;
- (void)performIgnoringDocumentChanges:(id)arg1;
- (BOOL)performingStreamingEditingOperation;
- (id)postfixTextForInputDelegate:(id)arg1;
- (id)prefixTextForInputDelegate:(id)arg1;
- (void)preheatIfNecessary;
- (id)previousHypothesis;
- (void)proximityStateChanged:(id)arg1;
- (void)reenableAutorotation;
- (void)releaseConnection;
- (void)releaseConnectionAfterDictationRequest;
- (void)releaseConnectionAfterStatisticsLogging;
- (void)restartDictationForTypeAndTalk;
- (struct __CFString { }*)resultTransformForLanguageModel:(id)arg1;
- (id)resultWithTrailingSpace:(id)arg1;
- (id)selectedTextForInputDelegate:(id)arg1;
- (void)setDictationInputmode;
- (void)setDictationPresenterWindow:(id)arg1;
- (void)setDictationPrivacySheetController:(id)arg1;
- (void)setDictationStartedFromGesture:(BOOL)arg1;
- (void)setDiscardNextHypothesis:(BOOL)arg1;
- (void)setHasPreheated:(BOOL)arg1;
- (void)setInputModeThatInvokedDictation:(id)arg1;
- (void)setInsertionRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setLanguage:(id)arg1;
- (void)setLastHypothesis:(id)arg1;
- (void)setPendingEdits:(id)arg1;
- (void)setPerformingStreamingEditingOperation:(BOOL)arg1;
- (void)setPreviousHypothesis:(id)arg1;
- (void)setState:(int)arg1;
- (void)setTargetHypothesis:(id)arg1;
- (void)setupConnectionOptions;
- (void)setupForDictationStartForReason:(int)arg1;
- (void)setupForStreamingDictationStart;
- (void)setupToInsertResultForNewHypothesis:(id)arg1;
- (void)startConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)startConnectionForReason:(int)arg1;
- (void)startDictation;
- (void)startDictationForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)startDictationForReason:(int)arg1;
- (void)startRecordingLimitTimer;
- (int)state;
- (void)stopDictation;
- (id)streamingOperations;
- (id)supportedDictationLanguages:(id)arg1;
- (BOOL)supportsInputMode:(id)arg1 error:(id*)arg2;
- (void)switchToDictationInputMode;
- (void)switchToDictationInputModeWithTouch:(id)arg1;
- (id)targetHypothesis;
- (BOOL)wasDisabledDueToTelephonyActivity;

@end
