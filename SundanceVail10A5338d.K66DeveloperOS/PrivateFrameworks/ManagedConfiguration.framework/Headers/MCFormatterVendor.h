/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library

@class NSNumberFormatter;
@protocol OS_dispatch_queue;

@interface MCFormatterVendor : NSObject {
	NSNumberFormatter *_numberFormatter;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_syncQueue;	// 8 = 0x8
}
@property(readonly, retain) NSNumberFormatter *numberFormatter;	// G=0x3364e019; converted property
+ (id)sharedInstance;	// 0x3364df99
- (id)init;	// 0x3364e199
- (void).cxx_destruct;	// 0x3364e2d5
- (void)_localeDidChange:(id)_locale;	// 0x3364e111
- (void)dealloc;	// 0x3364e269
// converted property getter: - (id)numberFormatter;	// 0x3364e019
@end

