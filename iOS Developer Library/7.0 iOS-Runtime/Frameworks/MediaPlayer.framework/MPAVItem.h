/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class AVAsset, AVPlayerItem, AVPlayerItemAccessLog, MPAVController, MPAlternateTextTrack, MPAlternateTracks, MPMediaItem, MPQueueFeeder, NSArray, NSObject<OS_dispatch_queue>, NSString, NSURL, RURadioAdTrack, RadioArtworkCollection, RadioAudioClip, RadioStreamTrack, RadioTrack;

@interface MPAVItem : NSObject {
    unsigned int _advancedDuringPlayback : 1;
    unsigned int _handledFinishTime : 1;
    unsigned int _hasPlayedThisSession : 1;
    unsigned int _wasCountedAsSkipped : 1;
    unsigned int _watchingAttributes : 1;
    unsigned int _lyricsAvailable : 1;
    unsigned int _timeMarkersNeedLoading : 1;
    unsigned int _isStreamable : 2;
    long long _albumStoreID;
    MPAlternateTracks *_alternateTracks;
    NSArray *_artworkTimeMarkers;
    AVAsset *_asset;
    NSObject<OS_dispatch_queue> *_assetQueue;
    AVPlayerItem *_avPlayerItem;
    NSArray *_buyOffers;
    double _cachedDuration;
    double _cachedPlayableDuration;
    NSArray *_cachedSeekableTimeRanges;
    NSArray *_chapterTimeMarkers;
    NSArray *_closedCaptionTimeMarkers;
    NSString *_copyrightText;
    float _defaultPlaybackRate;
    BOOL _didAttemptToLoadAsset;
    MPQueueFeeder *_feeder;
    BOOL _hasPostedNaturalSizeChange;
    unsigned int _indexInQueueFeeder;
    BOOL _isAssetLoaded;
    BOOL _limitReadAhead;
    float _loudnessInfoVolumeNormalization;
    MPMediaItem *_mediaItem;
    MPAVController *_player;
    double _seekableTimeRangesCacheTime;
    float _soundCheckVolumeNormalization;
    long long _storeID;
    unsigned int _type;
    NSArray *_urlTimeMarkers;
}

@property(readonly) AVPlayerItemAccessLog * accessLog;
@property(readonly) RURadioAdTrack * adTrack;
@property(readonly) NSString * album;
@property(readonly) NSString * albumArtist;
@property(copy,readonly) NSString * albumBuyButtonText;
@property(readonly) int albumBuyButtonType;
@property(readonly) long long albumStoreID;
@property(readonly) unsigned int albumTrackCount;
@property(readonly) unsigned int albumTrackNumber;
@property(readonly) BOOL allowsEQ;
@property(readonly) MPAlternateTracks * alternateTracks;
@property(readonly) NSString * artist;
@property(retain) NSArray * artworkTimeMarkers;
@property(readonly) AVAsset * asset;
@property(copy,readonly) NSString * assetFlavor;
@property(readonly) RadioAudioClip * audioClip;
@property(copy,readonly) NSArray * buyOffers;
@property(readonly) BOOL canSeedGenius;
@property(retain) NSArray * chapterTimeMarkers;
@property(retain) NSArray * closedCaptionTimeMarkers;
@property(readonly) NSString * composer;
@property(copy,readonly) NSString * copyrightText;
@property(readonly) unsigned int countForQueueFeeder;
@property(readonly) double currentTimeDisplayOverride;
@property(readonly) int customAVEQPreset;
@property float defaultPlaybackRate;
@property(readonly) BOOL didAttemptToLoadAsset;
@property(readonly) unsigned int discCount;
@property(readonly) unsigned int discNumber;
@property(readonly) NSString * displayableText;
@property(readonly) BOOL displayableTextLoaded;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property(readonly) double durationFromExternalMetadata;
@property(readonly) double durationIfAvailable;
@property(readonly) BOOL durationIsValid;
@property(readonly) RadioArtworkCollection * effectiveArtworkCollection;
@property(getter=isExplicitTrack,readonly) BOOL explicitTrack;
@property MPQueueFeeder * feeder;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } forwardPlaybackEndTime;
@property(readonly) NSString * genre;
@property(readonly) BOOL hasDisplayableText;
@property BOOL hasPlayedThisSession;
@property unsigned int indexInQueueFeeder;
@property(readonly) BOOL isAd;
@property(readonly) BOOL isAlwaysLive;
@property BOOL isAssetLoaded;
@property(readonly) BOOL isCloudItem;
@property(readonly) BOOL isRadioItem;
@property(readonly) BOOL isStreamingQuality;
@property(readonly) NSString * localizedPositionInPlaylistString;
@property float loudnessInfoVolumeNormalization;
@property(readonly) NSString * lyrics;
@property(readonly) NSString * mainTitle;
@property(retain,readonly) MPMediaItem * mediaItem;
@property(readonly) struct CGSize { float x1; float x2; } naturalSize;
@property(readonly) unsigned long long persistentID;
@property(readonly) double playableDuration;
@property(readonly) double playableDurationIfAvailable;
@property double playbackCheckpointCurrentTime;
@property MPAVController * player;
@property(readonly) AVPlayerItem * playerItem;
@property(readonly) NSURL * podcastURL;
@property(readonly) struct CGSize { float x1; float x2; } presentationSize;
@property(readonly) RadioTrack * radioTrack;
@property(retain) MPAlternateTextTrack * selectedAlternateTextTrack;
@property float soundCheckVolumeNormalization;
@property(readonly) int status;
@property(readonly) long long storeID;
@property(readonly) RadioStreamTrack * streamTrack;
@property(getter=isStreamable,readonly) BOOL streamable;
@property(readonly) BOOL supportsRadioTrackActions;
@property(readonly) BOOL supportsRewindAndFastForward15Seconds;
@property(readonly) BOOL supportsSettingCurrentTime;
@property(readonly) BOOL supportsSkip;
@property(readonly) double timeOfSeekableEnd;
@property(readonly) double timeOfSeekableStart;
@property(readonly) NSArray * timedMetadataIfAvailable;
@property(readonly) unsigned int type;
@property(retain) NSArray * urlTimeMarkers;
@property(readonly) BOOL useEmbeddedChapterData;
@property BOOL userAdvancedDuringPlayback;
@property(readonly) float userRating;
@property(copy) NSString * videoID;

+ (id)URLFromPath:(id)arg1;
+ (void)applyVolumeNormalizationForQueuedItems:(id)arg1;
+ (unsigned int)defaultScaleMode;
+ (void)setDefaultScaleMode:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)MPSPWD_prioritizeDownloadSession;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_captionAppearanceSettingsChanged;
- (void)_checkAllowsBlockingDurationCall;
- (void)_clearAsset;
- (double)_durationFromExternalMetadataIfAvailable;
- (double)_durationInSeconds;
- (id)_imageChapterTrackIDsForAsset:(id)arg1;
- (void)_itemAttributeAvailableKey:(id)arg1;
- (void)_loadAssetAndPlayerItem;
- (void)_loadAssetProperties;
- (void)_loadTimeMarkersAsync;
- (void)_loadTimeMarkersBlocking;
- (double)_playableDurationForLoadedTimeRanges:(id)arg1;
- (void)_playerItemNewAccessLogEntryNotification:(id)arg1;
- (id)_plistKeyForMPMediaItemProperty:(id)arg1;
- (void)_realoadEmbeddedTimeMarkers;
- (void)_releaseAllTimeMarkers;
- (id)_seekableTimeRanges;
- (id)_timeMarkerFromMarkers:(id)arg1 forTime:(double)arg2;
- (void)_updateSoundCheckVolumeNormalizationForPlayerItem;
- (id)accessLog;
- (id)adTrack;
- (void)addDerivedStationForArtist:(BOOL)arg1 withCompletionHandler:(id)arg2;
- (id)aggregateDictionaryItemIdentifier;
- (id)album;
- (id)albumArtist;
- (id)albumBuyButtonText;
- (int)albumBuyButtonType;
- (long long)albumStoreID;
- (unsigned int)albumTrackCount;
- (unsigned int)albumTrackNumber;
- (BOOL)allowsEQ;
- (id)alternateTracks;
- (unsigned int)alternatesCountForTypes:(unsigned int)arg1;
- (id)artist;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)artworkTimeMarkerForTime:(double)arg1;
- (id)artworkTimeMarkers;
- (id)asset;
- (id)assetFlavor;
- (id)audioClip;
- (id)blockForDirectAVControllerNotificationReferencingItem:(id)arg1;
- (id)buyOffers;
- (BOOL)canSeedGenius;
- (id)chapterTimeMarkerForTime:(double)arg1;
- (id)chapterTimeMarkers;
- (id)closedCaptionTimeMarkerForTime:(double)arg1;
- (id)closedCaptionTimeMarkers;
- (id)composer;
- (id)copyrightText;
- (unsigned int)countForQueueFeeder;
- (double)currentTimeDisplayOverride;
- (int)customAVEQPreset;
- (void)dealloc;
- (float)defaultPlaybackRate;
- (BOOL)didAttemptToLoadAsset;
- (unsigned int)discCount;
- (unsigned int)discNumber;
- (id)displayableText;
- (BOOL)displayableTextLoaded;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (double)durationFromExternalMetadata;
- (double)durationIfAvailable;
- (double)durationInSeconds;
- (BOOL)durationIsValid;
- (id)effectiveArtworkCollection;
- (id)feeder;
- (void)flushNowPlayingCaches;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })forwardPlaybackEndTime;
- (id)genre;
- (BOOL)hasAlternatesForTypes:(unsigned int)arg1;
- (BOOL)hasDataForItemArtwork;
- (BOOL)hasDisplayableText;
- (BOOL)hasPlayedThisSession;
- (id)inBandAlternateTextTracks;
- (unsigned int)indexInQueueFeeder;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (id)initWithPlayerItem:(id)arg1;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)initWithURL:(id)arg1;
- (BOOL)isAd;
- (BOOL)isAlwaysLive;
- (BOOL)isAssetLoaded;
- (BOOL)isAssetURLValid;
- (BOOL)isCloudItem;
- (BOOL)isExplicitTrack;
- (BOOL)isPlaceholderForItem:(id)arg1;
- (BOOL)isRadioItem;
- (BOOL)isStreamable;
- (BOOL)isStreamingQuality;
- (BOOL)isSupportedDefaultPlaybackSpeed:(unsigned int)arg1;
- (BOOL)isValidPlayerSubstituteForItem:(id)arg1;
- (BOOL)limitReadAhead;
- (void)loadAssetAndPlayerItem;
- (id)localeForAssetTrack:(id)arg1;
- (id)localizedAttributedPositionInPlaylistStringWithRegularTextAttributes:(id)arg1 emphasizedTextAttributes:(id)arg2;
- (id)localizedPositionInPlaylistString;
- (float)loudnessInfoVolumeNormalization;
- (id)lyrics;
- (id)mainTitle;
- (id)mediaItem;
- (struct CGSize { float x1; float x2; })naturalSize;
- (void)notePlaybackFinishedByHittingEnd;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)path;
- (unsigned long long)persistentID;
- (double)playableDuration;
- (double)playableDurationIfAvailable;
- (double)playbackCheckpointCurrentTime;
- (float)playbackRateForLevel:(unsigned int)arg1 direction:(int)arg2 paused:(BOOL)arg3;
- (id)player;
- (id)playerItem;
- (id)podcastURL;
- (struct CGSize { float x1; float x2; })presentationSize;
- (id)radioTrack;
- (void)reevaluateType;
- (void)replaceOutOfBandAlternateTextTracksWithArray:(id)arg1;
- (void)replacePlayerItemWithPlayerItem:(id)arg1;
- (void)resetBookkeeping;
- (float)scanIntervalForLevel:(unsigned int)arg1 paused:(BOOL)arg2;
- (id)selectedAlternateTextTrack;
- (void)setAlternateAudioTrackID:(int)arg1;
- (void)setArtworkTimeMarkers:(id)arg1;
- (void)setChapterTimeMarkers:(id)arg1;
- (void)setClosedCaptionTimeMarkers:(id)arg1;
- (void)setDefaultPlaybackRate:(float)arg1;
- (void)setFeeder:(id)arg1;
- (void)setForwardPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setHasPlayedThisSession:(BOOL)arg1;
- (void)setIndexInQueueFeeder:(unsigned int)arg1;
- (void)setIsAssetLoaded:(BOOL)arg1;
- (void)setLimitReadAhead:(BOOL)arg1;
- (void)setLoudnessInfoVolumeNormalization:(float)arg1;
- (void)setOverrideDuration:(double)arg1;
- (void)setPlaybackCheckpointCurrentTime:(double)arg1;
- (void)setPlaybackFinishedTime:(double)arg1;
- (void)setPlaybackStoppedTime:(double)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerItem:(id)arg1;
- (void)setRating:(float)arg1;
- (void)setSelectedAlternateTextTrack:(id)arg1;
- (void)setSoundCheckVolumeNormalization:(float)arg1;
- (void)setSubtitleTrackID:(int)arg1;
- (void)setUrlTimeMarkers:(id)arg1;
- (void)setUserAdvancedDuringPlayback:(BOOL)arg1;
- (void)setUserSkippedPlayback:(BOOL)arg1;
- (void)setVideoID:(id)arg1;
- (void)setupEQPresetWithDefaultPreset:(int)arg1;
- (void)setupPlaybackInfo;
- (float)soundCheckVolumeNormalization;
- (int)status;
- (long long)storeID;
- (id)streamTrack;
- (int)subtitleTrackID;
- (BOOL)supportsRadioTrackActions;
- (BOOL)supportsRewindAndFastForward15Seconds;
- (BOOL)supportsSettingCurrentTime;
- (BOOL)supportsSkip;
- (double)timeOfSeekableEnd;
- (double)timeOfSeekableStart;
- (id)timedMetadataIfAvailable;
- (id)titlesForTime:(double)arg1;
- (unsigned int)type;
- (id)url;
- (id)urlTimeMarkerForTime:(double)arg1;
- (id)urlTimeMarkers;
- (BOOL)useEmbeddedChapterData;
- (BOOL)userAdvancedDuringPlayback;
- (float)userRating;
- (BOOL)userSkippedPlayback;
- (id)videoID;

@end
