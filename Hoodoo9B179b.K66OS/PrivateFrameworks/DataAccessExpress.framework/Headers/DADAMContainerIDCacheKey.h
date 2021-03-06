/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import "DataAccessExpress-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSString;

@interface DADAMContainerIDCacheKey : NSObject <NSCopying> {
@private
	NSString *_accountID;	// 4 = 0x4
	int _dataclass;	// 8 = 0x8
}
@property(readonly, assign) NSString *accountID;	// G=0x35bca029; @synthesize=_accountID
@property(readonly, assign) int dataclass;	// G=0x35bca039; @synthesize=_dataclass
- (id)initWithAccountID:(id)accountID andDataclass:(int)dataclass;	// 0x35bc9dd9
// declared property getter: - (id)accountID;	// 0x35bca029
- (id)copyWithZone:(NSZone *)zone;	// 0x35bc9f69
// declared property getter: - (int)dataclass;	// 0x35bca039
- (void)dealloc;	// 0x35bc9e3d
- (id)description;	// 0x35bc9fbd
- (unsigned)hash;	// 0x35bc9f31
- (BOOL)isEqual:(id)equal;	// 0x35bc9e89
@end

