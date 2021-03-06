/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface UIStoryboardSegueTemplate : NSObject <NSCoding> {
	NSString *_identifier;	// 4 = 0x4
	NSString *_segueClassName;	// 8 = 0x8
	UIViewController *_viewController;	// 12 = 0xc
	NSString *_destinationViewControllerIdentifier;	// 16 = 0x10
	BOOL _performOnViewLoad;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSString *identifier;	// G=0x330161c1; @synthesize=_identifier
@property(assign, nonatomic) BOOL performOnViewLoad;	// G=0x330161f1; S=0x33016201; @synthesize=_performOnViewLoad
@property(assign, nonatomic) UIViewController *viewController;	// G=0x330161d1; S=0x330161e1; @synthesize=_viewController
- (id)initWithCoder:(id)coder;	// 0x33015de5
- (void)_perform:(id)perform;	// 0x330160c1
- (void)dealloc;	// 0x33015d6d
- (id)defaultSegueClassName;	// 0x33015f99
- (Class)effectiveSegueClass;	// 0x33015fa5
- (void)encodeWithCoder:(id)coder;	// 0x33015ed9
// declared property getter: - (id)identifier;	// 0x330161c1
- (void)perform:(id)perform;	// 0x3301615d
// declared property getter: - (BOOL)performOnViewLoad;	// 0x330161f1
- (id)segueWithDestinationViewController:(id)destinationViewController;	// 0x33016039
// declared property setter: - (void)setPerformOnViewLoad:(BOOL)load;	// 0x33016201
// declared property setter: - (void)setViewController:(id)controller;	// 0x330161e1
// declared property getter: - (id)viewController;	// 0x330161d1
@end

