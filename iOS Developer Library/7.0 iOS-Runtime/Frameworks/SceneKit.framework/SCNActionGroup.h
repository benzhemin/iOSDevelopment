/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray;

@interface SCNActionGroup : SCNAction {
    NSArray *_actions;
    struct SCNCActionGroup { int (**x1)(); float x2; id x3; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x4; id x5; boolx6; double x7; double x8; float x9; float x10; double x11; boolx12; boolx13; id x14; void*x15; struct __CFString {} *x16; int x17; float x18; float x19; float x20; float x21; struct list<SCNCAction *, std::__1::allocator<SCNCAction *> > { struct __list_node_base<SCNCAction *, void *> { struct __list_node<SCNCAction *, void *> {} *x_1_2_1; struct __list_node<SCNCAction *, void *> {} *x_1_2_2; } x_22_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SCNCAction *, void *> > > { unsigned long x_2_2_1; } x_22_1_2; } x22; } *_mycaction;
}

+ (id)groupWithActions:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)finished;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isCustom;
- (id)reversedAction;

@end
