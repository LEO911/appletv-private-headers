/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFlickrProvider.h"

@class ATVInternetPhotosAccount;

__attribute__((visibility("hidden")))
@interface ATVFlickrProviderForAccount : ATVFlickrProvider {
	ATVInternetPhotosAccount *_account;	// 24 = 0x18
}
+ (id)providerForAccount:(id)account;	// 0x1b8e61
- (id)initWithAccount:(id)account;	// 0x1b8ea9
- (id)_data;	// 0x1b90f1
- (BOOL)_handlesObject:(id)object;	// 0x1b9111
- (void)dealloc;	// 0x1b8fcd
- (id)hashForDataAtIndex:(long)index;	// 0x1b908d
@end
