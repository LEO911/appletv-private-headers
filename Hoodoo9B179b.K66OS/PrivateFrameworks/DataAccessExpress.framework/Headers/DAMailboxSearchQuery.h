/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import "DataAccessExpress-Structs.h"
#import "DASearchQuery.h"

@class NSDate, NSString;

@interface DAMailboxSearchQuery : DASearchQuery {
	NSString *_collectionID;	// 32 = 0x20
	int _bodyType;	// 36 = 0x24
	long long _truncationSize;	// 40 = 0x28
	BOOL _allOrNone;	// 48 = 0x30
	NSDate *_priorToDate;	// 52 = 0x34
	int _MIMESupport;	// 56 = 0x38
	BOOL _deepTraversal;	// 60 = 0x3c
	BOOL _rebuildResults;	// 61 = 0x3d
}
@property(assign) int MIMESupport;	// G=0x35bd3625; S=0x35bd3635; @synthesize=_MIMESupport
@property(assign) BOOL allOrNone;	// G=0x35bd35cd; S=0x35bd35dd; @synthesize=_allOrNone
@property(assign) int bodyType;	// G=0x35bd3545; S=0x35bd3555; @synthesize=_bodyType
@property(retain) NSString *collectionID;	// G=0x35bd350d; S=0x35bd3521; @synthesize=_collectionID
@property(assign) BOOL deepTraversal;	// G=0x35bd3645; S=0x35bd3655; @synthesize=_deepTraversal
@property(retain) NSDate *priorToDate;	// G=0x35bd35ed; S=0x35bd3601; @synthesize=_priorToDate
@property(assign) BOOL rebuildResults;	// G=0x35bd3665; S=0x35bd3675; @synthesize=_rebuildResults
@property(assign) long long truncationSize;	// G=0x35bd3565; S=0x35bd3599; @synthesize=_truncationSize
+ (id)mailboxSearchQueryWithSearchString:(id)searchString consumer:(id)consumer;	// 0x35bd2fdd
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation consumer:(id)consumer;	// 0x35bd3139
- (id)initWithSearchString:(id)searchString consumer:(id)consumer;	// 0x35bd3029
// declared property getter: - (int)MIMESupport;	// 0x35bd3625
// declared property getter: - (BOOL)allOrNone;	// 0x35bd35cd
// declared property getter: - (int)bodyType;	// 0x35bd3545
// declared property getter: - (id)collectionID;	// 0x35bd350d
- (void)dealloc;	// 0x35bd30d9
// declared property getter: - (BOOL)deepTraversal;	// 0x35bd3645
- (id)dictionaryRepresentation;	// 0x35bd3325
// declared property getter: - (id)priorToDate;	// 0x35bd35ed
// declared property getter: - (BOOL)rebuildResults;	// 0x35bd3665
// declared property setter: - (void)setAllOrNone:(BOOL)none;	// 0x35bd35dd
// declared property setter: - (void)setBodyType:(int)type;	// 0x35bd3555
// declared property setter: - (void)setCollectionID:(id)anId;	// 0x35bd3521
// declared property setter: - (void)setDeepTraversal:(BOOL)traversal;	// 0x35bd3655
// declared property setter: - (void)setMIMESupport:(int)support;	// 0x35bd3635
// declared property setter: - (void)setPriorToDate:(id)date;	// 0x35bd3601
// declared property setter: - (void)setRebuildResults:(BOOL)results;	// 0x35bd3675
// declared property setter: - (void)setTruncationSize:(long long)size;	// 0x35bd3599
// declared property getter: - (long long)truncationSize;	// 0x35bd3565
@end

