/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSArray, NSURL, SAMPCollection;

@interface SAMPSetQueue : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSArray *filters;	// G=0x37953681; S=0x379536fd; 
@property(retain, nonatomic) SAMPCollection *mediaItems;	// G=0x37953765; S=0x379537b9; 
@property(copy, nonatomic) NSArray *sort;	// G=0x379537f5; S=0x37953871; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x379535a5; S=0x37953621; 
+ (id)setQueue;	// 0x37953515
+ (id)setQueueWithDictionary:(id)dictionary context:(id)context;	// 0x37953559
- (id)encodedClassName;	// 0x37953509
// declared property getter: - (id)filters;	// 0x37953681
- (id)groupIdentifier;	// 0x379534f9
// declared property getter: - (id)mediaItems;	// 0x37953765
- (BOOL)requiresResponse;	// 0x379538d9
// declared property setter: - (void)setFilters:(id)filters;	// 0x379536fd
// declared property setter: - (void)setMediaItems:(id)items;	// 0x379537b9
// declared property setter: - (void)setSort:(id)sort;	// 0x37953871
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x37953621
// declared property getter: - (id)sort;	// 0x379537f5
// declared property getter: - (id)targetAppId;	// 0x379535a5
@end

