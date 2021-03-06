/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "NSCoding.h"


@interface EKObjectID : NSObject <NSCopying, NSCoding> {
	BOOL _temporary;	// 4 = 0x4
	int _entityType;	// 8 = 0x8
	int _rowID;	// 12 = 0xc
}
@property(readonly, assign) int entityType;	// G=0x367bb351; converted property
@property(readonly, assign) int rowID;	// G=0x367ab855; converted property
@property(readonly, assign, getter=isTemporary) BOOL temporary;	// G=0x367a1be5; converted property
+ (id)objectIDWithCADObjectID:(XXStruct_K5nmsA)cadobjectID;	// 0x3679f201
+ (id)objectIDWithEntityType:(int)entityType rowID:(int)anId;	// 0x367a03f9
+ (id)objectIDWithURL:(id)url;	// 0x36805e21
+ (id)temporaryObjectIDWithEntityType:(int)entityType;	// 0x367b12c9
- (id)initWithCoder:(id)coder;	// 0x367af7c1
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation;	// 0x36806161
- (id)initWithEntityType:(int)entityType rowID:(int)anId temporary:(BOOL)temporary;	// 0x3679f251
- (XXStruct_K5nmsA)CADObjectID;	// 0x367a1bf5
- (id)URIRepresentation;	// 0x368063a5
- (id)copyWithZone:(NSZone *)zone;	// 0x3679fb1d
- (id)description;	// 0x368062fd
- (id)dictionaryRepresentation;	// 0x36806235
- (void)encodeWithCoder:(id)coder;	// 0x367a61cd
- (id)entityName;	// 0x3679f545
// converted property getter: - (int)entityType;	// 0x367bb351
- (unsigned)hash;	// 0x3679fda1
- (BOOL)isEqual:(id)equal;	// 0x367a08d1
// converted property getter: - (BOOL)isTemporary;	// 0x367a1be5
// converted property getter: - (int)rowID;	// 0x367ab855
- (id)stringRepresentation;	// 0x3680630d
@end

