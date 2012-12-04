/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library


@interface WebVisiblePosition : NSObject {
	WebObjectInternal *_internal;	// 4 = 0x4
}
@property(assign, nonatomic) int affinity;	// G=0x350c1d1d; S=0x350c1d69; 
+ (id)_wrapVisiblePosition:(VisiblePosition)position;	// 0x350bab15
+ (id)_wrapVisiblePositionIfValid:(VisiblePosition)valid;	// 0x350baba1
- (VisiblePosition)_visiblePosition;	// 0x350bacd1
// declared property getter: - (int)affinity;	// 0x350c1d1d
- (BOOL)atAlphaNumericBoundaryInDirection:(int)direction;	// 0x350c111d
- (BOOL)atBoundaryOfGranularity:(int)granularity inDirection:(int)direction;	// 0x350bbeb1
- (int)compare:(id)compare;	// 0x350baf91
- (void)dealloc;	// 0x350bad0d
- (id)description;	// 0x350bb48d
- (BOOL)directionIsDownstream:(int)downstream;	// 0x350bb689
- (int)distanceFromPosition:(id)position;	// 0x350bb12d
- (id)enclosingRangeWithCorrectionIndicator;	// 0x350c1809
- (id)enclosingRangeWithDictationPhraseAlternatives:(id *)dictationPhraseAlternatives;	// 0x350c12e5
- (id)enclosingTextUnitOfGranularity:(int)granularity inDirectionIfAtBoundary:(int)boundary;	// 0x350bf351
- (BOOL)isEditable;	// 0x350c0e3d
- (BOOL)isEqual:(id)equal;	// 0x350bae11
- (id)nextCharacterBoundaryInDirection:(int)direction;	// 0x350bc61d
- (id)nextDocumentBoundaryInDirection:(int)direction;	// 0x350be5fd
- (id)nextLineBoundaryInDirection:(int)direction;	// 0x350bdbb1
- (id)nextParagraphBoundaryInDirection:(int)direction;	// 0x350be095
- (id)nextSentenceBoundaryInDirection:(int)direction;	// 0x350bd5cd
- (id)nextWordBoundaryInDirection:(int)direction;	// 0x350bc84d
- (id)positionAtStartOrEndOfWord;	// 0x350c035d
- (id)positionByMovingInDirection:(int)direction amount:(unsigned long)amount;	// 0x350bbe8d
- (id)positionByMovingInDirection:(int)direction amount:(unsigned long)amount withAffinityDownstream:(BOOL)affinityDownstream;	// 0x350bb6cd
- (id)positionOfNextBoundaryOfGranularity:(int)granularity inDirection:(int)direction;	// 0x350be831
- (BOOL)requiresContextForWordBoundary;	// 0x350c0fd5
// declared property setter: - (void)setAffinity:(int)affinity;	// 0x350c1d69
- (int)textDirection;	// 0x350bb685
- (BOOL)withinTextUnitOfGranularity:(int)granularity inDirectionIfAtBoundary:(int)boundary;	// 0x350be891
@end
