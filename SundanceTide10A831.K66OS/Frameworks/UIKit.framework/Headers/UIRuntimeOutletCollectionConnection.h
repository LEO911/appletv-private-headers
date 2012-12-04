/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIRuntimeConnection.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIRuntimeOutletCollectionConnection : UIRuntimeConnection {
	NSString *runtimeCollectionClassName;	// 16 = 0x10
	BOOL addsContentToExistingCollection;	// 20 = 0x14
}
@property(assign) BOOL addsContentToExistingCollection;	// G=0x31f38589; S=0x31f385a1; @synthesize
@property(copy) NSString *runtimeCollectionClassName;	// G=0x31f38565; S=0x31f38579; @synthesize
- (id)initWithCoder:(id)coder;	// 0x31f38001
// declared property getter: - (BOOL)addsContentToExistingCollection;	// 0x31f38589
- (void)connect;	// 0x31f383ed
- (void)connectForSimulator;	// 0x31f383fd
- (void)dealloc;	// 0x31f38125
- (id)description;	// 0x31f384d1
- (void)encodeWithCoder:(id)coder;	// 0x31f3809d
- (void)performConnect;	// 0x31f38171
// declared property getter: - (id)runtimeCollectionClassName;	// 0x31f38565
// declared property setter: - (void)setAddsContentToExistingCollection:(BOOL)existingCollection;	// 0x31f385a1
// declared property setter: - (void)setRuntimeCollectionClassName:(id)name;	// 0x31f38579
@end
