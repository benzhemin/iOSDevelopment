/* Generated by RuntimeBrowser
   Image: /usr/lib/libmecabra.dylib
 */

@class NSMutableArray;

@interface MecabraDatabaseCacheIdentifierController : NSObject {
    unsigned int _counter;
    NSMutableArray *_recycledIdentifiers;
}

@property unsigned int counter;
@property(retain) NSMutableArray * recycledIdentifiers;

- (unsigned int)counter;
- (void)dealloc;
- (id)init;
- (unsigned int)newIdentifier;
- (void)recycleIdentifier:(unsigned int)arg1;
- (id)recycledIdentifiers;
- (void)reset;
- (void)setCounter:(unsigned int)arg1;
- (void)setRecycledIdentifiers:(id)arg1;

@end
