/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OABReaderState.h"

@class WBReader;

@interface WBOfficeArtReaderState : OABReaderState {
	WBReader *mReader;	// 24 = 0x18
	int mCurrentTextType;	// 28 = 0x1c
}
@property(assign, nonatomic) int currentTextType;	// G=0x34b02e31; S=0x34b02c55; @synthesize=mCurrentTextType
@property(assign, nonatomic) WBReader *reader;	// G=0x34b03339; S=0x34af5bb9; @synthesize=mReader
- (id)initWithClient:(Class)client;	// 0x34af5b79
// declared property getter: - (int)currentTextType;	// 0x34b02e31
// declared property getter: - (id)reader;	// 0x34b03339
// declared property setter: - (void)setCurrentTextType:(int)type;	// 0x34b02c55
// declared property setter: - (void)setReader:(id)reader;	// 0x34af5bb9
@end

