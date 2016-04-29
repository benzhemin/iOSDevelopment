/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class <ICDeviceBrowserDelegate>, NSArray;

@interface ICDeviceBrowser : NSObject {
    id _privateData;
}

@property(getter=isBrowsing,readonly) BOOL browsing;
@property <ICDeviceBrowserDelegate> * delegate;
@property(readonly) NSArray * devices;

- (void)dealloc;
- (id)delegate;
- (id)devices;
- (void)finalize;
- (id)init;
- (id)internalDevices;
- (BOOL)isBrowsing;
- (void)setDelegate:(id)arg1;
- (int)start;
- (void)stop;

@end
