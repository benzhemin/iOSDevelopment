/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSDate, NSDateFormatter, NSString, UIButton, UIDatePicker, UITableViewCell, UITextField;

@interface PKPaymentCardManualEntryViewController : PKPaymentCardDetailsViewController <UITextFieldDelegate, CRCameraReaderDelegate> {
    UITableViewCell *_cardHolderNameCell;
    UITableViewCell *_cardNumberCell;
    UITextField *_cardNumberField;
    NSDateFormatter *_dateFormatter;
    NSDate *_expirationDate;
    UITableViewCell *_expirationDateCell;
    UITextField *_expirationDateField;
    UIDatePicker *_expirationDatePicker;
    BOOL _hasScrolledToShowFields;
    UITextField *_nameField;
    UIButton *_photoButton;
    UITableViewCell *_securityCodeCell;
    void *_unifiedMeCard;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)_addFromCamera:(id)arg1;
- (id)_cardHolderNameCell;
- (id)_cardNumberCell;
- (void)_clearTextFieldColors;
- (id)_defaultCell;
- (void)_displayNewExpiration:(id)arg1;
- (id)_expirationDateCell;
- (id)_name;
- (id)_securityCodeCell;
- (void)_updateTextField:(id)arg1 withDate:(id)arg2;
- (void)cameraReader:(id)arg1 didFailWithError:(id)arg2;
- (void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2;
- (void)cameraReaderDidCancel:(id)arg1;
- (void)cameraReaderDidDisplayMessage:(id)arg1;
- (void)cameraReaderDidEnd:(id)arg1;
- (void)cameraReaderDidFindTarget:(id)arg1;
- (void)cancelCameraCapture:(id)arg1;
- (void)dealloc;
- (void)handleNext:(id)arg1;
- (id)headerView;
- (id)initWithWebService:(id)arg1 context:(int)arg2 setupDelegate:(id)arg3;
- (BOOL)isComplete;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;

@end
