/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TPPageLayoutInfoProvider>, NSObject<TSDContainerInfo>, NSString, TPBodyInfo, TPDocumentRoot, TSDInfoGeometry, TSPObject<TSDOwningAttachment>;

@interface TPPageInfo : NSObject <TSDContainerInfo> {
    TPBodyInfo *_bodyInfo;
    TPDocumentRoot *_documentRoot;
    <TPPageLayoutInfoProvider> *_layoutInfoProvider;
    unsigned int _pageIndex;
}

@property(getter=isAnchoredToText,readonly) BOOL anchoredToText;
@property(getter=isAttachedToBodyText,readonly) BOOL attachedToBodyText;
@property(retain,readonly) TPBodyInfo * bodyInfo;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) TPDocumentRoot * documentRoot;
@property(getter=isFloatingAboveText,readonly) BOOL floatingAboveText;
@property(copy) TSDInfoGeometry * geometry;
@property(readonly) unsigned int hash;
@property(getter=isInlineWithText,readonly) BOOL inlineWithText;
@property(readonly) <TPPageLayoutInfoProvider> * layoutInfoProvider;
@property BOOL matchesObjectPlaceholderGeometry;
@property TSPObject<TSDOwningAttachment> * owningAttachment;
@property(readonly) TSPObject<TSDOwningAttachment> * owningAttachmentNoRecurse;
@property(readonly) unsigned int pageIndex;
@property NSObject<TSDContainerInfo> * parentInfo;
@property(readonly) Class superclass;

- (id)bodyInfo;
- (id)childInfos;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)documentRoot;
- (id)geometry;
- (id)initWithPageIndex:(unsigned int)arg1 documentRoot:(id)arg2 layoutInfoProvider:(id)arg3;
- (BOOL)isAnchoredToText;
- (BOOL)isAttachedToBodyText;
- (BOOL)isFloatingAboveText;
- (BOOL)isInlineWithText;
- (BOOL)isThemeContent;
- (Class)layoutClass;
- (id)layoutInfoProvider;
- (id)owningAttachment;
- (id)owningAttachmentNoRecurse;
- (unsigned int)pageIndex;
- (id)parentInfo;
- (Class)repClass;
- (void)setGeometry:(id)arg1;
- (void)setOwningAttachment:(id)arg1;
- (void)setParentInfo:(id)arg1;

@end
