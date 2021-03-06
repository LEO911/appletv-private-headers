/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CPDisposable.h"
#import "CorePDF-Structs.h"

@class NSMutableArray, CPZone;

@interface CPSpacerFinder : NSObject <CPDisposable> {
	CPZone *contentZone;	// 4 = 0x4
	CGRect zoneBounds;	// 8 = 0x8
	CGRect textBounds;	// 24 = 0x18
	struct {
		unsigned allocatedSize;
		unsigned size;
		unsigned count;
		CGPoint *stats;
		CGPoint **ordered;
	} spacerSequence;	// 40 = 0x28
	NSMutableArray *spacers;	// 60 = 0x3c
	unsigned segmentationCount;	// 64 = 0x40
	XXStruct_OVeKqA *segmentations;	// 68 = 0x44
	XXStruct_cUngNA *qualityEntries;	// 72 = 0x48
}
@property(readonly, retain) NSMutableArray *spacers;	// G=0x30bc591d; converted property
- (id)initWithContentZone:(id)contentZone;	// 0x30bc5ae5
- (void)assessQuality;	// 0x30bc6edd
- (void)dealloc;	// 0x30bc5a15
- (void)determineValidity;	// 0x30bc6155
- (void)dispose;	// 0x30bc5be5
- (void)finalize;	// 0x30bc5a69
- (void)findSpacers;	// 0x30bc7bf1
- (void)initializeJunctions;	// 0x30bc5df5
- (void)initializeSegmentations;	// 0x30bc5cd5
// converted property getter: - (id)spacers;	// 0x30bc591d
- (void)splitTextLines;	// 0x30bc6bd1
@end

