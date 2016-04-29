/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSOperationQueue;

@interface CMAltimeterInternal : NSObject {
    struct Sample { 
        double timestamp; 
        struct { 
            float pressure; 
            float temperature; 
        } pressureData; 
    struct deque<float, std::__1::allocator<float> > { 
        struct __split_buffer<float *, std::__1::allocator<float *> > { 
            float **__first_; 
            float **__begin_; 
            float **__end_; 
            struct __compressed_pair<float **, std::__1::allocator<float *> > { 
                float **__first_; 
            } __end_cap_; 
        } __map_; 
        unsigned int __start_; 
        struct __compressed_pair<unsigned long, std::__1::allocator<float> > { 
            unsigned long __first_; 
        } __size_; 
    boolfBaselineReceived;
    float fBarometricBaseAltitude;
    } fBaseAltimeterSample;
    struct Dispatcher { int (**x1)(); id x2; } *fFilteredPressureDispatcher;
    } fPressureSamples;
    id fRelativeAltimeterHandler;
    NSOperationQueue *fRelativeAltimeterQueue;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
