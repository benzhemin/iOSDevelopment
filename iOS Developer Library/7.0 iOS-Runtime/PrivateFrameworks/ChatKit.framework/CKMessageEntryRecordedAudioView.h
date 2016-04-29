/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class <CKMessageEntryRecordedAudioViewDelegate>, CKAudioController, CKAudioMediaObject, CKAudioProgressView, NSString, UIImage, UIImageView, UILabel;

@interface CKMessageEntryRecordedAudioView : UIView <CKAudioControllerDelegate> {
    CKAudioController *_audioController;
    CKAudioMediaObject *_audioMediaObject;
    UIImageView *_balloonImageView;
    <CKMessageEntryRecordedAudioViewDelegate> *_delegate;
    CKAudioProgressView *_progressView;
    double _time;
    NSString *_timeFormat;
    UILabel *_timeLabel;
    UIImage *_waveformImage;
    UIImageView *_waveformImageView;
}

@property(retain) CKAudioController * audioController;
@property(retain) CKAudioMediaObject * audioMediaObject;
@property(retain) UIImageView * balloonImageView;
@property(copy,readonly) NSString * debugDescription;
@property <CKMessageEntryRecordedAudioViewDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) BOOL isPlaying;
@property(retain) CKAudioProgressView * progressView;
@property(readonly) Class superclass;
@property double time;
@property(copy) NSString * timeFormat;
@property(retain) UILabel * timeLabel;
@property(retain) UIImage * waveformImage;
@property(retain) UIImageView * waveformImageView;

- (void)audioController:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2;
- (void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4;
- (id)audioController;
- (void)audioControllerDidPause:(id)arg1;
- (void)audioControllerDidStop:(id)arg1;
- (id)audioMediaObject;
- (id)balloonImageView;
- (void)dealloc;
- (id)delegate;
- (id)initWithPlaybackButton:(BOOL)arg1;
- (BOOL)isPlaying;
- (void)layoutSubviews;
- (void)pause;
- (void)play;
- (id)progressView;
- (void)setAudioController:(id)arg1;
- (void)setAudioMediaObject:(id)arg1;
- (void)setBalloonImageView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setProgressView:(id)arg1;
- (void)setTime:(double)arg1;
- (void)setTimeFormat:(id)arg1;
- (void)setTimeLabel:(id)arg1;
- (void)setWaveformImage:(id)arg1;
- (void)setWaveformImageView:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)tapRecognized:(id)arg1;
- (double)time;
- (id)timeFormat;
- (id)timeLabel;
- (void)updateProgress;
- (void)updateTimeFormat;
- (void)updateTimeString;
- (id)waveformImage;
- (id)waveformImageView;

@end
