/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFlickrProvider.h"

@class ATVInternetPhotosAccount;

__attribute__((visibility("hidden")))
@interface ATVFlickrContactsProviderForAccount : ATVFlickrProvider {
	ATVInternetPhotosAccount *_account;	// 24 = 0x18
}
+ (id)providerForAccount:(id)account;	// 0x1b3dd9
- (id)initWithAccount:(id)account;	// 0x1b3e21
- (id)_data;	// 0x1b4069
- (BOOL)_handlesObject:(id)object;	// 0x1b4089
- (void)dealloc;	// 0x1b3f45
- (id)hashForDataAtIndex:(long)index;	// 0x1b4005
@end

