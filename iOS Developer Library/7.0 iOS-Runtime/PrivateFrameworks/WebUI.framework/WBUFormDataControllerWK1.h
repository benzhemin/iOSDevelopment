/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class NSHashTable, NSMapTable, NSObject<OS_dispatch_queue>, NSString, WBUFormAutoCompleteStateWK1;

@interface WBUFormDataControllerWK1 : WBUFormDataController <UIWebAutoFillDelegate> {
    WBUFormAutoCompleteStateWK1 *_autoCompleteState;
    NSMapTable *_editedTextFieldsByFrame;
    NSObject<OS_dispatch_queue> *_editedTextFieldsByFrameQueue;
    NSHashTable *_webBrowserViewsWithUnsubmittedForms;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)sharedFormDataController;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillTerminate:(id)arg1;
- (void)_autoFillLoginForm:(id)arg1 inFrame:(id)arg2;
- (void)_detectWebsiteSpecificSearchProviderInForm:(id)arg1 sourceFrame:(id)arg2 webBrowserView:(id)arg3;
- (id)_formMetadataAndFrame:(id*)arg1 forPolicyAction:(id)arg2 frame:(id)arg3;
- (void)_recursivelySaveUnsubmittedGeneratedPasswordsInWebBrowserView:(id)arg1 frame:(id)arg2;
- (void)_registerWebBrowserViewWithUnsubmittedForm:(id)arg1;
- (void)_saveUnsubmittedGeneratedPasswords;
- (void)_unregisterWebBrowserViewWithUnsubmittedForm:(id)arg1;
- (void)_webViewWillClose:(id)arg1;
- (void)autoFillInWebBrowserView:(id)arg1;
- (void)clearFormAutoFillStateForFrame:(id)arg1;
- (void)dealloc;
- (id)decisionListenerForAction:(id)arg1 frame:(id)arg2 originalListener:(id)arg3;
- (void)didEndEditingTextField:(id)arg1 inFrame:(id)arg2;
- (void)didFocusTextField:(id)arg1 inFrame:(id)arg2;
- (BOOL)hasCurrentSuggestionsForWebBrowserView:(id)arg1;
- (id)init;
- (id)titleOfAutoFillButtonInWebBrowserView:(id)arg1;
- (void)webBrowserView:(id)arg1 acceptedAutoFillWord:(id)arg2;
- (void)webBrowserView:(id)arg1 clearFormAutoFillStateForFrame:(id)arg2;
- (void)webBrowserView:(id)arg1 didBeginEditingTextField:(id)arg2 inFrame:(id)arg3;
- (void)webBrowserView:(id)arg1 didEndEditingTextField:(id)arg2 inFrame:(id)arg3;
- (void)webBrowserView:(id)arg1 didFocusTextField:(id)arg2 inFrame:(id)arg3;
- (void)webBrowserView:(id)arg1 preFillInFrame:(id)arg2;
- (id)webBrowserView:(id)arg1 suggestionsForString:(id)arg2;
- (void)webBrowserView:(id)arg1 textDidChangeInTextField:(id)arg2 inFrame:(id)arg3;
- (void)webBrowserView:(id)arg1 updateAutoFillButton:(id)arg2;
- (void)webBrowserView:(id)arg1 willSendSubmitEventToForm:(id)arg2 inFrame:(id)arg3 withValues:(id)arg4;
- (void)webBrowserView:(id)arg1 willSubmitForm:(id)arg2 toFrame:(id)arg3 fromFrame:(id)arg4 withValues:(id)arg5 submissionHandler:(id)arg6;
- (BOOL)webBrowserViewShouldShowAutoFillButton:(id)arg1;

@end
