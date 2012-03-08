/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"
#import "ASParsingAcceptingTopLevelLeaves.h"

@class NSString, NSMutableDictionary;

@interface ASAttendee : ASItem <ASParsingAcceptingTopLevelLeaves> {
	NSString *_name;	// 40 = 0x28
	NSString *_email;	// 44 = 0x2c
	int _status;	// 48 = 0x30
	int _role;	// 52 = 0x34
	int _localId;	// 56 = 0x38
	NSMutableDictionary *_placeHolder;	// 60 = 0x3c
}
@property(retain) NSString *email;	// G=0x341d10a9; S=0x341d10bd; @synthesize=_email
@property(assign) int localId;	// G=0x341d1121; S=0x341d1131; @synthesize=_localId
@property(retain) NSString *name;	// G=0x341d1071; S=0x341d1085; @synthesize=_name
@property(assign) int role;	// G=0x341d1101; S=0x341d1111; @synthesize=_role
@property(assign) int status;	// G=0x341d10e1; S=0x341d10f1; @synthesize=_status
+ (BOOL)acceptsTopLevelLeaves;	// 0x341d01cd
+ (BOOL)frontingBasicTypes;	// 0x341d02c9
+ (BOOL)notifyOfUnknownTokens;	// 0x341d031d
+ (BOOL)parsingLeafNode;	// 0x341d0221
+ (BOOL)parsingWithSubItems;	// 0x341d0275
- (id)init;	// 0x341d082d
- (id)initWithCalAttendee:(void *)calAttendee parentEvent:(id)event;	// 0x341d086d
- (id)initWithCoder:(id)coder;	// 0x341d09f5
- (void)appendActiveSyncDataForTask:(id)task toData:(id)data;	// 0x341d0cdd
- (void)applyPlaceHolder;	// 0x341d0371
- (id)asParseRules;	// 0x341d0651
- (void)clearPlaceHolder;	// 0x341d05b5
- (id)copyOfSelfWithoutLocalID;	// 0x341d0e71
- (void)dealloc;	// 0x341d0dfd
// declared property getter: - (id)email;	// 0x341d10a9
- (void)encodeWithCoder:(id)coder;	// 0x341d0b89
- (id)fullEmailString;	// 0x341d0db1
- (id)icsUserAddress;	// 0x341d0f29
// declared property getter: - (int)localId;	// 0x341d1121
// declared property getter: - (id)name;	// 0x341d1071
// declared property getter: - (int)role;	// 0x341d1101
- (void)saveToCalendarWithParentASEvent:(id)parentASEvent existingRecord:(void *)record shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge;	// 0x341d0655
// declared property setter: - (void)setEmail:(id)email;	// 0x341d10bd
// declared property setter: - (void)setLocalId:(int)anId;	// 0x341d1131
// declared property setter: - (void)setName:(id)name;	// 0x341d1085
- (void)setObject:(id)object forDCCPT:(int)dccpt;	// 0x341d05e1
// declared property setter: - (void)setRole:(int)role;	// 0x341d1111
// declared property setter: - (void)setStatus:(int)status;	// 0x341d10f1
// declared property getter: - (int)status;	// 0x341d10e1
@end
