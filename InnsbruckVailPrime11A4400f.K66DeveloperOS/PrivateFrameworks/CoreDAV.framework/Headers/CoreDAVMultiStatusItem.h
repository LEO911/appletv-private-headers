/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSSet, NSMutableArray, CoreDAVLeafItem;

@interface CoreDAVMultiStatusItem : CoreDAVItem {
	NSMutableArray *_orderedResponses;	// 28 = 0x1c
	CoreDAVLeafItem *_responseDescription;	// 32 = 0x20
}
@property(retain) NSMutableArray *orderedResponses;	// G=0x3049cc39; S=0x3049cc4d; @synthesize=_orderedResponses
@property(retain) CoreDAVLeafItem *responseDescription;	// G=0x3049cc5d; S=0x3049cc71; @synthesize=_responseDescription
@property(readonly, assign) NSSet *responses;	// G=0x3049cc01; 
+ (id)copyParseRules;	// 0x3049c951
- (id)init;	// 0x3049c7d1
- (void)addResponse:(id)response;	// 0x3049cb69
- (void)dealloc;	// 0x3049c801
- (id)description;	// 0x3049c865
// declared property getter: - (id)orderedResponses;	// 0x3049cc39
// declared property getter: - (id)responseDescription;	// 0x3049cc5d
// declared property getter: - (id)responses;	// 0x3049cc01
// declared property setter: - (void)setOrderedResponses:(id)responses;	// 0x3049cc4d
// declared property setter: - (void)setResponseDescription:(id)description;	// 0x3049cc71
@end

