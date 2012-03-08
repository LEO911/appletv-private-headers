/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GMMDirectionsOptionResponse : PBCodable {
	NSMutableArray *_optionDefinitions;	// 4 = 0x4
}
@property(retain, nonatomic) NSMutableArray *optionDefinitions;	// G=0x30b69201; S=0x30b69211; @synthesize=_optionDefinitions
- (void)addOptionDefinition:(id)definition;	// 0x30b68e11
- (void)dealloc;	// 0x30b68dcd
- (id)description;	// 0x30b68eb5
- (id)dictionaryRepresentation;	// 0x30b68f25
- (id)optionDefinitionAtIndex:(unsigned)index;	// 0x30b68e95
// declared property getter: - (id)optionDefinitions;	// 0x30b69201
- (unsigned)optionDefinitionsCount;	// 0x30b68e75
- (BOOL)readFrom:(id)from;	// 0x30b68f79
// declared property setter: - (void)setOptionDefinitions:(id)definitions;	// 0x30b69211
- (void)writeTo:(id)to;	// 0x30b690ed
@end
