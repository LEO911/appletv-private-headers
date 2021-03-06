/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import "TextInput-Structs.h"
#import <NSObject.h> // Unknown library

@class TIMecabraWrapper, NSOperationQueue, TIWordSearchOperationGetCandidates;

@interface TIWordSearch : NSObject {
	TIMecabraWrapper *_mecabraWrapper;	// 4 = 0x4
	NSOperationQueue *_operationQueue;	// 8 = 0x8
	TIWordSearchOperationGetCandidates *_operation;	// 12 = 0xc
	BOOL _autoCorrects;	// 16 = 0x10
	BOOL _shouldLearnAcceptedCandidate;	// 17 = 0x11
}
@property(assign) BOOL autoCorrects;	// G=0x3564062d; S=0x35640645; @synthesize=_autoCorrects
@property(readonly, assign) Mecabra *mecabra;	// G=0x3563fb01; 
@property(readonly, assign) TIMecabraWrapper *mecabraWrapper;	// G=0x3563fa09; @synthesize=_mecabraWrapper
@property(retain) TIWordSearchOperationGetCandidates *operation;	// G=0x35640609; S=0x3564061d; @synthesize=_operation
@property(readonly, assign) NSOperationQueue *operationQueue;	// G=0x3563fb35; @synthesize=_operationQueue
@property(assign) BOOL shouldLearnAcceptedCandidate;	// G=0x3564065d; S=0x35640675; @synthesize=_shouldLearnAcceptedCandidate
- (id)initTIWordSearch;	// 0x3563fbc5
// declared property getter: - (BOOL)autoCorrects;	// 0x3564062d
- (id)cachedCandidatesForOperation:(id)operation;	// 0x3563fdc1
- (void)cancel;	// 0x3563fff1
- (id)candidatesForOperation:(id)operation;	// 0x3563fdbd
- (void)clearCache;	// 0x3563f9bd
- (void)clearLearningDictionary;	// 0x3563f9c5
- (void)completeOperationsInQueue;	// 0x3564017d
- (CFURLRef)createMecabraLearningDictionaryDirectory;	// 0x3563fb2d
- (void)dealloc;	// 0x3563fc6d
- (id)facemarkCandiates;	// 0x3563fdc5
- (id)geometryModelDataFromZephyr:(TIInputManagerZephyr *)zephyr;	// 0x35640241
- (float)getLoglikelihoodFromZephyr:(TIInputManagerZephyr *)zephyr keys:(unsigned short *)keys length:(int)length touch_index:(int)index totalCount:(int)count;	// 0x35640415
- (BOOL)isCancelled;	// 0x35640045
- (void)jettisonMecabraInstance;	// 0x35640209
- (void)lastAcceptedCandidateCorrected;	// 0x35640105
// declared property getter: - (Mecabra *)mecabra;	// 0x3563fb01
- (unsigned long)mecabraCreationOptions;	// 0x3563fb31
- (int)mecabraInputMethodType;	// 0x3563fb29
// declared property getter: - (id)mecabraWrapper;	// 0x3563fa09
// declared property getter: - (id)operation;	// 0x35640609
// declared property getter: - (id)operationQueue;	// 0x3563fb35
- (void)performAccept:(id)accept isPartial:(BOOL)partial;	// 0x3563ff35
- (void)performOperationAsync:(id)async;	// 0x356400d9
- (void)resetPreviousWord;	// 0x3564006d
- (void)saveLearningDictionary;	// 0x356401c5
// declared property setter: - (void)setAutoCorrects:(BOOL)corrects;	// 0x35640645
// declared property setter: - (void)setOperation:(id)operation;	// 0x3564061d
// declared property setter: - (void)setShouldLearnAcceptedCandidate:(BOOL)learnAcceptedCandidate;	// 0x35640675
// declared property getter: - (BOOL)shouldLearnAcceptedCandidate;	// 0x3564065d
- (void)springBoardDidResignNotification:(id)springBoard;	// 0x3563fcfd
- (void)updateMecabraState;	// 0x3563f9c1
- (void)updateUserWordEntries;	// 0x356404a5
@end

