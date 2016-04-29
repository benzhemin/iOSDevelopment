/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSString, PUSnappingController, PUTiltWheel, PUTiltWheelTriangleView;

@interface PUTiltWheelControl : UIControl <PUTiltWheelDataSource> {
    struct CGPoint { 
        float x; 
        float y; 
    BOOL __needsDataReload;
    } __panPreviousPoint;
    PUSnappingController *__snappingController;
    PUTiltWheel *__tiltWheel;
    PUTiltWheelTriangleView *__triangleView;
    float _maxTiltAngle;
    float _minTiltAngle;
    float _tiltAngle;
    int _wheelOrientation;
}

@property(setter=_setNeedsDataReload:) BOOL _needsDataReload;
@property(setter=_setPanPreviousPoint:) struct CGPoint { float x1; float x2; } _panPreviousPoint;
@property(setter=_setSnappingController:,retain) PUSnappingController * _snappingController;
@property(setter=_setTiltWheel:,retain) PUTiltWheel * _tiltWheel;
@property(setter=_setTriangleView:,retain) PUTiltWheelTriangleView * _triangleView;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property float maxTiltAngle;
@property float minTiltAngle;
@property(readonly) Class superclass;
@property float tiltAngle;
@property int wheelOrientation;

- (void).cxx_destruct;
- (float)_angleBetweenPoint:(struct CGPoint { float x1; float x2; })arg1 andPoint:(struct CGPoint { float x1; float x2; })arg2 measuredFrom:(struct CGPoint { float x1; float x2; })arg3;
- (float)_circumferenceVelocityInPan:(id)arg1;
- (BOOL)_needsDataReload;
- (struct CGPoint { float x1; float x2; })_panPreviousPoint;
- (void)_setNeedsDataReload:(BOOL)arg1;
- (void)_setPanPreviousPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setSnappingController:(id)arg1;
- (void)_setTiltAngleFromUserInteraction:(float)arg1;
- (void)_setTiltWheel:(id)arg1;
- (void)_setTriangleView:(id)arg1;
- (id)_snappingController;
- (float)_tiltAngleForDraggedRotation:(float)arg1;
- (id)_tiltWheel;
- (float)_tiltWheelSize;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_transformForTiltAngle:(float)arg1;
- (id)_triangleView;
- (void)_updateTiltWheelConstraintsIfNeeded;
- (void)_updateTiltWheelTransform;
- (void)_updateTriangleConstraintsIfNeeded;
- (void)handlePanGesture:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (float)maxTiltAngle;
- (float)minTiltAngle;
- (void)setMaxTiltAngle:(float)arg1;
- (void)setMinTiltAngle:(float)arg1;
- (void)setTiltAngle:(float)arg1 animated:(BOOL)arg2;
- (void)setTiltAngle:(float)arg1;
- (void)setWheelOrientation:(int)arg1;
- (float)tiltAngle;
- (unsigned int)tiltWheelMarkedIndicatorStep:(id)arg1;
- (int)tiltWheelMaximumIndicatedDegree:(id)arg1;
- (int)tiltWheelMinimumIndicatedDegree:(id)arg1;
- (unsigned int)tiltWheelNumericIndicatorStep:(id)arg1;
- (int)tiltWheelOrientation:(id)arg1;
- (void)updateConstraints;
- (int)wheelOrientation;

@end
