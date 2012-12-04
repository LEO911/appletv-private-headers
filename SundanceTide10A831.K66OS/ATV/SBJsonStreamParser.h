/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSString, SBJsonStreamParserState, SBJsonTokeniser;
@protocol SBJsonStreamParserDelegate;

@interface SBJsonStreamParser : XXUnknownSuperclass {
	BOOL supportMultipleDocuments;	// 4 = 0x4
	id<SBJsonStreamParserDelegate> delegate;	// 8 = 0x8
	SBJsonTokeniser *tokeniser;	// 12 = 0xc
	NSMutableArray *stateStack;	// 16 = 0x10
	SBJsonStreamParserState *state;	// 20 = 0x14
	unsigned maxDepth;	// 24 = 0x18
	NSString *error;	// 28 = 0x1c
}
@property(assign) id<SBJsonStreamParserDelegate> delegate;	// G=0x49aae5; S=0x49aaf9; @synthesize
@property(copy) NSString *error;	// G=0x49aac1; S=0x49aad5; @synthesize
@property(assign) unsigned maxDepth;	// G=0x49ab11; S=0x49ab25; @synthesize
@property(assign, nonatomic) SBJsonStreamParserState *state;	// G=0x49ab3d; S=0x49ab4d; @synthesize
@property(readonly, assign, nonatomic) NSMutableArray *stateStack;	// G=0x49ab5d; @synthesize
@property(assign) BOOL supportMultipleDocuments;	// G=0x49aa91; S=0x49aaa9; @synthesize
- (id)init;	// 0x49a2a9
- (void)dealloc;	// 0x49a389
// declared property getter: - (id)delegate;	// 0x49aae5
// declared property getter: - (id)error;	// 0x49aac1
- (void)handleArrayStart;	// 0x49a5f1
- (void)handleObjectStart;	// 0x49a531
// declared property getter: - (unsigned)maxDepth;	// 0x49ab11
- (void)maxDepthError;	// 0x49a4ad
- (int)parse:(id)parse;	// 0x49a6b1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x49aaf9
// declared property setter: - (void)setError:(id)error;	// 0x49aad5
// declared property setter: - (void)setMaxDepth:(unsigned)depth;	// 0x49ab25
// declared property setter: - (void)setState:(id)state;	// 0x49ab4d
// declared property setter: - (void)setSupportMultipleDocuments:(BOOL)documents;	// 0x49aaa9
// declared property getter: - (id)state;	// 0x49ab3d
// declared property getter: - (id)stateStack;	// 0x49ab5d
// declared property getter: - (BOOL)supportMultipleDocuments;	// 0x49aa91
- (id)tokenName:(int)name;	// 0x49a415
@end
