/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@class NSDate, NSManagedObject, NSNumber, TDColorName, TDThemeLook;

@interface TDColorDefinition : NSManagedObject <TDElementAttributes> {
}

@property(retain) NSManagedObject * colorStatus;
@property(retain) NSDate * dateOfLastChange;
@property(retain) TDThemeLook * look;
@property(retain) TDColorName * name;
@property(retain) NSNumber * physicalColor;

- (id)colorAsString;
- (void)copyAttributesInto:(id)arg1;
- (id)copyDataFromAttributes;
- (id)dataFromAttributes;
- (void)setAttributesFromCopyData:(id)arg1;
- (void)setAttributesFromData:(id)arg1;

@end
