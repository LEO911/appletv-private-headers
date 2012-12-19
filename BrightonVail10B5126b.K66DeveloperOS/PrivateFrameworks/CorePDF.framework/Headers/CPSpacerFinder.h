/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"
#import "CPDisposable.h"

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
	XXStruct_L$IMOD *segmentations;	// 68 = 0x44
	XXStruct_Uc07rB *qualityEntries;	// 72 = 0x48
}
@property(readonly, retain) NSMutableArray *spacers;	// G=0x33874955; converted property
- (id)initWithContentZone:(id)contentZone;	// 0x33872331
- (void)assessQuality;	// 0x338731c1
- (void)dealloc;	// 0x33872585
- (void)determineValidity;	// 0x33873939
- (void)dispose;	// 0x3387247d
- (void)finalize;	// 0x33872545
- (void)findSpacers;	// 0x338728d1
- (void)initializeJunctions;	// 0x3387273d
- (void)initializeSegmentations;	// 0x338725e5
// converted property getter: - (id)spacers;	// 0x33874955
- (void)splitTextLines;	// 0x33874481
@end
