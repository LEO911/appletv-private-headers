/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface PptMetaCharacterBlock : NSObject {
@private
	int mType;	// 4 = 0x4
	int mPosition;	// 8 = 0x8
}
@property(assign) int position;	// G=0x343f7ea5; S=0x345863b5; converted property
- (id)initWithType:(int)type position:(int)position;	// 0x343f7e31
// converted property getter: - (int)position;	// 0x343f7ea5
// converted property setter: - (void)setPosition:(int)position;	// 0x345863b5
- (int)type;	// 0x343f7eb5
@end
