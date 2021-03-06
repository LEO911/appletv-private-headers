/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDSortedCollection.h"

@class CHDChart;

__attribute__((visibility("hidden")))
@interface CHDSeriesCollection : EDSortedCollection {
@private
	CHDChart *mChart;	// 12 = 0xc
}
+ (id)seriesCollectionWithChart:(id)chart;	// 0x34d69a85
- (id)initWithChart:(id)chart;	// 0x34cea859
- (unsigned)addObject:(id)object;	// 0x34cecd05
- (id)firstNonEmptySeries;	// 0x34d5054d
- (unsigned)nonEmptySeriesCount;	// 0x34cee02d
@end

