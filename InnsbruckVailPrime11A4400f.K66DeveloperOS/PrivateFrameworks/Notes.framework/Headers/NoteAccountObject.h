/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import "NoteCollectionObject.h"

@class NSDictionary, NSString, NSNumber, NoteStoreObject, NSSet;

@interface NoteAccountObject : NoteCollectionObject {
	NSDictionary *_constraints;	// 48 = 0x30
}
@property(retain, nonatomic) NSString *accountIdentifier;	// @dynamic
@property(assign, nonatomic) int accountType;	// G=0x31699d09; S=0x31699c91; 
@property(retain, nonatomic) NSDictionary *constraints;	// G=0x31699e21; S=0x3169a2cd; @synthesize=_constraints
@property(retain, nonatomic) NSString *constraintsPath;	// @dynamic
@property(retain, nonatomic) NoteStoreObject *defaultStore;	// @dynamic
@property(retain, nonatomic) NSString *name;	// @dynamic
@property(retain, nonatomic) NSString *pathToConstraintsPlist;	// G=0x31699df5; S=0x31699d6d; 
@property(retain, nonatomic) NSSet *stores;	// @dynamic
@property(retain, nonatomic) NSNumber *type;	// @dynamic
- (void).cxx_destruct;	// 0x3169a2f9
// declared property getter: - (int)accountType;	// 0x31699d09
- (id)basicAccountIdentifier;	// 0x31699869
- (id)collectionInfo;	// 0x31699799
// declared property getter: - (id)constraints;	// 0x31699e21
- (void)didTurnIntoFault;	// 0x3169a255
// declared property getter: - (id)pathToConstraintsPlist;	// 0x31699df5
- (id)predicateForNotes;	// 0x31699725
// declared property setter: - (void)setAccountType:(int)type;	// 0x31699c91
// declared property setter: - (void)setConstraints:(id)constraints;	// 0x3169a2cd
// declared property setter: - (void)setPathToConstraintsPlist:(id)constraintsPlist;	// 0x31699d6d
- (BOOL)shouldMarkNotesAsDeleted;	// 0x31699fbd
- (id)storeForExternalId:(id)externalId;	// 0x31699895
- (BOOL)validateDefaultStore:(id *)store error:(id *)error;	// 0x3169a09d
@end

