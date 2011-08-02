/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DataAccess-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@protocol NSObject;

@interface DAAction : NSObject <NSCoding> {
	int _action;	// 4 = 0x4
	id<NSObject, NSCoding> _context;	// 8 = 0x8
	int _changeId;	// 12 = 0xc
}
@property(readonly, assign) int action;	// G=0x3022fdad; @synthesize=_action
@property(assign) int changeId;	// G=0x3022fd8d; S=0x3022fd9d; @synthesize=_changeId
@property(retain, setter=_setContext:) id context;	// G=0x30230799; S=0x3023005d; @synthesize=_context
- (id)initWithAction:(int)action context:(id)context;	// 0x302306e5
- (id)initWithCoder:(id)coder;	// 0x302305b9
// declared property setter: - (void)_setContext:(id)context;	// 0x3023005d
// declared property getter: - (int)action;	// 0x3022fdad
// declared property getter: - (int)changeId;	// 0x3022fd8d
- (ASContact *)contact;	// 0x3022cff5
// declared property getter: - (id)context;	// 0x30230799
- (void)dealloc;	// 0x30230751
- (id)deletedContactID;	// 0x3022cfe5
- (id)deletedEventID;	// 0x3022cfb9
- (id)description;	// 0x3022ffa9
- (void)encodeWithCoder:(id)coder;	// 0x3022feb1
- (ASEvent *)event;	// 0x3022cfc9
- (unsigned)hash;	// 0x3022fe91
- (BOOL)isEqual:(id)equal;	// 0x3022fdfd
- (id)message;	// 0x30232849
// declared property setter: - (void)setChangeId:(int)anId;	// 0x3022fd9d
- (id)stringForAction:(int)action;	// 0x3022fd2d
@end
