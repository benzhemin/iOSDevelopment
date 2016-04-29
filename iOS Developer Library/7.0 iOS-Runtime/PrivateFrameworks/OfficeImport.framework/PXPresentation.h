/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PXPresentation : NSObject {
}

+ (id)readFromPackage:(id)arg1 fileName:(id)arg2 reader:(id)arg3 cancel:(id)arg4 isThumbnail:(BOOL)arg5 delegate:(id)arg6;
+ (void)readPresentationProperties:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (struct CGSize { float x1; float x2; })readSizeFromChildOfElement:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 childName:(const char *)arg2 state:(id)arg3;
+ (void)readSlideIndicesWithPresentationPart:(id)arg1 presentationState:(id)arg2;

@end
