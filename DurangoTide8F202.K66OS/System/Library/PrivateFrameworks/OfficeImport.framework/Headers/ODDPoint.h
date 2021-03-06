/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADShapeProperties, ODDPointPropertySet, OADTextBody;

__attribute__((visibility("hidden")))
@interface ODDPoint : NSObject {
@private
	int mType;	// 4 = 0x4
	ODDPointPropertySet *mPropertySet;	// 8 = 0x8
	OADShapeProperties *mShapeProperties;	// 12 = 0xc
	OADTextBody *mText;	// 16 = 0x10
}
@property(retain) id text;	// G=0x31a6d319; S=0x31a6a299; converted property
@property(assign) int type;	// G=0x31a6ab65; S=0x31a69c89; converted property
+ (void)addConnectionToPoint:(id)point order:(unsigned long)order array:(id *)array;	// 0x31a6a999
- (id)init;	// 0x31a69b99
- (void)dealloc;	// 0x31a6eb61
- (id)propertySet;	// 0x31a69cb9
// converted property setter: - (void)setText:(id)text;	// 0x31a6a299
// converted property setter: - (void)setType:(int)type;	// 0x31a69c89
- (id)shapeProperties;	// 0x31a69ca9
// converted property getter: - (id)text;	// 0x31a6d319
// converted property getter: - (int)type;	// 0x31a6ab65
@end

