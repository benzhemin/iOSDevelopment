/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class IKDOMNode, NSMutableDictionary;

@interface IKDOMNodeData : NSObject {
    BOOL _childrenUpdated;
    NSMutableDictionary *_featuresMap;
    IKDOMNode *_ownerJSNode;
    BOOL _subtreeUpdated;
    BOOL _updated;
}

@property(getter=isChildrenUpdated) BOOL childrenUpdated;
@property(retain) NSMutableDictionary * featuresMap;
@property IKDOMNode * ownerJSNode;
@property(getter=isSubtreeUpdated) BOOL subtreeUpdated;
@property(getter=isUpdated) BOOL updated;

+ (id)jsNodeDataForNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 create:(BOOL)arg2;

- (void).cxx_destruct;
- (id)featureForName:(id)arg1;
- (id)featuresMap;
- (BOOL)isChildrenUpdated;
- (BOOL)isSubtreeUpdated;
- (BOOL)isUpdated;
- (id)ownerJSNode;
- (void)setChildrenUpdated:(BOOL)arg1;
- (void)setFeature:(id)arg1 forName:(id)arg2;
- (void)setFeaturesMap:(id)arg1;
- (void)setOwnerJSNode:(id)arg1;
- (void)setSubtreeUpdated:(BOOL)arg1;
- (void)setUpdated:(BOOL)arg1;

@end
