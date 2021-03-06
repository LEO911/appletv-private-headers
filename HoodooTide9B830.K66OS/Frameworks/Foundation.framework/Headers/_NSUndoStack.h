/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class _NSUndoObject;

__attribute__((visibility("hidden")))
@interface _NSUndoStack : NSObject {
@private
	unsigned _max;	// 4 = 0x4
	unsigned _count;	// 8 = 0x8
	unsigned _nestingLevel;	// 12 = 0xc
	_NSUndoObject *_head;	// 16 = 0x10
}
@property(readonly, assign) unsigned count;	// G=0x315b9421; converted property
@property(assign, getter=isDiscardable) BOOL discardable;	// G=0x315aef51; S=0x3163c241; converted property
@property(retain) id groupIdentifier;	// G=0x3163c211; S=0x315ae975; converted property
@property(assign) unsigned max;	// G=0x3163c201; S=0x315acb9d; converted property
@property(readonly, assign) unsigned nestingLevel;	// G=0x315ae46d; converted property
- (id)init;	// 0x315acb41
- (id)_beginMark;	// 0x315aea15
- (void)_removeBottom;	// 0x3163c0e9
// converted property getter: - (unsigned)count;	// 0x315b9421
- (void)dealloc;	// 0x315b5971
- (id)description;	// 0x3163c409
// converted property getter: - (id)groupIdentifier;	// 0x3163c211
// converted property getter: - (BOOL)isDiscardable;	// 0x315aef51
- (void)markBegin;	// 0x315ae66d
- (void)markEnd;	// 0x315aef91
// converted property getter: - (unsigned)max;	// 0x3163c201
// converted property getter: - (unsigned)nestingLevel;	// 0x315ae46d
- (BOOL)popAndInvoke;	// 0x3163c2e1
- (id)popUndoObject;	// 0x315b59c9
- (void)push:(id)push;	// 0x315ae6e1
- (void)removeAllObjects;	// 0x315acc85
- (void)removeAllObjectsWithTarget:(id)target;	// 0x315af079
- (void)removeObject:(id)object;	// 0x315af23d
// converted property setter: - (void)setDiscardable:(BOOL)discardable;	// 0x3163c241
// converted property setter: - (void)setGroupIdentifier:(id)identifier;	// 0x315ae975
// converted property setter: - (void)setMax:(unsigned)max;	// 0x315acb9d
- (id)topUndoObject;	// 0x315aef41
@end

