/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import <NSObject.h> // Unknown library
#import "DataAccessExpress-Structs.h"

@class NSString;
@protocol DASearchQueryConsumer;

@interface DASearchQuery : NSObject {
	int _state;	// 4 = 0x4
	NSString *_searchString;	// 8 = 0x8
	NSRange _range;	// 12 = 0xc
	int _timeLimit;	// 20 = 0x14
	unsigned _searchID;	// 24 = 0x18
	id<DASearchQueryConsumer> _consumer;	// 28 = 0x1c
}
@property(assign) id<DASearchQueryConsumer> consumer;	// G=0x35f60db9; S=0x35f60dc9; @synthesize=_consumer
@property(assign) unsigned maxResults;	// G=0x35f60cf1; S=0x35f60d05; 
@property(assign) NSRange range;	// G=0x35f60d49; S=0x35f60d65; @synthesize=_range
@property(assign) unsigned searchID;	// G=0x35f60d19; S=0x35f60d29; @synthesize=_searchID
@property(readonly, assign) NSString *searchString;	// G=0x35f60d39; @synthesize=_searchString
@property(assign) int state;	// G=0x35f60d99; S=0x35f60da9; @synthesize=_state
@property(assign) int timeLimit;	// G=0x35f60d79; S=0x35f60d89; @synthesize=_timeLimit
+ (id)searchQueryWithSearchString:(id)searchString consumer:(id)consumer;	// 0x35f6083d
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation consumer:(id)consumer;	// 0x35f60a09
- (id)initWithSearchString:(id)searchString consumer:(id)consumer;	// 0x35f60889
// declared property getter: - (id)consumer;	// 0x35f60db9
- (void)dealloc;	// 0x35f60939
- (id)description;	// 0x35f60995
- (id)dictionaryRepresentation;	// 0x35f60bbd
- (BOOL)isQueryRunning;	// 0x35f60b2d
// declared property getter: - (unsigned)maxResults;	// 0x35f60cf1
// declared property getter: - (NSRange)range;	// 0x35f60d49
// declared property getter: - (unsigned)searchID;	// 0x35f60d19
// declared property getter: - (id)searchString;	// 0x35f60d39
- (void)sendFinishedToConsumerWithError:(id)error;	// 0x35f60b81
- (void)sendResultsToConsumer:(id)consumer;	// 0x35f60b45
// declared property setter: - (void)setConsumer:(id)consumer;	// 0x35f60dc9
// declared property setter: - (void)setMaxResults:(unsigned)results;	// 0x35f60d05
// declared property setter: - (void)setRange:(NSRange)range;	// 0x35f60d65
// declared property setter: - (void)setSearchID:(unsigned)anId;	// 0x35f60d29
// declared property setter: - (void)setState:(int)state;	// 0x35f60da9
// declared property setter: - (void)setTimeLimit:(int)limit;	// 0x35f60d89
// declared property getter: - (int)state;	// 0x35f60d99
// declared property getter: - (int)timeLimit;	// 0x35f60d79
@end
