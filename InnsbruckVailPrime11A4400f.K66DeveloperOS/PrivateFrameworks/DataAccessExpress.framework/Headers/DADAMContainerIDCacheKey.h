/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import "DataAccessExpress-Structs.h"
#import </libobjc.A.h>
#import "NSCopying.h"

@class NSString;

@interface DADAMContainerIDCacheKey : NSObject <NSCopying> {
	NSString *_accountID;	// 4 = 0x4
	int _dataclass;	// 8 = 0x8
}
@property(readonly, assign) NSString *accountID;	// G=0x30928d69; @synthesize=_accountID
@property(readonly, assign) int dataclass;	// G=0x30928d7d; @synthesize=_dataclass
- (id)initWithAccountID:(id)accountID andDataclass:(int)dataclass;	// 0x30928b19
// declared property getter: - (id)accountID;	// 0x30928d69
- (id)copyWithZone:(NSZone *)zone;	// 0x30928ca9
// declared property getter: - (int)dataclass;	// 0x30928d7d
- (void)dealloc;	// 0x30928b7d
- (id)description;	// 0x30928cfd
- (unsigned)hash;	// 0x30928c71
- (BOOL)isEqual:(id)equal;	// 0x30928bc9
@end

