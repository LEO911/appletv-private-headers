/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIDetector.h"

@class CIContext;

__attribute__((visibility("hidden")))
@interface CIFaceCoreDetector : CIDetector {
@private
	CIContext *context;	// 4 = 0x4
	void *faceCoreAPI;	// 8 = 0x8
}
@property(retain, nonatomic) CIContext *context;	// G=0x36ee682d; S=0x36ee683d; @synthesize
@property(assign) void *faceCoreAPI;	// G=0x36ee680d; S=0x36ee681d; @synthesize
- (id)initWithContext:(id)context options:(id)options;	// 0x36ee5ff1
- (id)adjustedImageFromImage:(id)image orientation:(int)orientation inverseCTM:(CGAffineTransform *)ctm;	// 0x36ee6a21
- (FaceCoreAPI *)api;	// 0x36ee6439
// declared property getter: - (id)context;	// 0x36ee682d
- (BOOL)createFaceCoreImage:(image *)image fromCIImage:(id)ciimage;	// 0x36ee6b21
- (CGAffineTransform)ctmForImageWithBounds:(CGRect)bounds orientation:(int)orientation;	// 0x36ee6861
- (void)dealloc;	// 0x36ee6449
// declared property getter: - (void *)faceCoreAPI;	// 0x36ee680d
- (id)featuresFromFaceVector:(vector<vision::lib::face, std::allocator<vision::lib::face> > *)faceVector ctm:(CGAffineTransform)ctm;	// 0x36ee6da1
- (id)featuresInImage:(id)image;	// 0x36ee67f9
- (id)featuresInImage:(id)image options:(id)options;	// 0x36ee6535
- (void)finalize;	// 0x36ee64c9
// declared property setter: - (void)setContext:(id)context;	// 0x36ee683d
// declared property setter: - (void)setFaceCoreAPI:(void *)api;	// 0x36ee681d
@end

