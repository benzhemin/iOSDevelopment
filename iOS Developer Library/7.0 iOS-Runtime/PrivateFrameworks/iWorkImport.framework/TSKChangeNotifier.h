/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKChangeNotifier : NSObject {
    struct __CFDictionary { } *mChangeSourceObservers;
    struct __CFDictionary { } *mChangeSourceOfClassObservers;
}

- (void)addObserver:(id)arg1 forChangeSource:(id)arg2;
- (void)addObserver:(id)arg1 forChangeSourceOfClass:(Class)arg2;
- (void)asyncProcessChanges:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)p_addObserver:(id)arg1 forChangeSource:(id)arg2 isClass:(BOOL)arg3;
- (id)p_findCountedObserverForObserver:(id)arg1 inArray:(id)arg2;
- (void)p_processChanges:(id)arg1 asyncCallback:(BOOL)arg2;
- (void)p_removeObserver:(id)arg1 forChangeSource:(id)arg2 isClass:(BOOL)arg3;
- (void)removeObserver:(id)arg1 forChangeSource:(id)arg2;
- (void)removeObserver:(id)arg1 forChangeSourceOfClass:(Class)arg2;
- (void)syncProcessChanges:(id)arg1;

@end
