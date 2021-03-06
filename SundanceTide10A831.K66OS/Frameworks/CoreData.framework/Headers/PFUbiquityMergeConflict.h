/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSMergeConflict.h"

@class NSDictionary;

@interface PFUbiquityMergeConflict : NSMergeConflict {
	NSDictionary *_ancestorSnapshot;	// 28 = 0x1c
}
@property(retain) NSDictionary *ancestorSnapshot;	// G=0x33e3042d; S=0x33e30441; @synthesize=_ancestorSnapshot
- (id)initWithSource:(id)source newVersion:(unsigned)version oldVersion:(unsigned)version3 cachedSnapshot:(id)snapshot persistedSnapshot:(id)snapshot5;	// 0x33e303a5
// declared property getter: - (id)ancestorSnapshot;	// 0x33e3042d
- (void)dealloc;	// 0x33e303e9
// declared property setter: - (void)setAncestorSnapshot:(id)snapshot;	// 0x33e30441
@end

