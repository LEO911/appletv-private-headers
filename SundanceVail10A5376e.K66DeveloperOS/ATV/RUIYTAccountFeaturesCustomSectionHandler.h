/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "RUIYTListSectionHandling.h"

@class RUIYTAccountFeaturesController;

__attribute__((visibility("hidden")))
@interface RUIYTAccountFeaturesCustomSectionHandler : XXUnknownSuperclass <RUIYTListSectionHandling> {
	RUIYTAccountFeaturesController *_accountFeaturesController;	// 4 = 0x4
}
@property(readonly, assign) RUIYTAccountFeaturesController *accountFeaturesController;	// G=0x25e211; @synthesize=_accountFeaturesController
- (id)initWithAccountFeaturesController:(id)accountFeaturesController;	// 0x25e04d
- (void).cxx_destruct;	// 0x25e231
// declared property getter: - (id)accountFeaturesController;	// 0x25e211
- (id)itemForIndex:(id)index;	// 0x25e0ad
- (id)itemIDForIndex:(id)index;	// 0x25e1f9
- (BOOL)itemSelectedAtIndex:(id)index action:(int)action defer:(BOOL *)defer;	// 0x25e1a1
@end
