/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import "BRControlFactory.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "BRSelectionHandler.h"

@class ATVDataQuery, NSMutableArray, ATVDataType;

__attribute__((visibility("hidden")))
@interface ATVRentedMediaProvider : XXUnknownSuperclass <BRProvider, BRSelectionHandler, BRControlFactory> {
	ATVDataType *_mediaType;	// 4 = 0x4
	ATVDataQuery *_dataQuery;	// 8 = 0x8
	NSMutableArray *_rentedMovies;	// 12 = 0xc
}
+ (id)providerWithMediaType:(id)mediaType;	// 0x1e78c5
- (id)init;	// 0x1e7911
- (id)initWithMediaType:(id)mediaType;	// 0x1e7931
- (void)_accountLoggedOut:(id)anOut;	// 0x1e82e5
- (void)_reloadRentals:(id)rentals;	// 0x1e7d65
- (void)_rentalQueryComplete;	// 0x1e814d
- (id)controlFactory;	// 0x1e7bfd
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x1e7c01
- (id)dataAtIndex:(long)index;	// 0x1e7bbd
- (long)dataCount;	// 0x1e7bdd
- (void)dealloc;	// 0x1e7ab1
- (BOOL)handleSelectionForControl:(id)control;	// 0x1e7c7d
- (id)hashForDataAtIndex:(long)index;	// 0x1e7b75
@end
