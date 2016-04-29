/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVWeakReference;

@interface AVTrackReaderInspector : AVAssetTrackInspector {
    struct OpaqueFigFormatReader { } *_formatReader;
    unsigned long _mediaType;
    int _trackID;
    struct OpaqueFigTrackReader { } *_trackReader;
    AVWeakReference *_weakReferenceToAsset;
}

- (unsigned long)_figMediaType;
- (struct OpaqueFigTrackReader { }*)_figTrackReader;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long)arg3;
- (void*)_valueAsCFTypeForProperty:(struct __CFString { }*)arg1;
- (int)alternateGroupID;
- (id)asset;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })dimensions;
- (float)estimatedDataRate;
- (id)extendedLanguageTag;
- (void)finalize;
- (id)formatDescriptions;
- (unsigned int)hash;
- (BOOL)isEnabled;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExcludedFromAutoselectionInTrackGroup;
- (BOOL)isSelfContained;
- (id)languageCode;
- (int)layer;
- (id)loudnessInfo;
- (id)mediaType;
- (id)metadataForFormat:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minSampleDuration;
- (struct CGSize { float x1; float x2; })naturalSize;
- (int)naturalTimeScale;
- (float)nominalFrameRate;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })preferredTransform;
- (float)preferredVolume;
- (BOOL)requiresFrameReordering;
- (id)segmentForTrackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)segments;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (long long)totalSampleDataLength;
- (int)trackID;

@end
