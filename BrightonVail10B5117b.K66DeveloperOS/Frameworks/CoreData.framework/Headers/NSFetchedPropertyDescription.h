/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPropertyDescription.h"
#import "CoreData-Structs.h"

@class NSFetchRequest, NSString;

@interface NSFetchedPropertyDescription : NSPropertyDescription {
	void *_reserved5;	// 48 = 0x30
	void *_reserved6;	// 52 = 0x34
	NSFetchRequest *_fetchRequest;	// 56 = 0x38
	NSString *_lazyFetchRequestEntityName;	// 60 = 0x3c
}
@property(retain) NSFetchRequest *fetchRequest;	// G=0x30f39511; S=0x30f395d5; converted property
- (id)initWithCoder:(id)coder;	// 0x30f392a9
- (void)_createCachesAndOptimizeState;	// 0x30f3973d
- (unsigned)_propertyType;	// 0x30f39739
- (void)_writeIntoData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 entitiesSlots:(id)slots fetchRequests:(id)requests;	// 0x30f397d9
- (id)copyWithZone:(NSZone *)zone;	// 0x30f39369
- (void)dealloc;	// 0x30f39175
- (id)description;	// 0x30f394a1
- (void)encodeWithCoder:(id)coder;	// 0x30f391ed
// converted property getter: - (id)fetchRequest;	// 0x30f39511
- (BOOL)isEqual:(id)equal;	// 0x30f39431
- (BOOL)isReadOnly;	// 0x30f39735
- (BOOL)isTransient;	// 0x30f39731
// converted property setter: - (void)setFetchRequest:(id)request;	// 0x30f395d5
@end

