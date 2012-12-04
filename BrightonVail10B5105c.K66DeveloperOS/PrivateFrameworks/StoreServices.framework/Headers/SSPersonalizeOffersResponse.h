/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSXPCCoding.h"

@class NSMutableDictionary, NSArray;

@interface SSPersonalizeOffersResponse : NSObject <SSXPCCoding> {
	NSMutableDictionary *_actionDisplayNames;	// 4 = 0x4
	NSMutableDictionary *_actionParameters;	// 8 = 0x8
	NSArray *_items;	// 12 = 0xc
	NSMutableDictionary *_priceDisplayNames;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSArray *personalizedItems;	// G=0x35877c85; 
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x35877f35
- (void)_setPersonalizedItems:(id)items;	// 0x35877ef1
- (id)actionDisplayNameForItemType:(id)itemType;	// 0x35877c3d
- (id)actionParametersForItemIdentifier:(id)itemIdentifier;	// 0x35877d05
- (id)copyXPCEncoding;	// 0x3587808d
- (void)dealloc;	// 0x35877bb1
// declared property getter: - (id)personalizedItems;	// 0x35877c85
- (id)priceDisplayForItemType:(id)itemType;	// 0x35877cbd
- (void)setActionDisplayNameString:(id)string forItemType:(id)itemType;	// 0x35877d4d
- (void)setActionParameters:(id)parameters forItemIdentifier:(id)itemIdentifier;	// 0x35877dd9
- (void)setPriceDisplayString:(id)string forItemType:(id)itemType;	// 0x35877e65
@end
