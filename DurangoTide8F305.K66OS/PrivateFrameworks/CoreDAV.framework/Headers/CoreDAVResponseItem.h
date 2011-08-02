/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableArray, NSMutableSet, CoreDAVLeafItem, CoreDAVItemWithHrefChildItem, CoreDAVErrorItem;

@interface CoreDAVResponseItem : CoreDAVItem {
	NSMutableArray *_hrefs;	// 24 = 0x18
	CoreDAVLeafItem *_status;	// 28 = 0x1c
	NSMutableSet *_propStats;	// 32 = 0x20
	CoreDAVErrorItem *_errorItem;	// 36 = 0x24
	CoreDAVLeafItem *_responseDescription;	// 40 = 0x28
	CoreDAVItemWithHrefChildItem *_location;	// 44 = 0x2c
}
@property(retain) CoreDAVErrorItem *errorItem;	// G=0x33871c61; S=0x33871d2d; @synthesize=_errorItem
@property(retain) NSMutableArray *hrefs;	// G=0x33871c19; S=0x33871ca9; @synthesize=_hrefs
@property(retain) CoreDAVItemWithHrefChildItem *location;	// G=0x33871c91; S=0x33871d85; @synthesize=_location
@property(retain) NSMutableSet *propStats;	// G=0x33871c49; S=0x33871d01; @synthesize=_propStats
@property(retain) CoreDAVLeafItem *responseDescription;	// G=0x33871c79; S=0x33871d59; @synthesize=_responseDescription
@property(retain) CoreDAVLeafItem *status;	// G=0x33871c31; S=0x33871cd5; @synthesize=_status
- (id)init;	// 0x33871409
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x33871649
- (void)addHref:(id)href;	// 0x338710c9
- (void)addPropStat:(id)stat;	// 0x338710f1
- (id)copyParseRules;	// 0x33871119
- (void)dealloc;	// 0x338715b1
- (id)description;	// 0x33871435
// declared property getter: - (id)errorItem;	// 0x33871c61
- (id)firstHref;	// 0x338710a5
- (void)generateItemTreeString:(id)string withDepth:(unsigned)depth;	// 0x33871729
- (BOOL)hasPropertyError;	// 0x33871905
// declared property getter: - (id)hrefs;	// 0x33871c19
// declared property getter: - (id)location;	// 0x33871c91
// declared property getter: - (id)propStats;	// 0x33871c49
// declared property getter: - (id)responseDescription;	// 0x33871c79
// declared property setter: - (void)setErrorItem:(id)item;	// 0x33871d2d
// declared property setter: - (void)setHrefs:(id)hrefs;	// 0x33871ca9
// declared property setter: - (void)setLocation:(id)location;	// 0x33871d85
// declared property setter: - (void)setPropStats:(id)stats;	// 0x33871d01
// declared property setter: - (void)setResponseDescription:(id)description;	// 0x33871d59
// declared property setter: - (void)setStatus:(id)status;	// 0x33871cd5
// declared property getter: - (id)status;	// 0x33871c31
- (id)successfulPropertiesToValues;	// 0x338719f5
@end
