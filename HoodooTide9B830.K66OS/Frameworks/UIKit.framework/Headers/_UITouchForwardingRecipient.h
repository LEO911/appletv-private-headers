/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIResponder;

__attribute__((visibility("hidden")))
@interface _UITouchForwardingRecipient : NSObject {
@private
	UIResponder *fromResponder;	// 4 = 0x4
	UIResponder *responder;	// 8 = 0x8
	int recordedPhase;	// 12 = 0xc
	int autocompletedPhase;	// 16 = 0x10
}
@property(assign, nonatomic) int autocompletedPhase;	// G=0x30178101; S=0x30171dfd; @synthesize
@property(assign, nonatomic) UIResponder *fromResponder;	// G=0x301446ad; S=0x3024deb1; @synthesize
@property(assign, nonatomic) int recordedPhase;	// G=0x30171ded; S=0x30142195; @synthesize
@property(assign, nonatomic) UIResponder *responder;	// G=0x3014469d; S=0x3024dec1; @synthesize
- (id)initWithResponder:(id)responder fromResponder:(id)responder2;	// 0x30142145
// declared property getter: - (int)autocompletedPhase;	// 0x30178101
- (id)description;	// 0x3024dda9
// declared property getter: - (id)fromResponder;	// 0x301446ad
// declared property getter: - (int)recordedPhase;	// 0x30171ded
// declared property getter: - (id)responder;	// 0x3014469d
// declared property setter: - (void)setAutocompletedPhase:(int)phase;	// 0x30171dfd
// declared property setter: - (void)setFromResponder:(id)responder;	// 0x3024deb1
// declared property setter: - (void)setRecordedPhase:(int)phase;	// 0x30142195
// declared property setter: - (void)setResponder:(id)responder;	// 0x3024dec1
@end
