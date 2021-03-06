/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class SBJsonStreamWriterState, NSMutableArray, NSString;
@protocol SBJsonStreamWriterDelegate;

__attribute__((visibility("hidden")))
@interface SBJsonStreamWriter : NSObject {
@private
	NSString *error;	// 4 = 0x4
	NSMutableArray *stateStack;	// 8 = 0x8
	SBJsonStreamWriterState *state;	// 12 = 0xc
	id<SBJsonStreamWriterDelegate> delegate;	// 16 = 0x10
	unsigned maxDepth;	// 20 = 0x14
	BOOL sortKeys;	// 24 = 0x18
	BOOL humanReadable;	// 25 = 0x19
}
@property(assign) id<SBJsonStreamWriterDelegate> delegate;	// G=0x36902ac5; S=0x36902ad5; @synthesize
@property(copy) NSString *error;	// G=0x369029fd; S=0x36902a11; @synthesize
@property(assign) BOOL humanReadable;	// G=0x36902a85; S=0x36902a95; @synthesize
@property(assign) unsigned maxDepth;	// G=0x36902a35; S=0x36902a45; @synthesize
@property(assign) BOOL sortKeys;	// G=0x36902aa5; S=0x36902ab5; @synthesize
@property(assign, nonatomic) SBJsonStreamWriterState *state;	// G=0x36902a55; S=0x36902a65; @synthesize
@property(readonly, assign, nonatomic) NSMutableArray *stateStack;	// G=0x36902a75; @synthesize
+ (void)initialize;	// 0x36901561
- (id)init;	// 0x369015f9
- (void)appendBytes:(const void *)bytes length:(unsigned)length;	// 0x36901719
- (void)dealloc;	// 0x369016a5
// declared property getter: - (id)delegate;	// 0x36902ac5
// declared property getter: - (id)error;	// 0x369029fd
// declared property getter: - (BOOL)humanReadable;	// 0x36902a85
// declared property getter: - (unsigned)maxDepth;	// 0x36902a35
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x36902ad5
// declared property setter: - (void)setError:(id)error;	// 0x36902a11
// declared property setter: - (void)setHumanReadable:(BOOL)readable;	// 0x36902a95
// declared property setter: - (void)setMaxDepth:(unsigned)depth;	// 0x36902a45
// declared property setter: - (void)setSortKeys:(BOOL)keys;	// 0x36902ab5
// declared property setter: - (void)setState:(id)state;	// 0x36902a65
// declared property getter: - (BOOL)sortKeys;	// 0x36902aa5
// declared property getter: - (id)state;	// 0x36902a55
// declared property getter: - (id)stateStack;	// 0x36902a75
- (BOOL)writeArray:(id)array;	// 0x3690190d
- (BOOL)writeArrayClose;	// 0x36901dd9
- (BOOL)writeArrayOpen;	// 0x36901c59
- (BOOL)writeBool:(BOOL)aBool;	// 0x36901fc9
- (BOOL)writeNull;	// 0x36901ef1
- (BOOL)writeNumber:(id)number;	// 0x369026c5
- (BOOL)writeObject:(id)object;	// 0x36901749
- (BOOL)writeObjectClose;	// 0x36901b61
- (BOOL)writeObjectOpen;	// 0x369019e1
- (BOOL)writeString:(id)string;	// 0x36902275
- (BOOL)writeValue:(id)value;	// 0x369020b9
@end

