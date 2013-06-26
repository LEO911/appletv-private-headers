/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "SSXPCCoding.h"
#import </libobjc.A.h>

@class NSDate, NSNumber, SSItemContentRating, NSArray, NSString;

@interface ISSoftwareApplication : NSObject <SSXPCCoding> {
	NSNumber *_accountDSID;	// 4 = 0x4
	NSString *_accountIdentifier;	// 8 = 0x8
	NSString *_bundleIdentifier;	// 12 = 0xc
	NSString *_bundleShortVersionString;	// 16 = 0x10
	NSString *_bundleVersion;	// 20 = 0x14
	NSString *_containerPath;	// 24 = 0x18
	SSItemContentRating *_contentRating;	// 28 = 0x1c
	NSString *_deviceIdentifierForVendor;	// 32 = 0x20
	NSNumber *_itemIdentifier;	// 36 = 0x24
	NSString *_itemName;	// 40 = 0x28
	BOOL _profileValidated;	// 44 = 0x2c
	NSString *_softwareType;	// 48 = 0x30
	NSNumber *_storeFrontIdentifier;	// 52 = 0x34
	NSNumber *_versionIdentifier;	// 56 = 0x38
	NSArray *_versionOrdering;	// 60 = 0x3c
	NSDate *_receiptExpirationDate;	// 64 = 0x40
	unsigned _vppStateFlags;	// 68 = 0x44
}
@property(retain, nonatomic) NSNumber *accountDSID;	// G=0x33c7e2b1; S=0x33c7e2c1; @synthesize=_accountDSID
@property(copy, nonatomic) NSString *accountIdentifier;	// G=0x33c7e2d1; S=0x33c7e2e5; @synthesize=_accountIdentifier
@property(copy, nonatomic) NSString *bundleIdentifier;	// G=0x33c7e2f5; S=0x33c7e309; @synthesize=_bundleIdentifier
@property(copy, nonatomic) NSString *bundleShortVersionString;	// G=0x33c7e319; S=0x33c7e32d; @synthesize=_bundleShortVersionString
@property(copy, nonatomic) NSString *bundleVersion;	// G=0x33c7e33d; S=0x33c7e351; @synthesize=_bundleVersion
@property(copy, nonatomic) NSString *containerPath;	// G=0x33c7e361; S=0x33c7e375; @synthesize=_containerPath
@property(copy, nonatomic) SSItemContentRating *contentRating;	// G=0x33c7e385; S=0x33c7e399; @synthesize=_contentRating
@property(copy, nonatomic) NSString *deviceIdentifierForVendor;	// G=0x33c7d65d; S=0x33c7e3a9; @synthesize=_deviceIdentifierForVendor
@property(retain, nonatomic) NSNumber *itemIdentifier;	// G=0x33c7e3b9; S=0x33c7e3c9; @synthesize=_itemIdentifier
@property(copy, nonatomic) NSString *itemName;	// G=0x33c7e3d9; S=0x33c7e3ed; @synthesize=_itemName
@property(assign, nonatomic, getter=isProfileValidated) BOOL profileValidated;	// G=0x33c7e3fd; S=0x33c7e40d; @synthesize=_profileValidated
@property(readonly, assign, nonatomic) NSDate *receiptExpirationDate;	// G=0x33c7e4a5; @synthesize=_receiptExpirationDate
@property(copy, nonatomic) NSString *softwareType;	// G=0x33c7e41d; S=0x33c7e431; @synthesize=_softwareType
@property(retain, nonatomic) NSNumber *storeFrontIdentifier;	// G=0x33c7e441; S=0x33c7e451; @synthesize=_storeFrontIdentifier
@property(retain, nonatomic) NSNumber *versionIdentifier;	// G=0x33c7e461; S=0x33c7e471; @synthesize=_versionIdentifier
@property(copy, nonatomic) NSArray *versionOrdering;	// G=0x33c7e481; S=0x33c7e495; @synthesize=_versionOrdering
@property(readonly, assign, nonatomic) unsigned vppStateFlags;	// G=0x33c7d721; 
+ (id)lookupAttributeKeys;	// 0x33c7d8f5
- (id)initWithMobileInstallationDictionary:(id)mobileInstallationDictionary;	// 0x33c7d1d5
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x33c7db35
- (void)_loadMetadataFromContainer:(id)container;	// 0x33c7de41
// declared property getter: - (id)accountDSID;	// 0x33c7e2b1
// declared property getter: - (id)accountIdentifier;	// 0x33c7e2d1
// declared property getter: - (id)bundleIdentifier;	// 0x33c7e2f5
// declared property getter: - (id)bundleShortVersionString;	// 0x33c7e319
// declared property getter: - (id)bundleVersion;	// 0x33c7e33d
// declared property getter: - (id)containerPath;	// 0x33c7e361
// declared property getter: - (id)contentRating;	// 0x33c7e385
- (id)copyXPCEncoding;	// 0x33c7d975
- (void)dealloc;	// 0x33c7d451
- (id)description;	// 0x33c7d5b9
// declared property getter: - (id)deviceIdentifierForVendor;	// 0x33c7d65d
// declared property getter: - (BOOL)isProfileValidated;	// 0x33c7e3fd
// declared property getter: - (id)itemIdentifier;	// 0x33c7e3b9
// declared property getter: - (id)itemName;	// 0x33c7e3d9
// declared property getter: - (id)receiptExpirationDate;	// 0x33c7e4a5
- (void)resetVPPStateFlags;	// 0x33c7d70d
// declared property setter: - (void)setAccountDSID:(id)dsid;	// 0x33c7e2c1
// declared property setter: - (void)setAccountIdentifier:(id)identifier;	// 0x33c7e2e5
// declared property setter: - (void)setBundleIdentifier:(id)identifier;	// 0x33c7e309
// declared property setter: - (void)setBundleShortVersionString:(id)string;	// 0x33c7e32d
// declared property setter: - (void)setBundleVersion:(id)version;	// 0x33c7e351
// declared property setter: - (void)setContainerPath:(id)path;	// 0x33c7e375
// declared property setter: - (void)setContentRating:(id)rating;	// 0x33c7e399
// declared property setter: - (void)setDeviceIdentifierForVendor:(id)vendor;	// 0x33c7e3a9
// declared property setter: - (void)setItemIdentifier:(id)identifier;	// 0x33c7e3c9
// declared property setter: - (void)setItemName:(id)name;	// 0x33c7e3ed
// declared property setter: - (void)setProfileValidated:(BOOL)validated;	// 0x33c7e40d
// declared property setter: - (void)setSoftwareType:(id)type;	// 0x33c7e431
// declared property setter: - (void)setStoreFrontIdentifier:(id)identifier;	// 0x33c7e451
// declared property setter: - (void)setVersionIdentifier:(id)identifier;	// 0x33c7e471
// declared property setter: - (void)setVersionOrdering:(id)ordering;	// 0x33c7e495
// declared property getter: - (id)softwareType;	// 0x33c7e41d
// declared property getter: - (id)storeFrontIdentifier;	// 0x33c7e441
// declared property getter: - (id)versionIdentifier;	// 0x33c7e461
// declared property getter: - (id)versionOrdering;	// 0x33c7e481
// declared property getter: - (unsigned)vppStateFlags;	// 0x33c7d721
@end
