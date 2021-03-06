/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import "NSCopying.h"
#import </libobjc.A.h>

@class NSString, MSASAlbum;
@protocol NSObject;

@interface MSASPersonModelItem : NSObject <NSCopying> {
	int _errorCount;	// 4 = 0x4
	MSASAlbum *_album;	// 8 = 0x8
	NSString *_albumGUID;	// 12 = 0xc
	id<NSObject> _object;	// 16 = 0x10
}
@property(retain, nonatomic) MSASAlbum *album;	// G=0x30535651; S=0x30535661; @synthesize=_album
@property(retain, nonatomic) NSString *albumGUID;	// G=0x30535689; S=0x30535699; @synthesize=_albumGUID
@property(assign, nonatomic) int errorCount;	// G=0x30535631; S=0x30535641; @synthesize=_errorCount
@property(retain, nonatomic) id<NSObject> object;	// G=0x305356c1; S=0x305356d1; @synthesize=_object
- (void).cxx_destruct;	// 0x305356e5
// declared property getter: - (id)album;	// 0x30535651
// declared property getter: - (id)albumGUID;	// 0x30535689
- (id)copyWithZone:(NSZone *)zone;	// 0x30535535
// declared property getter: - (int)errorCount;	// 0x30535631
- (BOOL)isEqual:(id)equal;	// 0x30535465
// declared property getter: - (id)object;	// 0x305356c1
// declared property setter: - (void)setAlbum:(id)album;	// 0x30535661
// declared property setter: - (void)setAlbumGUID:(id)guid;	// 0x30535699
// declared property setter: - (void)setErrorCount:(int)count;	// 0x30535641
// declared property setter: - (void)setObject:(id)object;	// 0x305356d1
@end

