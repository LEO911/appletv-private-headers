/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class ISOperation, ISDialog, NSString;

__attribute__((visibility("hidden")))
@interface PurchaseResponseInfo : NSObject {
@private
	ISDialog *_dialog;	// 4 = 0x4
	NSString *_changedBuyParameters;	// 8 = 0x8
	ISOperation *_intermediateOperation;	// 12 = 0xc
}
@property(retain, nonatomic) NSString *changedBuyParameters;	// G=0x3040a529; S=0x3040a539; @synthesize=_changedBuyParameters
@property(retain, nonatomic) ISDialog *dialog;	// G=0x3040a4f5; S=0x3040a505; @synthesize=_dialog
@property(retain, nonatomic) ISOperation *intermediateOperation;	// G=0x3040a55d; S=0x3040a56d; @synthesize=_intermediateOperation
// declared property getter: - (id)changedBuyParameters;	// 0x3040a529
- (void)dealloc;	// 0x3040a419
// declared property getter: - (id)dialog;	// 0x3040a4f5
// declared property getter: - (id)intermediateOperation;	// 0x3040a55d
- (void)reset;	// 0x3040a4ad
// declared property setter: - (void)setChangedBuyParameters:(id)parameters;	// 0x3040a539
// declared property setter: - (void)setDialog:(id)dialog;	// 0x3040a505
// declared property setter: - (void)setIntermediateOperation:(id)operation;	// 0x3040a56d
@end
