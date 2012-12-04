/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

#import "LSResourceProxy.h"

@class NSString;

@interface LSDocumentProxy : LSResourceProxy {
	NSString *_name;	// 40 = 0x28
	NSString *_typeIdentifier;	// 44 = 0x2c
	NSString *_MIMEType;	// 48 = 0x30
}
@property(readonly, assign, nonatomic) NSString *MIMEType;	// G=0x33e75665; @synthesize=_MIMEType
@property(readonly, assign, nonatomic) NSString *name;	// G=0x33e75645; @synthesize=_name
@property(readonly, assign, nonatomic) NSString *typeIdentifier;	// G=0x33e75655; @synthesize=_typeIdentifier
+ (id)documentProxyForName:(id)name type:(id)type MIMEType:(id)type3;	// 0x33e75569
- (id)initWithName:(id)name type:(id)type MIMEType:(id)type3;	// 0x33e754b5
// declared property getter: - (id)MIMEType;	// 0x33e75665
- (void)bind;	// 0x33e7484d
- (void)dealloc;	// 0x33e755bd
- (id)iconStyleDomain;	// 0x33e75635
// declared property getter: - (id)name;	// 0x33e75645
// declared property getter: - (id)typeIdentifier;	// 0x33e75655
@end
