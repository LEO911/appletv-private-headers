/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "ABVCardParser.h"

@class NSData, NSMutableDictionary;

@interface ABVCardCardDAVParser : ABVCardParser {
@private
	NSMutableDictionary *_unknownAttributes;	// 160 = 0xa0
	BOOL _removeExistingProperties;	// 164 = 0xa4
	BOOL _localRecordHasAdditionalProperties;	// 165 = 0xa5
	int _lastCropRectX;	// 168 = 0xa8
	int _lastCropRectY;	// 172 = 0xac
	int _lastCropRectWidth;	// 176 = 0xb0
	int _lastCropRectHeight;	// 180 = 0xb4
	NSData *_lastCropRectChecksum;	// 184 = 0xb8
}
@property(readonly, assign) NSData *lastCropRectChecksum;	// G=0x35aa4845; @synthesize=_lastCropRectChecksum
@property(readonly, assign) int lastCropRectHeight;	// G=0x35aa4855; @synthesize=_lastCropRectHeight
@property(readonly, assign) int lastCropRectWidth;	// G=0x35aa4865; @synthesize=_lastCropRectWidth
@property(readonly, assign) int lastCropRectX;	// G=0x35aa4885; @synthesize=_lastCropRectX
@property(readonly, assign) int lastCropRectY;	// G=0x35aa4875; @synthesize=_lastCropRectY
@property(readonly, assign) BOOL localRecordHasAdditionalProperties;	// G=0x35aa4895; @synthesize=_localRecordHasAdditionalProperties
- (id)initWithData:(id)data;	// 0x35aaba61
- (BOOL)_handleUnknownTag:(id)tag withValue:(id)value;	// 0x35aa776d
- (void)cleanUpCardState;	// 0x35aabad1
- (void *)createRecordInSource:(void *)source outRecordType:(unsigned *)type;	// 0x35aabca5
- (void)dealloc;	// 0x35aabdb5
- (id)defaultADRLabel;	// 0x35aa483d
- (id)defaultLabel;	// 0x35aa4839
- (id)defaultURLLabel;	// 0x35aa4841
- (id)genericLabel;	// 0x35aa7709
- (BOOL)importToGroup:(void *)group removeExistingProperties:(BOOL)properties;	// 0x35aa7f89
- (BOOL)importToPerson:(void *)person removeExistingProperties:(BOOL)properties;	// 0x35aa787d
// declared property getter: - (id)lastCropRectChecksum;	// 0x35aa4845
// declared property getter: - (int)lastCropRectHeight;	// 0x35aa4855
// declared property getter: - (int)lastCropRectWidth;	// 0x35aa4865
// declared property getter: - (int)lastCropRectX;	// 0x35aa4885
// declared property getter: - (int)lastCropRectY;	// 0x35aa4875
// declared property getter: - (BOOL)localRecordHasAdditionalProperties;	// 0x35aa4895
- (void)noteLackOfValueForImageData;	// 0x35aa806d
- (void)noteLackOfValueForProperty:(unsigned)property;	// 0x35aabbb1
- (BOOL)parseUID;	// 0x35aa7719
- (void)setLocalRecordHasAdditionalProperties:(BOOL)properties;	// 0x35aa4829
@end

