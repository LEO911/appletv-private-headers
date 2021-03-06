/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSPropertyDescription.h"

@class NSFetchRequest, NSString;

@interface NSFetchedPropertyDescription : NSPropertyDescription {
@private
	void *_reserved5;	// 48 = 0x30
	void *_reserved6;	// 52 = 0x34
	NSFetchRequest *_fetchRequest;	// 56 = 0x38
	NSString *_lazyFetchRequestEntityName;	// 60 = 0x3c
}
@property(retain) NSFetchRequest *fetchRequest;	// G=0x3311c9e1; S=0x3311caa9; converted property
- (id)initWithCoder:(id)coder;	// 0x3311ce91
- (void)_createCachesAndOptimizeState;	// 0x3311cc89
- (unsigned)_propertyType;	// 0x3311c9dd
- (void)_writeIntoData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 entitiesSlots:(const id)slots fetchRequests:(id)requests;	// 0x3311d015
- (id)copyWithZone:(NSZone *)zone;	// 0x3311cdd1
- (void)dealloc;	// 0x3311cc11
- (id)description;	// 0x3311cce1
- (void)encodeWithCoder:(id)coder;	// 0x3311cf55
// converted property getter: - (id)fetchRequest;	// 0x3311c9e1
- (BOOL)isEqual:(id)equal;	// 0x3311cd59
- (BOOL)isReadOnly;	// 0x3311c9d9
- (BOOL)isTransient;	// 0x3311c9d5
// converted property setter: - (void)setFetchRequest:(id)request;	// 0x3311caa9
@end

