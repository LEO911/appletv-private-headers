/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import "BRPhotoProvider.h"
#import "BRPhotoProviderForCollection.h"

@class BRPhotoMediaCollection;

@protocol BRPhotoProviderForCollection <BRProvider>
@property(assign) BOOL vendPhotoDataOnly;	// converted property
- (BOOL)canHaveZeroData;
- (id)collection;
// converted property setter: - (void)setVendPhotoDataOnly:(BOOL)only;
// converted property getter: - (BOOL)vendPhotoDataOnly;
@end

__attribute__((visibility("hidden")))
@interface BRPhotoProviderForCollection : BRPhotoProvider <BRPhotoProviderForCollection> {
	BRPhotoMediaCollection *_collection;	// 12 = 0xc
	BOOL _vendPhotoDataOnly;	// 16 = 0x10
}
@property(readonly, retain) BRPhotoMediaCollection *collection;	// G=0x2a94f5; converted property
@property(assign) BOOL vendPhotoDataOnly;	// G=0x2a9519; S=0x2a9509; converted property
+ (id)providerForCollection:(id)collection controlFactory:(id)factory;	// 0x2a935d
- (id)initWithCollection:(id)collection controlFactory:(id)factory;	// 0x2a939d
- (id)_data;	// 0x2a9529
- (BOOL)canHaveZeroData;	// 0x2a9505
// converted property getter: - (id)collection;	// 0x2a94f5
- (id)dataAtIndex:(long)index;	// 0x2a947d
- (long)dataCount;	// 0x2a9455
- (void)dealloc;	// 0x2a9409
- (id)hashForDataAtIndex:(long)index;	// 0x2a94cd
// converted property setter: - (void)setVendPhotoDataOnly:(BOOL)only;	// 0x2a9509
// converted property getter: - (BOOL)vendPhotoDataOnly;	// 0x2a9519
@end

