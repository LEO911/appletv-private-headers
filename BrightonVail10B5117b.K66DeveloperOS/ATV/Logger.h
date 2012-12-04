/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSMutableSet;

@interface Logger : XXUnknownSuperclass {
	NSMutableSet *traceAreas_;	// 4 = 0x4
	NSMutableArray *traceAreasStack_;	// 8 = 0x8
	BOOL logAll_;	// 12 = 0xc
	BOOL logEnabled_;	// 13 = 0xd
}
@property(assign, nonatomic) BOOL logAll;	// G=0x4dd7ad; S=0x4dd7bd; @synthesize=logAll_
@property(assign, nonatomic) BOOL logEnabled;	// G=0x4dd78d; S=0x4dd79d; @synthesize=logEnabled_
@property(retain, nonatomic) NSMutableSet *traceAreas;	// G=0x4dd7cd; S=0x4dd7dd; @synthesize=traceAreas_
@property(retain, nonatomic) NSMutableArray *traceAreasStack;	// G=0x4dd7ed; S=0x4dd7fd; @synthesize=traceAreasStack_
+ (id)sharedInstance;	// 0x4dd22d
- (id)init;	// 0x4dd275
- (void)addTraceArea:(id)area;	// 0x4dd4bd
- (void)addTraceAreaWithSet:(id)set;	// 0x4dd4f1
- (void)dealloc;	// 0x4dd321
- (void)log:(id)log function:(const char *)function line:(int)line message:(id)message;	// 0x4dd679
- (void)log:(id)log message:(id)message;	// 0x4dd581
// declared property getter: - (BOOL)logAll;	// 0x4dd7ad
// declared property getter: - (BOOL)logEnabled;	// 0x4dd78d
- (void)popTraceAreas;	// 0x4dd449
- (void)pushTraceAreas;	// 0x4dd399
- (void)removeAllTraceAreas;	// 0x4dd559
- (void)removeTraceArea:(id)area;	// 0x4dd525
// declared property setter: - (void)setLogAll:(BOOL)all;	// 0x4dd7bd
// declared property setter: - (void)setLogEnabled:(BOOL)enabled;	// 0x4dd79d
// declared property setter: - (void)setTraceAreas:(id)areas;	// 0x4dd7dd
// declared property setter: - (void)setTraceAreasStack:(id)stack;	// 0x4dd7fd
// declared property getter: - (id)traceAreas;	// 0x4dd7cd
// declared property getter: - (id)traceAreasStack;	// 0x4dd7ed
@end
