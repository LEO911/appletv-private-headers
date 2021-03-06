/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedController.h"

@class BRTextControl, ATVJSContext, BRProgressBarWidget;

__attribute__((visibility("hidden")))
@interface ATVScriptRunnerController : ATVFeedController {
	BRTextControl *_statusText;	// 104 = 0x68
	BRProgressBarWidget *_progressBar;	// 108 = 0x6c
	ATVJSContext *_context;	// 112 = 0x70
}
@property(retain, nonatomic) ATVJSContext *context;	// G=0x16306d; S=0x16307d; @synthesize=_context
@property(retain, nonatomic) BRProgressBarWidget *progressBar;	// G=0x16304d; S=0x16305d; @synthesize=_progressBar
@property(retain, nonatomic) BRTextControl *statusText;	// G=0x16302d; S=0x16303d; @synthesize=_statusText
- (id)initWithDictionary:(id)dictionary;	// 0x162615
- (id)initWithFeedElement:(id)feedElement;	// 0x162531
- (void)_evaluateScripts:(id)scripts inContext:(id)context;	// 0x162769
- (void)_setStatus:(id)status withPercentComplete:(float)percentComplete;	// 0x162ee9
// declared property getter: - (id)context;	// 0x16306d
- (void)dealloc;	// 0x1626f9
- (void)layoutSubcontrols;	// 0x162dd5
// declared property getter: - (id)progressBar;	// 0x16304d
// declared property setter: - (void)setContext:(id)context;	// 0x16307d
// declared property setter: - (void)setProgressBar:(id)bar;	// 0x16305d
// declared property setter: - (void)setStatusText:(id)text;	// 0x16303d
// declared property getter: - (id)statusText;	// 0x16302d
- (void)wasPopped;	// 0x162d71
- (void)wasPushed;	// 0x162a6d
@end

