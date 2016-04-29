/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class DOMNode, NSString;

@interface WBUFormAutoFillNode : NSObject <WBSFormAutoFillNode> {
    DOMNode *_domNode;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) DOMNode * domNode;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)autoFillNodeWithDOMNode:(id)arg1;

- (void).cxx_destruct;
- (id)domNode;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })elementBounds;
- (id)htmlTableCellElementCellAbove;
- (id)initWithDOMNode:(id)arg1;
- (id)initWithJSWrapper:(struct OpaqueJSValue { }*)arg1 inContext:(struct OpaqueJSContext { }*)arg2;
- (BOOL)isHTMLInputElementAutofilled;
- (BOOL)isHTMLInputElementUserEdited;
- (BOOL)isHTMLTextAreaElementUserEdited;
- (void)setHTMLInputElementAutofilled:(BOOL)arg1;

@end
