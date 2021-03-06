/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSDictionary, NSTimer;
@protocol BRCyclerDataSource, BRCyclerDelegate, BRProvider;

__attribute__((visibility("hidden")))
@interface BRCyclerControl : BRControl {
	id<BRProvider> _provider;	// 84 = 0x54
	double _interval;	// 88 = 0x58
	double _startInterval;	// 96 = 0x60
	long _index;	// 104 = 0x68
	long _startIndex;	// 108 = 0x6c
	BOOL _returnsToStart;	// 112 = 0x70
	NSTimer *_crossFadeTimer;	// 116 = 0x74
	BRControl *_control;	// 120 = 0x78
	NSDictionary *_subcontrolMetadata;	// 124 = 0x7c
	BOOL _initialDisplayOccurred;	// 128 = 0x80
	BOOL _startsOnActivate;	// 129 = 0x81
	id<BRCyclerDataSource> _dataSource;	// 132 = 0x84
	id<BRCyclerDelegate> _delegate;	// 136 = 0x88
}
@property(assign, nonatomic) id<BRCyclerDataSource> dataSource;	// G=0x35b8e1; S=0x35b229; @synthesize=_dataSource
@property(assign, nonatomic) id<BRCyclerDelegate> delegate;	// G=0x35b8f1; S=0x35b901; @synthesize=_delegate
@property(assign) double interval;	// G=0x35b649; S=0x35b5d5; converted property
@property(assign) BOOL returnsToStart;	// G=0x35b5c5; S=0x35b5b5; converted property
@property(assign) long startIndex;	// G=0x35b5a5; S=0x35b471; converted property
@property(assign) double startInterval;	// G=0x35b675; S=0x35b661; converted property
@property(assign, nonatomic) BOOL startsOnActivate;	// G=0x35b911; S=0x35b921; @synthesize=_startsOnActivate
@property(readonly, retain) NSDictionary *subcontrolMetadata;	// G=0x35b6c9; converted property
+ (id)cyclerWithProvider:(id)provider;	// 0x35b025
- (id)init;	// 0x35b06d
- (id)initWithProvider:(id)provider;	// 0x35b0b5
- (void)_commonInit;	// 0x35bd6d
- (void)_crossFade:(id)fade;	// 0x35b941
- (void)_providerUpdated:(id)updated;	// 0x35b931
- (void)_returnToStart;	// 0x35bd21
- (void)_startCrossFadeTimer;	// 0x35bc2d
- (void)_stopCrossFadeTimer;	// 0x35bced
- (id)accessibilityLabel;	// 0x35b851
- (void)controlWasActivated;	// 0x35b295
- (void)controlWasDeactivated;	// 0x35b30d
- (void)controlWasFocused;	// 0x35b361
- (void)controlWasUnfocused;	// 0x35b3e1
- (void)cycle;	// 0x35b4b5
// declared property getter: - (id)dataSource;	// 0x35b8e1
- (void)dealloc;	// 0x35b185
// declared property getter: - (id)delegate;	// 0x35b8f1
// converted property getter: - (double)interval;	// 0x35b649
- (void)layoutSubcontrols;	// 0x35b7e9
- (id)preferredActionForKey:(id)key;	// 0x35b6d9
- (void)reload;	// 0x35b4c9
// converted property getter: - (BOOL)returnsToStart;	// 0x35b5c5
// declared property setter: - (void)setDataSource:(id)source;	// 0x35b229
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35b901
// converted property setter: - (void)setInterval:(double)interval;	// 0x35b5d5
// converted property setter: - (void)setReturnsToStart:(BOOL)start;	// 0x35b5b5
// converted property setter: - (void)setStartIndex:(long)index;	// 0x35b471
// converted property setter: - (void)setStartInterval:(double)interval;	// 0x35b661
// declared property setter: - (void)setStartsOnActivate:(BOOL)activate;	// 0x35b921
- (void)setSubcontrolMetaData:(id)data;	// 0x35b68d
- (void)start;	// 0x35b4a5
// converted property getter: - (long)startIndex;	// 0x35b5a5
// converted property getter: - (double)startInterval;	// 0x35b675
// declared property getter: - (BOOL)startsOnActivate;	// 0x35b911
// converted property getter: - (id)subcontrolMetadata;	// 0x35b6c9
@end

