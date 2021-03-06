/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreText.framework/CoreText
 */

#import <NSObject.h> // Unknown library
#import "CoreText-Structs.h"

@class NSMutableDictionary, NSSet;

@interface FontAssetDownloadManager : NSObject {
	TCFRef<const __CFArray *> fDescriptors;	// 4 = 0x4
	TCFRef<const __CFSet *> fMandatoryAttributes;	// 8 = 0x8
	id fProgressCallbackBlock;	// 12 = 0xc
	NSMutableDictionary *fProgressParams;	// 16 = 0x10
	NSMutableDictionary *fDownloadOptions;	// 20 = 0x14
	NSSet *fPreciousFontLanguages;	// 24 = 0x18
}
+ (id)availableFontAttributesArray;	// 0x3186b839
+ (id)displayNameForCurrentUser:(id)currentUser;	// 0x3186b6b9
+ (id)enabledKeyboardLanguages;	// 0x3186b481
+ (Class)getASAssetQueryClass;	// 0x3186af15
+ (BOOL)shouldTryServer;	// 0x318698c1
- (id)initWithDescriptors:(CFArrayRef)descriptors andMandatoryAttributes:(CFSetRef)attributes withBlock:(id)block;	// 0x31868f31
- (id).cxx_construct;	// 0x3186bc99
- (void).cxx_destruct;	// 0x3186bc5d
- (BOOL)activateFontsFromAssetURL:(id)assetURL;	// 0x3186ad91
- (BOOL)assetStalled:(id)stalled;	// 0x31869e0d
- (id)availableMobileAssets:(BOOL)assets error:(id *)error;	// 0x31869579
- (unsigned long)calculateDownloadSize:(id)size;	// 0x31869c75
- (BOOL)callProgressCallbak:(unsigned)callbak;	// 0x31869145
- (void)dealloc;	// 0x31869029
- (id)doFinalMatching;	// 0x3186aad5
- (void)downloadFontAssets;	// 0x31869279
- (BOOL)executeDownloadingFontAssets:(id)assets forDescriptors:(id)descriptors andFontFilePaths:(id)paths;	// 0x31869f4d
- (id)extractMatchingAssetsForDescriptor:(CTFontDescriptorRef)descriptor from:(id)from withFailInfo:(BOOL *)failInfo andFontFilePaths:(id)paths;	// 0x31869611
- (id)getUnmatchedDescriptors;	// 0x31869399
- (id)mobileAssetsForUnmatched:(id)unmatched andFontFilePaths:(id)paths;	// 0x31869929
- (id)preciousFontLanguages;	// 0x3186b355
- (void)setDownloadOptionsForMobileAsset;	// 0x318690e5
- (void)setGarbageCollectionBehaviorForAsset:(id)asset;	// 0x3186b23d
- (void)setProgressParam:(id)param forKey:(id)key;	// 0x31869245
@end

