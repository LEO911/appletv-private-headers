/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSOperation.h> // Unknown library

@class MPImageCache, MPImageModifier, UIColor, UIImage;
@protocol NSObject, MPImageRequestDelegate, NSCopying;

@interface MPImageCacheRequest : NSOperation {
	MPImageCache *_cache;	// 12 = 0xc
	id _completionHandler;	// 16 = 0x10
	int _contentMode;	// 20 = 0x14
	BOOL _decodeOnFetch;	// 24 = 0x18
	id<MPImageRequestDelegate> _delegate;	// 28 = 0x1c
	UIColor *_fillColor;	// 32 = 0x20
	CGSize _finalSize;	// 36 = 0x24
	MPImageModifier *_modifier;	// 44 = 0x2c
	id<NSObject, NSCopying> _uniqueKey;	// 48 = 0x30
	long long _tag;	// 52 = 0x34
}
@property(assign, nonatomic) MPImageCache *cache;	// G=0x3502dc31; S=0x3502dc41; @synthesize=_cache
@property(readonly, assign, nonatomic) BOOL canRequestSynchronously;	// G=0x3502ce25; 
@property(copy, nonatomic) id completionHandler;	// G=0x3502dc51; S=0x3502dc65; @synthesize=_completionHandler
@property(assign, nonatomic) int contentMode;	// G=0x3502dd01; S=0x3502dd11; @synthesize=_contentMode
@property(assign, nonatomic) BOOL decodeOnFetch;	// G=0x3502dd21; S=0x3502dd31; @synthesize=_decodeOnFetch
@property(assign, nonatomic) id<MPImageRequestDelegate> delegate;	// G=0x3502dc75; S=0x3502dc85; @synthesize=_delegate
@property(retain, nonatomic) UIColor *fillColor;	// G=0x3502dc95; S=0x3502dca5; @synthesize=_fillColor
@property(assign, nonatomic) CGSize finalSize;	// G=0x3502dcb5; S=0x3502dccd; @synthesize=_finalSize
@property(retain, nonatomic) MPImageModifier *modifier;	// G=0x3502dce1; S=0x3502dcf1; @synthesize=_modifier
@property(readonly, assign, nonatomic) UIImage *placeholderImage;	// G=0x3502ce29; 
@property(assign, nonatomic) long long tag;	// G=0x3502dd41; S=0x3502dd59; @synthesize=_tag
@property(retain, nonatomic) id<NSObject, NSCopying> uniqueKey;	// G=0x3502dd6d; S=0x3502dd7d; @synthesize=_uniqueKey
- (id)init;	// 0x3502c9f1
- (BOOL)_canUseInputImageAsFinalOutput:(id)output;	// 0x3502cb49
- (void)_getGeometryForCreatingNewImage:(id)creatingNewImage finalSize:(CGSize)size contentSize:(CGSize *)size3 contentSubRect:(CGRect *)rect imageFrame:(CGRect *)frame;	// 0x3502d049
- (id)_newBitmapImageFromImage:(id)image finalSize:(CGSize)size;	// 0x3502d459
- (void)_sendErrorToDelegate:(id)delegate;	// 0x3502d719
- (void)_sendImageToDelegate:(id)delegate;	// 0x3502d989
// declared property getter: - (id)cache;	// 0x3502dc31
// declared property getter: - (BOOL)canRequestSynchronously;	// 0x3502ce25
- (void)cancel;	// 0x3502cecd
// declared property getter: - (id)completionHandler;	// 0x3502dc51
// declared property getter: - (int)contentMode;	// 0x3502dd01
- (id)copyImageFromImage:(id)image;	// 0x3502cd61
- (id)copyRawImageReturningError:(id *)error;	// 0x3502ce19
- (void)dealloc;	// 0x3502cab9
// declared property getter: - (BOOL)decodeOnFetch;	// 0x3502dd21
// declared property getter: - (id)delegate;	// 0x3502dc75
- (id)description;	// 0x3502ca49
// declared property getter: - (id)fillColor;	// 0x3502dc95
// declared property getter: - (CGSize)finalSize;	// 0x3502dcb5
- (unsigned)hash;	// 0x3502ce2d
- (BOOL)isEqual:(id)equal;	// 0x3502ce55
- (void)main;	// 0x3502cf11
// declared property getter: - (id)modifier;	// 0x3502dce1
// declared property getter: - (id)placeholderImage;	// 0x3502ce29
// declared property setter: - (void)setCache:(id)cache;	// 0x3502dc41
// declared property setter: - (void)setCompletionHandler:(id)handler;	// 0x3502dc65
// declared property setter: - (void)setContentMode:(int)mode;	// 0x3502dd11
// declared property setter: - (void)setDecodeOnFetch:(BOOL)fetch;	// 0x3502dd31
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3502dc85
// declared property setter: - (void)setFillColor:(id)color;	// 0x3502dca5
// declared property setter: - (void)setFinalSize:(CGSize)size;	// 0x3502dccd
// declared property setter: - (void)setModifier:(id)modifier;	// 0x3502dcf1
// declared property setter: - (void)setTag:(long long)tag;	// 0x3502dd59
// declared property setter: - (void)setUniqueKey:(id)key;	// 0x3502dd7d
// declared property getter: - (long long)tag;	// 0x3502dd41
// declared property getter: - (id)uniqueKey;	// 0x3502dd6d
@end

