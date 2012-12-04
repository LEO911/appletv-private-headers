/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSXPCCoding.h"
#import "NSCoding.h"

@class NSArray;

@interface SSDownloadManifestResponse : NSObject <SSXPCCoding, NSCoding> {
	NSArray *_validDownloads;	// 4 = 0x4
}
@property(copy) NSArray *validDownloads;	// G=0x3583c1e9; S=0x3583c1f9; 
- (id)initWithCoder:(id)coder;	// 0x3583c23d
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x3583c505
- (id)copyXPCEncoding;	// 0x3583c405
- (void)dealloc;	// 0x3583c19d
- (void)encodeWithCoder:(id)coder;	// 0x3583c33d
// declared property setter: - (void)setValidDownloads:(id)downloads;	// 0x3583c1f9
// declared property getter: - (id)validDownloads;	// 0x3583c1e9
@end
