/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import </libobjc.A.h>


@interface EKObjectID : NSObject <NSCopying, NSCoding> {
	BOOL _temporary;	// 4 = 0x4
	int _entityType;	// 8 = 0x8
	int _rowID;	// 12 = 0xc
}
@property(readonly, assign) int entityType;	// G=0x2daa0c0d; converted property
@property(readonly, assign) int rowID;	// G=0x2da91d11; converted property
@property(readonly, assign, getter=isTemporary) BOOL temporary;	// G=0x2da88409; converted property
+ (id)objectIDWithCADObjectID:(XXStruct_K5nmsA)cadobjectID;	// 0x2da85de5
+ (id)objectIDWithEntityType:(int)entityType rowID:(int)anId;	// 0x2da86f15
+ (id)objectIDWithURL:(id)url;	// 0x2daf10a9
+ (id)temporaryObjectIDWithEntityType:(int)entityType;	// 0x2da97289
- (id)initWithCoder:(id)coder;	// 0x2da95879
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation;	// 0x2daf13e5
- (id)initWithEntityType:(int)entityType rowID:(int)anId temporary:(BOOL)temporary;	// 0x2da85e35
- (XXStruct_K5nmsA)CADObjectID;	// 0x2da88419
- (id)URIRepresentation;	// 0x2daf1629
- (id)copyWithZone:(NSZone *)zone;	// 0x2da866a1
- (id)description;	// 0x2daf1581
- (id)dictionaryRepresentation;	// 0x2daf14b9
- (void)encodeWithCoder:(id)coder;	// 0x2da8ca2d
- (id)entityName;	// 0x2da86119
// converted property getter: - (int)entityType;	// 0x2daa0c0d
- (unsigned)hash;	// 0x2da868a1
- (BOOL)isEqual:(id)equal;	// 0x2da873f9
// converted property getter: - (BOOL)isTemporary;	// 0x2da88409
// converted property getter: - (int)rowID;	// 0x2da91d11
- (id)stringRepresentation;	// 0x2daf1591
@end

