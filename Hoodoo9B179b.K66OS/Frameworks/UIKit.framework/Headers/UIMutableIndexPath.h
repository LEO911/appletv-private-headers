/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSIndexPath.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UIMutableIndexPath : NSIndexPath {
@private
	unsigned *_mutableIndexes;	// 20 = 0x14
}
- (id)initWithIndexes:(unsigned *)indexes length:(unsigned)length;	// 0x32f39809
- (int)compare:(id)compare;	// 0x3311ad85
- (id)copy;	// 0x3311ae39
- (void)dealloc;	// 0x3311ad01
- (id)description;	// 0x3311ae99
- (void)getIndexes:(unsigned *)indexes;	// 0x3311ad45
- (unsigned)indexAtPosition:(unsigned)position;	// 0x32f398a9
- (void)setIndex:(unsigned)index atPosition:(unsigned)position;	// 0x32f39871
@end

