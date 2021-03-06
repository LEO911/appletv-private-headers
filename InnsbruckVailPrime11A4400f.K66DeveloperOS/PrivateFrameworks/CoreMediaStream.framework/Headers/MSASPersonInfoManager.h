/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import </libobjc.A.h>

@class NSString, NSMutableDictionary;

@interface MSASPersonInfoManager : NSObject {
	NSMutableDictionary *_personIDToPersonInfoDictionary;	// 4 = 0x4
	NSString *_pathForPersonInfoDictionary;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *pathForPersonInfoDictionary;	// G=0x304f14dd; S=0x304f14ed; @synthesize=_pathForPersonInfoDictionary
@property(retain, nonatomic) NSMutableDictionary *personIDToPersonInfoDictionary;	// G=0x304f14a5; S=0x304f14b5; @synthesize=_personIDToPersonInfoDictionary
+ (id)allocWithZone:(NSZone *)zone;	// 0x304f0e95
+ (id)sharedManager;	// 0x304f0d85
- (void)initWithPath:(id)path;	// 0x304f0eb5
- (void).cxx_destruct;	// 0x304f1515
- (id)emailForPersonID:(id)personID;	// 0x304f1449
- (id)firstNameForPersonID:(id)personID;	// 0x304f1335
- (id)fullNameForPersonID:(id)personID;	// 0x304f13ed
- (id)lastNameForPersonID:(id)personID;	// 0x304f1391
// declared property getter: - (id)pathForPersonInfoDictionary;	// 0x304f14dd
// declared property getter: - (id)personIDToPersonInfoDictionary;	// 0x304f14a5
// declared property setter: - (void)setPathForPersonInfoDictionary:(id)personInfoDictionary;	// 0x304f14ed
// declared property setter: - (void)setPersonIDToPersonInfoDictionary:(id)personInfoDictionary;	// 0x304f14b5
- (BOOL)updateWithSharingRelationship:(id)sharingRelationship;	// 0x304f0f81
@end

