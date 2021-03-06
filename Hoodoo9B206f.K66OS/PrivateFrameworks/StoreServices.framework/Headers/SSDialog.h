/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSString, NSDictionary, SSDialogButton;

@interface SSDialog : NSObject {
@private
	NSArray *_buttons;	// 4 = 0x4
	NSDictionary *_dialogDictionary;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *buttons;	// G=0x327e2769; 
@property(readonly, assign, nonatomic) SSDialogButton *defaultButton;	// G=0x327e29b5; 
@property(readonly, assign, nonatomic) NSDictionary *dialogDictionary;	// G=0x327e2b35; 
@property(readonly, assign, nonatomic) NSString *dialogKind;	// G=0x327e2b6d; 
@property(readonly, assign, nonatomic) NSString *message;	// G=0x327e2ab5; 
@property(readonly, assign, nonatomic) NSString *title;	// G=0x327e2ad1; 
- (id)init;	// 0x327e25d1
- (id)initWithDialogDictionary:(id)dialogDictionary;	// 0x327e25e5
// declared property getter: - (id)buttons;	// 0x327e2769
- (void)dealloc;	// 0x327e2709
// declared property getter: - (id)defaultButton;	// 0x327e29b5
// declared property getter: - (id)dialogDictionary;	// 0x327e2b35
// declared property getter: - (id)dialogKind;	// 0x327e2b6d
// declared property getter: - (id)message;	// 0x327e2ab5
// declared property getter: - (id)title;	// 0x327e2ad1
- (id)valueForProperty:(id)property;	// 0x327e2aed
@end

