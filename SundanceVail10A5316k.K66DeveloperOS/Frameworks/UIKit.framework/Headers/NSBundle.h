/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSBundle.h> // Unknown library


@interface NSBundle (UINSBundleAdditions)
- (id)loadNibNamed:(id)named owner:(id)owner options:(id)options;	// 0x302df1b5
@end

@interface NSBundle (UINSBundleLocalizableStringAdditions)
+ (id)currentNibLoadingBundle;	// 0x302df3d1
+ (id)currentNibPath;	// 0x302df30d
+ (void)popNibLoadingBundle;	// 0x302df3b5
+ (void)popNibPath;	// 0x302df2f1
+ (void)pushNibLoadingBundle:(id)bundle;	// 0x302df34d
+ (void)pushNibPath:(id)path;	// 0x302df265
@end

@interface NSBundle (UIKeyboardFactoryAdditions)
+ (id)_rivenBundle;	// 0x303e5299
+ (id)_rivenFactory;	// 0x303e5345
+ (id)_textInputFactory;	// 0x3016b891
+ (id)_typologyBundle;	// 0x303e51c1
@end
