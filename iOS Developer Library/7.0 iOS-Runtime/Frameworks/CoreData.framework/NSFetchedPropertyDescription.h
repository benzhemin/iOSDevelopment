/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSFetchRequest, NSString;

@interface NSFetchedPropertyDescription : NSPropertyDescription {
    NSFetchRequest *_fetchRequest;
    NSString *_lazyFetchRequestEntityName;
    void *_reserved5;
    void *_reserved6;
}

@property(retain) NSFetchRequest * fetchRequest;

- (void)_createCachesAndOptimizeState;
- (unsigned int)_propertyType;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fetchRequest;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isReadOnly;
- (BOOL)isTransient;
- (void)setFetchRequest:(id)arg1;

@end
