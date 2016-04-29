/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSDictionary;

@interface PUPhotoEditImageValues : NSObject {
    BOOL _complete;
    NSDictionary *_smartBlackAndWhiteStatistics;
    float _smartColorAutoSuggestion;
    NSDictionary *_smartColorStatistics;
    float _smartToneAutoSuggestion;
    NSDictionary *_smartToneStatistics;
}

@property(getter=isComplete) BOOL complete;
@property(copy) NSDictionary * smartBlackAndWhiteStatistics;
@property float smartColorAutoSuggestion;
@property(copy) NSDictionary * smartColorStatistics;
@property float smartToneAutoSuggestion;
@property(copy) NSDictionary * smartToneStatistics;

- (void).cxx_destruct;
- (BOOL)isComplete;
- (void)setComplete:(BOOL)arg1;
- (void)setSmartBlackAndWhiteStatistics:(id)arg1;
- (void)setSmartColorAutoSuggestion:(float)arg1;
- (void)setSmartColorStatistics:(id)arg1;
- (void)setSmartToneAutoSuggestion:(float)arg1;
- (void)setSmartToneStatistics:(id)arg1;
- (id)smartBlackAndWhiteStatistics;
- (float)smartColorAutoSuggestion;
- (id)smartColorStatistics;
- (float)smartToneAutoSuggestion;
- (id)smartToneStatistics;

@end
