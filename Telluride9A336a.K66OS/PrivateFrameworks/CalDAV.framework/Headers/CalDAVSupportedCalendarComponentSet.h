/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class NSMutableSet, NSSet;

@interface CalDAVSupportedCalendarComponentSet : CoreDAVItem {
	NSMutableSet *_comps;	// 24 = 0x18
}
@property(readonly, assign) NSSet *compNames;	// G=0x338c605d; 
@property(retain) NSMutableSet *comps;	// G=0x338c6045; S=0x338c6021; @synthesize=_comps
- (id)init;	// 0x338c5e85
- (void)addComp:(id)comp;	// 0x338c5f21
- (id)childrenToWrite;	// 0x338c5f8d
// declared property getter: - (id)compNames;	// 0x338c605d
- (id)componentsAsString;	// 0x338c5ec1
// declared property getter: - (id)comps;	// 0x338c6045
- (id)copyParseRules;	// 0x338c5d79
- (void)dealloc;	// 0x338c5fe1
- (id)description;	// 0x338c6191
// declared property setter: - (void)setComps:(id)comps;	// 0x338c6021
@end
