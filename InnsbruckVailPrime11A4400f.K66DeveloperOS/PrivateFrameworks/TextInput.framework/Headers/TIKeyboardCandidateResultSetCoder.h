/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import </libobjc.A.h>

@class NSMutableData, NSData;

@interface TIKeyboardCandidateResultSetCoder : NSObject {
	NSMutableData *_mutableData;	// 4 = 0x4
	NSData *_data;	// 8 = 0x8
	unsigned _offset;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) const char *bytes;	// G=0x32a102ed; 
@property(readonly, assign, nonatomic) const char *currentPosition;	// G=0x32a10315; 
@property(retain, nonatomic) NSData *data;	// G=0x32a118b9; S=0x32a118c9; @synthesize=_data
@property(retain, nonatomic) NSMutableData *mutableData;	// G=0x32a11899; S=0x32a118a9; @synthesize=_mutableData
@property(assign, nonatomic) unsigned offset;	// G=0x32a118d9; S=0x32a118e9; @synthesize=_offset
+ (id)candidateTypeToClassNameMap;	// 0x32a0fe9d
+ (Class)classFromCandidateType:(int)candidateType;	// 0x32a10005
+ (id)decodeWithData:(id)data;	// 0x32a10155
+ (id)encodeWithCandidateResultSet:(id)candidateResultSet;	// 0x32a100fd
- (id)initForDecodingWithData:(id)data;	// 0x32a101ed
- (id)initForEncoding;	// 0x32a101ad
- (id)initWithData:(id)data mutableData:(id)data2;	// 0x32a10201
// declared property getter: - (const char *)bytes;	// 0x32a102ed
- (id)candidateResultSet;	// 0x32a1120d
// declared property getter: - (const char *)currentPosition;	// 0x32a10315
// declared property getter: - (id)data;	// 0x32a118b9
- (id)dataFromCandidateResultSet:(id)candidateResultSet;	// 0x32a1082d
- (void)dealloc;	// 0x32a10289
- (BOOL)decodeBool;	// 0x32a103ed
- (unsigned char)decodeByte;	// 0x32a1043d
- (id)decodeCandidate;	// 0x32a10345
- (unsigned short)decodeShort;	// 0x32a104b5
- (id)decodeString;	// 0x32a10659
- (id)decodeStringArray;	// 0x32a107b5
- (unsigned)decodeUInt32;	// 0x32a10529
- (unsigned long long)decodeUInt64;	// 0x32a105a9
- (void)encodeBool:(BOOL)aBool;	// 0x32a103d5
- (void)encodeByte:(unsigned char)byte;	// 0x32a10409
- (void)encodeShort:(unsigned short)aShort;	// 0x32a10481
- (void)encodeString:(id)string;	// 0x32a105fd
- (void)encodeStringArray:(id)array;	// 0x32a106c5
- (void)encodeUInt32:(unsigned)a32;	// 0x32a104f9
- (void)encodeUInt64:(unsigned long long)a64;	// 0x32a1056d
// declared property getter: - (id)mutableData;	// 0x32a11899
// declared property getter: - (unsigned)offset;	// 0x32a118d9
// declared property setter: - (void)setData:(id)data;	// 0x32a118c9
// declared property setter: - (void)setMutableData:(id)data;	// 0x32a118a9
// declared property setter: - (void)setOffset:(unsigned)offset;	// 0x32a118e9
@end
