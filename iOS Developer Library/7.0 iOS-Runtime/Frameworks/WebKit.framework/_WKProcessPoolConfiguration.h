/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@class NSArray, NSURL;

@interface _WKProcessPoolConfiguration : NSObject <NSCopying> {
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    struct RetainPtr<NSArray> { 
        void *m_ptr; 
    } _cachePartitionedURLSchemes;
    } _injectedBundleURL;
    unsigned int _maximumProcessCount;
}

@property(copy) NSArray * cachePartitionedURLSchemes;
@property(copy) NSURL * injectedBundleURL;
@property unsigned int maximumProcessCount;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)cachePartitionedURLSchemes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)injectedBundleURL;
- (unsigned int)maximumProcessCount;
- (void)setCachePartitionedURLSchemes:(id)arg1;
- (void)setInjectedBundleURL:(id)arg1;
- (void)setMaximumProcessCount:(unsigned int)arg1;

@end
