/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import </libobjc.A.h>

@class NSString;

@interface OpenURLTarget : NSObject {
	unsigned _applicationState;	// 4 = 0x4
	struct {
		NSString *clientIdentifier;
		NSString *normalScheme;
		NSString *secureScheme;
	} _targetData;	// 8 = 0x8
	int _targetIndex;	// 20 = 0x14
}
- (id)init;	// 0x33c8b785
- (id)initWithTargetIdentifier:(id)targetIdentifier;	// 0x33c8b799
- (int)compare:(id)compare;	// 0x33c8b889
- (id)copyURLForURL:(id)url;	// 0x33c8b8f5
- (id)description;	// 0x33c8ba1d
@end
