/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class ESDContainer;

__attribute__((visibility("hidden")))
@interface ESDObject : NSObject {
@private
	EshObject *mEshObject;	// 4 = 0x4
	ESDContainer *mParent;	// 8 = 0x8
	bool mIsChart;	// 12 = 0xc
}
@property(assign, getter=isChart) bool chart;	// G=0x3273e139; S=0x3289327d; converted property
- (id)initFromReader:(OcReader *)reader type:(unsigned short)type version:(unsigned short)version;	// 0x32819f91
- (id)initWithEshObject:(EshObject *)eshObject;	// 0x327b24d5
- (id)initWithType:(unsigned short)type;	// 0x327b1f71
- (void)dealloc;	// 0x327b60b9
- (id)ebInitWithType:(unsigned short)type version:(unsigned short)version state:(id)state;	// 0x3281a615
- (EshGroup *)eshGroup;	// 0x329e1129
- (EshObject *)eshObject;	// 0x3273cd29
- (EshShape *)eshShape;	// 0x3273e0f9
// converted property getter: - (bool)isChart;	// 0x3273e139
- (id)parent;	// 0x3286cb65
- (id)pbInitWithType:(unsigned short)type version:(unsigned short)version state:(id)state;	// 0x327e19bd
// converted property setter: - (void)setChart:(bool)chart;	// 0x3289327d
- (long)shapeID;	// 0x329e1165
@end
