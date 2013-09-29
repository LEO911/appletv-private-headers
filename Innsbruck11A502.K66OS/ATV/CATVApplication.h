/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CATVApplication : XXUnknownSuperclass {
	BOOL _isPowerManagementStarted;	// 106 = 0x6a
}
@property(assign, nonatomic) BOOL isPowerManagementStarted;	// G=0x4b4729; S=0x4b4a9d; @synthesize=_isPowerManagementStarted
+ (id)_launchd_allJobLabels;	// 0x4b4975
+ (void)_startStatusBarServerIfNecessary;	// 0x4b4909
+ (id)arrayByFilteringWordsInSet:(id)set fromArray:(id)array;	// 0x418585
+ (id)labelNoiseWords;	// 0x418369
+ (BOOL)registerAsSystemApp;	// 0x4b4905
+ (id)sharedApplication;	// 0x4b447d
+ (id)substringStartingAtFirstNonNoiseWordFromString:(id)string;	// 0x418411
- (id)init;	// 0x4b44a9
- (id)CATVApplicationDelegate;	// 0x4b4571
- (BOOL)_accessibilityIsSystemAppServer;	// 0x4b494d
- (id)_controlWithAccessibilityName:(id)accessibilityName inControl:(id)control matchedTerms:(unsigned *)terms prefixWins:(BOOL)wins useFocusProximity:(BOOL)proximity;	// 0x418655
- (void)_dumpAccessibilityTags:(unsigned)tags;	// 0x41755d
- (void)_dumpBindingInfo:(unsigned)info;	// 0x417809
- (void)_dumpControl:(id)control levelsDeep:(unsigned)deep usingBlock:(id)block;	// 0x4173d5
- (void)_dumpControlGeometry:(unsigned)geometry;	// 0x417911
- (void)_dumpStackGeometry:(unsigned)geometry;	// 0x4179b5
- (void)adjustToDisplayChange;	// 0x4b4589
- (void)blockEvents;	// 0x4b4581
- (id)controlWithName:(id)name prefixMatch:(BOOL)match useFocusProximity:(BOOL)proximity;	// 0x419139
- (BOOL)findAndSelectControlWithAccessibilityTag:(id)accessibilityTag;	// 0x4193e5
- (BOOL)focusControl:(id)control;	// 0x419251
- (void)handleKeyHIDEvent:(IOHIDEventRef)event;	// 0x4b4739
// declared property getter: - (BOOL)isPowerManagementStarted;	// 0x4b4729
- (void)sendEvent:(id)event;	// 0x4b47ed
// declared property setter: - (void)setIsPowerManagementStarted:(BOOL)started;	// 0x4b4a9d
- (void)setupDisplayManagement;	// 0x4b4591
- (void)startPowerManagement;	// 0x4b4595
- (void)submitAggregateReportingNow;	// 0x4b458d
- (void)unblockEvents;	// 0x4b4585
@end
