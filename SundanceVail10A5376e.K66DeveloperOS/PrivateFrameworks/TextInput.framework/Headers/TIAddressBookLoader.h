/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <NSObject.h> // Unknown library

@protocol TIAddressBookLoadable;

@interface TIAddressBookLoader : NSObject {
	id<TIAddressBookLoadable> _delegate;	// 4 = 0x4
}
@property(assign, nonatomic) id<TIAddressBookLoadable> delegate;	// G=0x315f8e81; S=0x315f8e91; @synthesize=_delegate
+ (id)addressBookLoaderWithDelegate:(id)delegate;	// 0x315f8af1
- (id)initWithDelegate:(id)delegate;	// 0x315f8b2d
- (void)addressBookChanged:(id)changed;	// 0x315f8e71
- (void)dealloc;	// 0x315f8bd1
// declared property getter: - (id)delegate;	// 0x315f8e81
- (void)loadAddressBook;	// 0x315f8c2d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x315f8e91
@end

