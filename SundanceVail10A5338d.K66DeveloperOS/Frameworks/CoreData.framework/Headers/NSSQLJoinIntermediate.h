/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLIntermediate.h"

@class NSSQLRelationship, NSString;

@interface NSSQLJoinIntermediate : NSSQLIntermediate {
	NSSQLRelationship *_relationship;	// 8 = 0x8
	NSString *_sourceAlias;	// 12 = 0xc
	NSString *_destinationAlias;	// 16 = 0x10
	NSString *_correlationAlias;	// 20 = 0x14
	unsigned _type;	// 24 = 0x18
	BOOL _direct;	// 28 = 0x1c
}
@property(readonly, retain) NSString *correlationAlias;	// G=0x3663e2d9; converted property
@property(retain) NSString *destinationAlias;	// G=0x3663e285; S=0x3663e295; converted property
@property(assign, getter=isDirect) BOOL direct;	// G=0x3663e1c1; S=0x3663e1d1; converted property
@property(readonly, retain) NSSQLRelationship *relationship;	// G=0x3663e1e1; converted property
@property(retain) NSString *sourceAlias;	// G=0x3663e231; S=0x3663e241; converted property
+ (id)createJoinIntermediatesForKeypath:(id)keypath startEntity:(id)entity startAlias:(id)alias forScope:(id)scope inFetchIntermediate:(id)fetchIntermediate inContext:(id)context;	// 0x36589161
+ (id)createManyToManyJoinIntermediateForProperty:(id)property direct:(BOOL)direct lastStep:(id)step inScope:(id)scope context:(id)context;	// 0x3663deed
+ (id)createToManyJoinIntermediateForProperty:(id)property lastStep:(id)step inScope:(id)scope context:(id)context;	// 0x3663de4d
+ (id)createToOneJoinIntermediateForProperty:(id)property lastStep:(id)step inScope:(id)scope context:(id)context;	// 0x3663ddad
- (id)initForRelationship:(id)relationship sourceAlias:(id)alias destinationAlias:(id)alias3 correlationAlias:(id)alias4 direct:(BOOL)direct inScope:(id)scope;	// 0x3663dfa9
- (id)_generateManyToManySQLStringInContext:(id)context;	// 0x3663e705
- (id)_generateToManySQLStringInContext:(id)context;	// 0x3663e4f5
- (id)_generateToOneSQLStringInContext:(id)context;	// 0x3663e309
// converted property getter: - (id)correlationAlias;	// 0x3663e2d9
- (void)dealloc;	// 0x3663e061
- (id)description;	// 0x3663e101
// converted property getter: - (id)destinationAlias;	// 0x3663e285
- (id)destinationEntity;	// 0x3663e211
- (id)generateSQLStringInContext:(id)context;	// 0x3663ea3d
// converted property getter: - (BOOL)isDirect;	// 0x3663e1c1
- (BOOL)joinType;	// 0x3663e2e9
// converted property getter: - (id)relationship;	// 0x3663e1e1
// converted property setter: - (void)setDestinationAlias:(id)alias;	// 0x3663e295
// converted property setter: - (void)setDirect:(BOOL)direct;	// 0x3663e1d1
- (void)setJoinType:(unsigned)type;	// 0x3663e2f9
// converted property setter: - (void)setSourceAlias:(id)alias;	// 0x3663e241
// converted property getter: - (id)sourceAlias;	// 0x3663e231
- (id)sourceEntity;	// 0x3663e1f1
@end

