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
@private
	NSString *runtimeCollectionClassName;	// 16 = 0x10
	BOOL addsContentToExistingCollection;	// 20 = 0x14
}
@property(assign) BOOL addsContentToExistingCollection;	// G=0x3320dd0d; S=0x3320dd1d; @synthesize
@property(copy) NSString *runtimeCollectionClassName;	// G=0x3320dcd5; S=0x3320dce9; @synthesize
- (id)initWithCoder:(id)coder;	// 0x3320d785
// declared property getter: - (BOOL)addsContentToExistingCollection;	// 0x3320dd0d
- (void)connect;	// 0x3320db6d
- (void)connectForSimulator;	// 0x3320db7d
- (void)dealloc;	// 0x3320d8a9
- (id)description;	// 0x3320dc41
- (void)encodeWithCoder:(id)coder;	// 0x3320d821
- (void)performConnect;	// 0x3320d8f5
// declared property getter: - (id)runtimeCollectionClassName;	// 0x3320dcd5
// declared property setter: - (void)setAddsContentToExistingCollection:(BOOL)existingCollection;	// 0x3320dd1d
// declared property setter: - (void)setRuntimeCollectionClassName:(id)name;	// 0x3320dce9
@end

