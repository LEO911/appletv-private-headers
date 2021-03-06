/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class NSMutableSet, NSSet;

@interface CalDAVSupportedCalendarComponentSet : CoreDAVItem {
	NSMutableSet *_comps;	// 28 = 0x1c
}
@property(readonly, assign) NSSet *compNames;	// G=0x3373dde5; 
@property(retain) NSMutableSet *comps;	// G=0x3373df25; S=0x3373df39; @synthesize=_comps
- (id)init;	// 0x3373dbd1
- (void)addComp:(id)comp;	// 0x3373dd25
- (id)childrenToWrite;	// 0x3373dd91
// declared property getter: - (id)compNames;	// 0x3373dde5
- (id)componentsAsString;	// 0x3373dc41
// declared property getter: - (id)comps;	// 0x3373df25
- (id)copyParseRules;	// 0x3373dacd
- (void)dealloc;	// 0x3373dbfd
- (id)description;	// 0x3373dca1
// declared property setter: - (void)setComps:(id)comps;	// 0x3373df39
@end

