/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class CLLocation, MKMapCamera, MKMapView, NSString;

@interface MKPlaceHeaderBackgroundView_Snapshot : MKPlaceHeaderBackgroundView <MKMapViewDelegate> {
    CLLocation *_location;
    MKMapView *_mapView;
    MKMapCamera *_orbitCamera;
    BOOL _orbiting;
    unsigned int _pinColor;
    BOOL _showsPin;
    BOOL _useSatellite;
    float _zoomLevel;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) CLLocation * location;
@property(retain) MKMapCamera * orbitCamera;
@property BOOL orbiting;
@property unsigned int pinColor;
@property BOOL showsPin;
@property(readonly) Class superclass;
@property BOOL useSatellite;
@property float zoomLevel;

- (void).cxx_destruct;
- (void)_orbitNextThird;
- (void)beginOrbit;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 mapItem:(id)arg2;
- (id)location;
- (void)mapFinishedLoading:(BOOL)arg1;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapViewDidFinishLoadingMap:(id)arg1;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2;
- (id)orbitCamera;
- (BOOL)orbiting;
- (void)pause;
- (void)pauseOrbit;
- (unsigned int)pinColor;
- (void)prepareForPresentation;
- (void)present;
- (void)requestSnapshot;
- (void)reset;
- (void)resume;
- (void)setBackgroundType:(int)arg1;
- (void)setLocation:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setOrbitCamera:(id)arg1;
- (void)setOrbiting:(BOOL)arg1;
- (void)setPinColor:(unsigned int)arg1;
- (void)setShowsPin:(BOOL)arg1;
- (void)setUseSatellite:(BOOL)arg1;
- (void)setZoomLevel:(float)arg1;
- (BOOL)showsPin;
- (BOOL)useSatellite;
- (float)zoomLevel;

@end
