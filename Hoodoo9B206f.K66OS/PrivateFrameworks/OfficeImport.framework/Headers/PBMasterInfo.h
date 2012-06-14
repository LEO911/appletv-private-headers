/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSDictionary, PDSlideMaster;

__attribute__((visibility("hidden")))
@interface PBMasterInfo : NSObject {
@private
	PDSlideMaster *mSlideMaster;	// 4 = 0x4
	NSMutableArray *mTgtSlideLayoutArray;	// 8 = 0x8
	unsigned mMainPbRef;	// 12 = 0xc
	unsigned mTitlePbRef;	// 16 = 0x10
	NSDictionary *mLayoutMap;	// 20 = 0x14
	ChVector<PBReaderMasterStyleInfo> *mSrcTextStyling;	// 24 = 0x18
}
@property(assign) unsigned long mainPbRef;	// G=0x34590951; S=0x34433815; converted property
@property(retain) id slideMaster;	// G=0x3443702d; S=0x344337d5; converted property
@property(assign) unsigned long titlePbRef;	// G=0x34590961; S=0x3443701d; converted property
- (id)init;	// 0x34433731
- (id)allTargetLayoutTypes;	// 0x3443872d
- (void)cacheSlideLayouts;	// 0x34438bf1
- (void)cacheTargetLayoutType:(int)type;	// 0x3443743d
- (void)dealloc;	// 0x34402aa5
// converted property getter: - (unsigned long)mainPbRef;	// 0x34590951
// converted property setter: - (void)setMainPbRef:(unsigned long)ref;	// 0x34433815
// converted property setter: - (void)setSlideMaster:(id)master;	// 0x344337d5
// converted property setter: - (void)setTitlePbRef:(unsigned long)ref;	// 0x3443701d
- (id)slideLayoutForSlideHolder:(id)slideHolder;	// 0x3437d141
// converted property getter: - (id)slideMaster;	// 0x3443702d
- (ChVector<PBReaderMasterStyleInfo> *)sourceTextStyling;	// 0x3437d339
// converted property getter: - (unsigned long)titlePbRef;	// 0x34590961
@end
