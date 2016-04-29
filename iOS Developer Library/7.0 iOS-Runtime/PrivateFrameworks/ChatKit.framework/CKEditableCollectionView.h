/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKEditableCollectionView : UICollectionView {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    BOOL _editing;
    } _marginInsets;
}

@property(getter=isEditing) BOOL editing;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } marginInsets;

- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2;
- (BOOL)isEditing;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })marginInsets;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEditing:(BOOL)arg1;
- (void)setMarginInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;

@end
