/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class IMTranscriptChatItem, NSAttributedString, NSString, UIImage;

@interface CKChatItem : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    IMTranscriptChatItem *_imChatItem;
    float _maxWidth;
    } _size;
    BOOL _sizeLoaded;
    } _textAlignmentInsets;
    NSAttributedString *_transcriptDrawerText;
    NSAttributedString *_transcriptText;
}

@property(retain) IMTranscriptChatItem * IMChatItem;
@property(readonly) unsigned char attachmentContiguousType;
@property(readonly) BOOL canCopy;
@property(readonly) BOOL canDelete;
@property(readonly) BOOL canExport;
@property(readonly) BOOL canForward;
@property(readonly) BOOL canSendAsTextMessage;
@property(readonly) Class cellClass;
@property(copy,readonly) NSString * cellIdentifier;
@property(retain,readonly) UIImage * contactImage;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInsets;
@property(readonly) unsigned char contiguousType;
@property(readonly) BOOL displayDuringSend;
@property(readonly) BOOL hasTail;
@property(readonly) BOOL isEditable;
@property float maxWidth;
@property(readonly) struct CGSize { float x1; float x2; } size;
@property(getter=isSizeLoaded) BOOL sizeLoaded;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } textAlignmentInsets;
@property(copy) NSAttributedString * transcriptDrawerText;
@property(readonly) BOOL transcriptOrientation;
@property(copy) NSAttributedString * transcriptText;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } transcriptTextAlignmentInsets;
@property(readonly) BOOL wantsDrawerLayout;

+ (id)chatItemWithIMChatItem:(id)arg1 rightBalloonMaxWidth:(float)arg2 leftBalloonMaxWidth:(float)arg3 otherMaxWidth:(float)arg4;

- (id)IMChatItem;
- (unsigned char)attachmentContiguousType;
- (BOOL)canCopy;
- (BOOL)canDelete;
- (BOOL)canExport;
- (BOOL)canForward;
- (BOOL)canSave;
- (BOOL)canSendAsTextMessage;
- (Class)cellClass;
- (id)cellIdentifier;
- (id)contactImage;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (unsigned char)contiguousType;
- (void)dealloc;
- (id)description;
- (BOOL)displayDuringSend;
- (BOOL)hasTail;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(float)arg2;
- (BOOL)isEditable;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSizeLoaded;
- (struct CGSize { float x1; float x2; })loadSizeThatFits:(struct CGSize { float x1; float x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg2;
- (id)loadTranscriptDrawerText;
- (id)loadTranscriptText;
- (float)maxWidth;
- (void)setIMChatItem:(id)arg1;
- (void)setMaxWidth:(float)arg1;
- (void)setSizeLoaded:(BOOL)arg1;
- (void)setTranscriptDrawerText:(id)arg1;
- (void)setTranscriptText:(id)arg1;
- (struct CGSize { float x1; float x2; })size;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })textAlignmentInsets;
- (id)transcriptDrawerText;
- (BOOL)transcriptOrientation;
- (id)transcriptText;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })transcriptTextAlignmentInsets;
- (void)unloadSize;
- (void)unloadTranscriptText;
- (BOOL)wantsDrawerLayout;

@end
