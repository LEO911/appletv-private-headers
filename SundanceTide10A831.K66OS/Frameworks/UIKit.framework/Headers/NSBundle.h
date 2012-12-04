/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSBundle.h> // Unknown library


@interface NSBundle (UINSBundleAdditions)
- (id)loadNibNamed:(id)named owner:(id)owner options:(id)options;	// 0x31d7714d
@end

@interface NSBundle (UINSBundleLocalizableStringAdditions)
+ (id)currentNibLoadingBundle;	// 0x31e5c031
+ (id)currentNibPath;	// 0x31e5bff1
+ (void)popNibLoadingBundle;	// 0x31d76791
+ (void)popNibPath;	// 0x31d76775
+ (void)pushNibLoadingBundle:(id)bundle;	// 0x31d6f681
+ (void)pushNibPath:(id)path;	// 0x31d6f6e9
@end

@interface NSBundle (UIKeyboardFactoryAdditions)
+ (id)_rivenBundle;	// 0x31f57e69
+ (id)_rivenFactory;	// 0x31f57f15
+ (id)_textInputFactory;	// 0x31cd095d
+ (id)_typologyBundle;	// 0x31f57d91
@end
