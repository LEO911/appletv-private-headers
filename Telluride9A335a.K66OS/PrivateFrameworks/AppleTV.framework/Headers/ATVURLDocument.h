/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRURLDocument.h"

@class NSArray;

@interface ATVURLDocument : BRURLDocument {
@private
	id _requestBlock;	// 52 = 0x34
	id _propertyList;	// 56 = 0x38
	int _requiredURLLoadIndex;	// 60 = 0x3c
	NSArray *_requiredURLImageProxies;	// 64 = 0x40
	NSArray *_requiredURLImageIDs;	// 68 = 0x44
	id _completionHandler;	// 72 = 0x48
}
@property(readonly, retain) id propertyList;	// G=0x340edb0d; converted property
+ (id)documentWithRequestBlock:(id)requestBlock;	// 0x340ed5ad
- (id)initWithRequestBlock:(id)requestBlock;	// 0x340ed5e9
- (id)URLRequest;	// 0x340ed70d
- (void)_deserializePlist;	// 0x340edc09
- (void)_evaluatePlist;	// 0x340edc8d
- (void)_loadNextRequiredURL;	// 0x340ee131
- (void)_loadRequiredURLs:(id)urls completionHandler:(id)handler;	// 0x340edde9
- (id)_preProcessXML;	// 0x340edb1d
- (void)_requiredImageLoadFailed:(id)failed;	// 0x340ee0c9
- (void)_requiredImageLoaded:(id)loaded;	// 0x340ee045
- (void)_resetRequiredURLs;	// 0x340edd25
- (void)dealloc;	// 0x340ed641
- (void)documentLoadedWithCompletionHandler:(id)completionHandler;	// 0x340ed77d
// converted property getter: - (id)propertyList;	// 0x340edb0d
@end

