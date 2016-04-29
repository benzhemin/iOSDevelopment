/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class MPMediaItemCollection;

@interface PLPhotosDefaults : NSObject {
    MPMediaItemCollection *_musicCollection;
    int _secondsPerSlide;
    BOOL _shouldPlayMusic;
    BOOL _shouldRepeat;
    BOOL _shouldShuffle;
    BOOL _summarizeMomentSections;
    int _transition;
}

+ (int)randomTransition;
+ (id)sharedInstance;

- (void)_reloadPhotoDefaultValuesAndNotify:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (id)musicCollection;
- (void)reloadPhotoDefaultValues;
- (int)secondsPerSlide;
- (void)setMusicCollection:(id)arg1;
- (void)setShouldPlayMusic:(BOOL)arg1;
- (void)setTransition:(int)arg1;
- (BOOL)shouldPlayMusic;
- (BOOL)shouldRepeat;
- (BOOL)shouldShuffle;
- (BOOL)summarizeMomentSections;
- (int)transition;
- (int)transitionForAnimationMovingForward:(BOOL)arg1;

@end
