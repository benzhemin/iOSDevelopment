/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIContentUnavailableTemplateElement, SKUIContentUnavailableView, SKUILayoutCache, SKUIViewElementLayoutContext;

@interface SKUIContentUnavailableDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, SKUIDocumentViewController> {
    SKUIContentUnavailableView *_contentUnavailableView;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUIContentUnavailableTemplateElement *_templateElement;
    SKUILayoutCache *_textLayoutCache;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_contentInsets;
- (id)_layoutContext;
- (void)_reloadContentUnavailableView:(id)arg1 width:(float)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)dealloc;
- (void)documentDidUpdate:(id)arg1;
- (id)initWithTemplateElement:(id)arg1;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
