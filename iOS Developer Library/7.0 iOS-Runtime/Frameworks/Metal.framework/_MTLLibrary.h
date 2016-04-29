/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <MTLDevice>, NSArray, NSMutableDictionary, NSString;

@interface _MTLLibrary : NSObject <MTLLibrary> {
    <MTLDevice> *_device;
    NSMutableDictionary *_functionDictionary;
    NSArray *_functionNames;
    NSString *_label;
    struct MTLLibraryData { int (**x1)(); int x2; id x3; } *_libraryData;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) <MTLDevice> * device;
@property NSMutableDictionary * functionDictionary;
@property(readonly) NSArray * functionNames;
@property(readonly) unsigned int hash;
@property(copy) NSString * label;
@property(readonly) struct MTLLibraryData { int (**x1)(); int x2; id x3; }* libraryData;
@property(readonly) Class superclass;

+ (struct { unsigned int x1; unsigned int x2; })libraryCacheStats;
+ (struct { unsigned int x1; unsigned int x2; })pipelineCacheStats;
+ (void)unloadShaderCaches;

- (struct MTLLibraryData { int (**x1)(); int x2; id x3; }*)libraryData;
- (void)dealloc;
- (id)description;
- (id)device;
- (id)functionDictionary;
- (id)functionNames;
- (id)initWithData:(id)arg1 device:(id)arg2 error:(id*)arg3;
- (id)initWithDefaultBundle:(id)arg1;
- (id)initWithFile:(id)arg1 device:(id)arg2 error:(id*)arg3;
- (id)initWithSharedLibrary:(id)arg1 device:(id)arg2;
- (id)initWithSource:(id)arg1 options:(id)arg2 device:(id)arg3 completionHandler:(id)arg4;
- (id)initWithSource:(id)arg1 options:(id)arg2 device:(id)arg3 error:(id*)arg4;
- (id)label;
- (id)newFunctionWithName:(id)arg1;
- (void)setFunctionDictionary:(id)arg1;
- (void)setLabel:(id)arg1;

@end
