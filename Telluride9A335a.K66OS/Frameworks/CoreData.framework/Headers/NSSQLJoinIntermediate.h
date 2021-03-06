/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLIntermediate.h"

@class NSSQLRelationship, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLJoinIntermediate : NSSQLIntermediate {
@private
	NSSQLRelationship *_relationship;	// 8 = 0x8
	NSString *_sourceAlias;	// 12 = 0xc
	NSString *_destinationAlias;	// 16 = 0x10
	NSString *_correlationAlias;	// 20 = 0x14
	unsigned _type;	// 24 = 0x18
	BOOL _direct;	// 28 = 0x1c
}
@property(readonly, retain) NSString *correlationAlias;	// G=0x3318f2b9; converted property
@property(retain) NSString *destinationAlias;	// G=0x3318f2a9; S=0x3318fe19; converted property
@property(assign, getter=isDirect) BOOL direct;	// G=0x3318f269; S=0x3318f279; converted property
@property(readonly, retain) NSSQLRelationship *relationship;	// G=0x3318f289; converted property
@property(retain) NSString *sourceAlias;	// G=0x3318f299; S=0x3318fe61; converted property
+ (id)createJoinIntermediatesForKeypath:(id)keypath startEntity:(id)entity startAlias:(id)alias forScope:(id)scope inFetchIntermediate:(id)fetchIntermediate inContext:(id)context;	// 0x330d342d
+ (id)createManyToManyJoinIntermediateForProperty:(id)property direct:(BOOL)direct lastStep:(id)step inScope:(id)scope context:(id)context;	// 0x3318f3a1
+ (id)createToManyJoinIntermediateForProperty:(id)property lastStep:(id)step inScope:(id)scope context:(id)context;	// 0x3318f455
+ (id)createToOneJoinIntermediateForProperty:(id)property lastStep:(id)step inScope:(id)scope context:(id)context;	// 0x3318f4f5
- (id)initForRelationship:(id)relationship sourceAlias:(id)alias destinationAlias:(id)alias3 correlationAlias:(id)alias4 direct:(BOOL)direct inScope:(id)scope;	// 0x3318f2e9
- (id)_generateManyToManySQLStringInContext:(id)context;	// 0x3318f62d
- (id)_generateToManySQLStringInContext:(id)context;	// 0x3318f9d1
- (id)_generateToOneSQLStringInContext:(id)context;	// 0x3318fc05
// converted property getter: - (id)correlationAlias;	// 0x3318f2b9
- (void)dealloc;	// 0x3318ffad
- (id)description;	// 0x3318fee9
// converted property getter: - (id)destinationAlias;	// 0x3318f2a9
- (id)destinationEntity;	// 0x3318fea9
- (id)generateSQLStringInContext:(id)context;	// 0x3318f595
// converted property getter: - (BOOL)isDirect;	// 0x3318f269
- (BOOL)joinType;	// 0x3318f2c9
// converted property getter: - (id)relationship;	// 0x3318f289
// converted property setter: - (void)setDestinationAlias:(id)alias;	// 0x3318fe19
// converted property setter: - (void)setDirect:(BOOL)direct;	// 0x3318f279
- (void)setJoinType:(unsigned)type;	// 0x3318f2d9
// converted property setter: - (void)setSourceAlias:(id)alias;	// 0x3318fe61
// converted property getter: - (id)sourceAlias;	// 0x3318f299
- (id)sourceEntity;	// 0x3318fec9
@end

