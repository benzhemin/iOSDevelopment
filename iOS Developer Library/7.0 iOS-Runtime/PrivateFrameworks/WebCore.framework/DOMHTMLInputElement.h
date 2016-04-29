/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class DOMFileList, DOMHTMLFormElement, NSString, NSURL;

@interface DOMHTMLInputElement : DOMHTMLElement {
}

@property(copy,readonly) NSURL * absoluteImageURL;
@property(copy) NSString * accept;
@property(copy) NSString * accessKey;
@property(copy) NSString * align;
@property(copy) NSString * alt;
@property(copy,readonly) NSString * altDisplayString;
@property BOOL autofocus;
@property BOOL checked;
@property BOOL defaultChecked;
@property(copy) NSString * defaultValue;
@property BOOL disabled;
@property(retain) DOMFileList * files;
@property(readonly) DOMHTMLFormElement * form;
@property BOOL indeterminate;
@property int maxLength;
@property BOOL multiple;
@property(copy) NSString * name;
@property BOOL readOnly;
@property int selectionEnd;
@property int selectionStart;
@property(copy) NSString * size;
@property(copy) NSString * src;
@property(copy) NSString * type;
@property(copy) NSString * useMap;
@property(copy) NSString * value;
@property(readonly) BOOL willValidate;

- (void)_accessoryClear;
- (int)_autocapitalizeType;
- (BOOL)_isAutofilled;
- (BOOL)_isEdited;
- (BOOL)_isTextField;
- (BOOL)_requiresAccessoryView;
- (BOOL)_requiresInputView;
- (void)_setAutofilled:(BOOL)arg1;
- (void)_setAutofilled:(BOOL)arg1;
- (void)_startAssistingDocumentView:(id)arg1;
- (void)_stopAssistingDocumentView:(id)arg1;
- (BOOL)_supportsAccessoryClear;
- (BOOL)_supportsAutoFill;
- (id)_textFormElement;
- (id)absoluteImageURL;
- (id)accept;
- (id)accessKey;
- (id)align;
- (id)alt;
- (id)altDisplayString;
- (id)autocapitalize;
- (id)autocomplete;
- (BOOL)autocorrect;
- (BOOL)autofocus;
- (BOOL)checkValidity;
- (BOOL)checked;
- (void)click;
- (id)createPeripheral;
- (BOOL)defaultChecked;
- (id)defaultValue;
- (id)dirName;
- (BOOL)disabled;
- (id)endPosition;
- (id)files;
- (id)form;
- (id)formAction;
- (id)formEnctype;
- (id)formMethod;
- (BOOL)formNoValidate;
- (id)formTarget;
- (unsigned int)height;
- (BOOL)incremental;
- (BOOL)indeterminate;
- (BOOL)isAssistedDateType;
- (BOOL)isEditing;
- (BOOL)isLikelyToBeginPageLoad;
- (BOOL)isSecure;
- (BOOL)isTextControl;
- (int)keyboardType;
- (id)labels;
- (id)max;
- (int)maxLength;
- (id)min;
- (BOOL)multiple;
- (id)name;
- (BOOL)nodeCanBecomeFirstResponder;
- (id)pattern;
- (id)placeholder;
- (BOOL)readOnly;
- (BOOL)required;
- (void)select;
- (id)selectionDirection;
- (int)selectionEnd;
- (int)selectionStart;
- (void)setAccept:(id)arg1;
- (void)setAccessKey:(id)arg1;
- (void)setAlign:(id)arg1;
- (void)setAlt:(id)arg1;
- (void)setAutocapitalize:(id)arg1;
- (void)setAutocomplete:(id)arg1;
- (void)setAutocorrect:(BOOL)arg1;
- (void)setAutofocus:(BOOL)arg1;
- (void)setChecked:(BOOL)arg1;
- (void)setCustomValidity:(id)arg1;
- (void)setDefaultChecked:(BOOL)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setDirName:(id)arg1;
- (void)setDisabled:(BOOL)arg1;
- (void)setFiles:(id)arg1;
- (void)setFormAction:(id)arg1;
- (void)setFormEnctype:(id)arg1;
- (void)setFormMethod:(id)arg1;
- (void)setFormNoValidate:(BOOL)arg1;
- (void)setFormTarget:(id)arg1;
- (void)setHeight:(unsigned int)arg1;
- (void)setIncremental:(BOOL)arg1;
- (void)setIndeterminate:(BOOL)arg1;
- (void)setMax:(id)arg1;
- (void)setMaxLength:(int)arg1;
- (void)setMin:(id)arg1;
- (void)setMultiple:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setPattern:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setRangeText:(id)arg1 start:(unsigned int)arg2 end:(unsigned int)arg3 selectionMode:(id)arg4;
- (void)setRangeText:(id)arg1;
- (void)setReadOnly:(BOOL)arg1;
- (void)setRequired:(BOOL)arg1;
- (void)setSelectionDirection:(id)arg1;
- (void)setSelectionEnd:(int)arg1;
- (void)setSelectionRange:(int)arg1 end:(int)arg2;
- (void)setSelectionStart:(int)arg1;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setSize:(id)arg1;
- (void)setSrc:(id)arg1;
- (void)setStep:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUseMap:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setValueAsDate:(double)arg1;
- (void)setValueAsNumber:(double)arg1;
- (void)setValueAsNumberWithChangeEvent:(double)arg1;
- (void)setValueForUser:(id)arg1;
- (void)setValueWithChangeEvent:(id)arg1;
- (void)setWidth:(unsigned int)arg1;
- (id)size;
- (id)src;
- (id)startPosition;
- (id)step;
- (void)stepDown:(int)arg1;
- (void)stepUp:(int)arg1;
- (int)structuralComplexityContribution;
- (id)text;
- (id)textInputTraits;
- (id)type;
- (id)useMap;
- (id)validationMessage;
- (id)validity;
- (id)value;
- (double)valueAsDate;
- (double)valueAsNumber;
- (unsigned int)width;
- (BOOL)willValidate;

@end
