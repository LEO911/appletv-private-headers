/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADBlipCollection : NSObject {
@private
	NSMutableArray *mBlips;	// 4 = 0x4
}
@property(retain, nonatomic) NSMutableArray *blips;	// G=0x328c8b71; S=0x329d1709; @synthesize=mBlips
- (id)init;	// 0x327dec39
- (unsigned long)addBlip:(id)blip;	// 0x327f1869
- (id)blipAtIndex:(long)index;	// 0x327fab15
- (unsigned long)blipCount;	// 0x329d16e9
// declared property getter: - (id)blips;	// 0x328c8b71
- (void)dealloc;	// 0x327c4955
// declared property setter: - (void)setBlips:(id)blips;	// 0x329d1709
@end
