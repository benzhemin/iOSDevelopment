/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventKeyboardDescriptor : BKSHIDEventDescriptor {
    unsigned int _page;
    unsigned int _usage;
}

@property(readonly) unsigned int page;
@property(readonly) unsigned int usage;

+ (id)descriptorWithPage:(unsigned int)arg1 usage:(unsigned int)arg2;
+ (BOOL)supportsSecureCoding;

- (id)_initWithPage:(unsigned int)arg1 usage:(unsigned int)arg2 eventType:(unsigned int)arg3;
- (BOOL)describes:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)page;
- (unsigned int)usage;

@end
