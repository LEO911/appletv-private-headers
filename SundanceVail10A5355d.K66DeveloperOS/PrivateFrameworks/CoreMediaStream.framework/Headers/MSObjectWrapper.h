/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library

@protocol NSObject, NSCoding;

@interface MSObjectWrapper : NSObject {
	long long _size;	// 4 = 0x4
	long long _uniqueID;	// 12 = 0xc
	id<NSObject, NSCoding> _object;	// 20 = 0x14
	int _errorCount;	// 24 = 0x18
}
@property(assign, nonatomic) int errorCount;	// G=0x33898bcd; S=0x33898bdd; @synthesize=_errorCount
@property(readonly, assign, nonatomic) id<NSCoding> object;	// G=0x33898bbd; @synthesize=_object
@property(assign, nonatomic) long long size;	// G=0x33898b65; S=0x33898b7d; @synthesize=_size
@property(assign, nonatomic) long long uniqueID;	// G=0x33898b91; S=0x33898ba9; @synthesize=_uniqueID
+ (int)indexOfObject:(id)object inWrapperArray:(id)wrapperArray;	// 0x33898815
+ (id)objectsFromWrappers:(id)wrappers;	// 0x338988d5
+ (id)objectsFromWrappers:(id)wrappers equalToObject:(id)object;	// 0x338989f9
+ (id)wrapperWithObject:(id)object size:(long long)size;	// 0x33898731
- (id)initWithObject:(id)object size:(long long)size;	// 0x3389878d
- (void).cxx_destruct;	// 0x33898bed
// declared property getter: - (int)errorCount;	// 0x33898bcd
// declared property getter: - (id)object;	// 0x33898bbd
// declared property setter: - (void)setErrorCount:(int)count;	// 0x33898bdd
// declared property setter: - (void)setSize:(long long)size;	// 0x33898b7d
// declared property setter: - (void)setUniqueID:(long long)anId;	// 0x33898ba9
// declared property getter: - (long long)size;	// 0x33898b65
// declared property getter: - (long long)uniqueID;	// 0x33898b91
@end

