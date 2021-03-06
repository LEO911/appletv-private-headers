/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface BRSubsetProvider : XXUnknownSuperclass <BRProvider> {
	id _provider;	// 4 = 0x4
	int _dataLimit;	// 8 = 0x8
}
@property(assign) int dataLimit;	// G=0x3589fd; S=0x3589d9; converted property
+ (id)providerWithProvider:(id)provider;	// 0x358649
+ (id)providerWithProvider:(id)provider dataLimit:(int)limit;	// 0x35865d
- (id)initWithProvider:(id)provider dataLimit:(int)limit;	// 0x3584c9
- (void)_providerUpdated:(id)updated;	// 0x358a0d
- (id)controlFactory;	// 0x3586ad
- (id)dataAtIndex:(long)index;	// 0x3587b1
- (long)dataCount;	// 0x3586cd
// converted property getter: - (int)dataLimit;	// 0x3589fd
- (void)dealloc;	// 0x3585cd
- (id)hashForDataAtIndex:(long)index;	// 0x3588c5
// converted property setter: - (void)setDataLimit:(int)limit;	// 0x3589d9
@end

