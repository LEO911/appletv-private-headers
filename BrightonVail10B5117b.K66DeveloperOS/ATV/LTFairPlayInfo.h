/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface LTFairPlayInfo : XXUnknownSuperclass {
	id _sessionToken;	// 4 = 0x4
	NSString *_keyBagPath;	// 8 = 0x8
}
@property(readonly, retain) NSString *keyBagPath;	// G=0x1f305; converted property
@property(readonly, retain) id sessionToken;	// G=0x1f2f1; converted property
+ (id)infoWithToken:(id)token keyBagPath:(id)path;	// 0x1f199
- (id)initWithToken:(id)token keyBagPath:(id)path;	// 0x1f205
- (void).cxx_destruct;	// 0x1f319
- (id)description;	// 0x1f29d
// converted property getter: - (id)keyBagPath;	// 0x1f305
// converted property getter: - (id)sessionToken;	// 0x1f2f1
@end

