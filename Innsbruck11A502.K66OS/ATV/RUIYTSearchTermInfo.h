/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDate;

__attribute__((visibility("hidden")))
@interface RUIYTSearchTermInfo : XXUnknownSuperclass <NSCoding> {
	NSString *_searchTerm;	// 4 = 0x4
	NSDate *_timestamp;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *searchTerm;	// G=0x29d1c5; S=0x29d1d5; @synthesize=_searchTerm
@property(retain, nonatomic) NSDate *timestamp;	// G=0x29d1fd; S=0x29d20d; @synthesize=_timestamp
- (id)initWithCoder:(id)coder;	// 0x29d0fd
- (void).cxx_destruct;	// 0x29d235
- (void)encodeWithCoder:(id)coder;	// 0x29d1b9
- (unsigned)hash;	// 0x29d1c1
- (BOOL)isEqual:(id)equal;	// 0x29d1bd
// declared property getter: - (id)searchTerm;	// 0x29d1c5
// declared property setter: - (void)setSearchTerm:(id)term;	// 0x29d1d5
// declared property setter: - (void)setTimestamp:(id)timestamp;	// 0x29d20d
// declared property getter: - (id)timestamp;	// 0x29d1fd
@end
