/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


@interface UIActivity : NSObject {
	id _activityCompletionHandler;	// 4 = 0x4
}
@property(copy, nonatomic) id activityCompletionHandler;	// G=0x330d8349; S=0x32e2f60d; @synthesize=_activityCompletionHandler
+ (id)_activityFunctionImage:(id)image;	// 0x32e1f971
+ (id)_activityGenericImage:(id)image;	// 0x32e1f759
+ (id)_activityImageForApplication:(id)application;	// 0x32e1eead
+ (id)_activityImageForPrerenderedImage:(id)prerenderedImage;	// 0x330d8361
- (id)_activityImage;	// 0x32e213c1
- (id)_beforeActivity;	// 0x32e1dd21
- (BOOL)_canAdjustOrder;	// 0x330d83ed
- (BOOL)_canPerformWithSuppliedActivityItems:(id)suppliedActivityItems;	// 0x330d83e5
- (void)_cleanup;	// 0x330d83f9
- (BOOL)_dismissActivityFromViewController:(id)viewController animated:(BOOL)animated completion:(id)completion;	// 0x32e2f141
- (id)_embeddedActivityViewController;	// 0x330d83f5
- (BOOL)_presentActivityOnViewController:(id)controller animated:(BOOL)animated completion:(id)completion;	// 0x32e24e0d
- (void)_setActivityCompletionHandler:(id)handler;	// 0x32e23689
- (void)_setSubject:(id)subject;	// 0x330d83fd
// declared property getter: - (id)activityCompletionHandler;	// 0x330d8349
- (void)activityDidFinish:(BOOL)activity;	// 0x32e2ed99
- (id)activityImage;	// 0x330d8325
- (id)activityTitle;	// 0x330d8321
- (id)activityType;	// 0x330d831d
- (id)activityViewController;	// 0x330d8331
- (BOOL)canPerformWithActivityItems:(id)activityItems;	// 0x330d8329
- (void)dealloc;	// 0x32e2f789
- (void)performActivity;	// 0x330d8335
- (void)prepareWithActivityItems:(id)activityItems;	// 0x330d832d
// declared property setter: - (void)setActivityCompletionHandler:(id)handler;	// 0x32e2f60d
@end

