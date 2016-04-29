/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKListNode;

@interface GKListNode : NSObject {
    GKListNode *_nextNode;
    GKListNode *_prevNode;
    id _value;
}

@property GKListNode * nextNode;
@property GKListNode * prevNode;
@property(retain) id value;

- (void)dealloc;
- (id)description;
- (id)initWithValue:(id)arg1;
- (id)nextNode;
- (id)prevNode;
- (void)setNextNode:(id)arg1;
- (void)setPrevNode:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
