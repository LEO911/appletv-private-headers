/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSData, NSString, BBSectionSubtypeParameters;

@interface BBSectionParameters : NSObject {
	BOOL _showsSubtitle;	// 4 = 0x4
	unsigned _messageNumberOfLines;	// 8 = 0x8
	BOOL _usesVariableLayout;	// 12 = 0xc
	BOOL _orderSectionUsingRecencyDate;	// 13 = 0xd
	BOOL _showsDateInFloatingLockScreenAlert;	// 14 = 0xe
	BBSectionSubtypeParameters *_defaultSubtypeParameters;	// 16 = 0x10
	NSMutableDictionary *_allSubtypeParameters;	// 20 = 0x14
	NSString *_displayName;	// 24 = 0x18
	NSData *_iconData;	// 28 = 0x1c
	BOOL _displaysCriticalBulletins;	// 32 = 0x20
	NSString *_uniqueIdentifier;	// 36 = 0x24
}
@property(retain, nonatomic) NSMutableDictionary *allSubtypeParameters;	// G=0x35df5c19; S=0x35df5c29; @synthesize=_allSubtypeParameters
@property(retain, nonatomic) BBSectionSubtypeParameters *defaultSubtypeParameters;	// G=0x35df5bf9; S=0x35df5c09; @synthesize=_defaultSubtypeParameters
@property(copy, nonatomic) NSString *displayName;	// G=0x35df5c39; S=0x35df5c4d; @synthesize=_displayName
@property(assign, nonatomic) BOOL displaysCriticalBulletins;	// G=0x35df5c7d; S=0x35df5c8d; @synthesize=_displaysCriticalBulletins
@property(retain, nonatomic) NSData *iconData;	// G=0x35df5c5d; S=0x35df5c6d; @synthesize=_iconData
@property(assign, nonatomic) unsigned messageNumberOfLines;	// G=0x35df5b79; S=0x35df5b89; @synthesize=_messageNumberOfLines
@property(assign, nonatomic) BOOL orderSectionUsingRecencyDate;	// G=0x35df5bb9; S=0x35df5bc9; @synthesize=_orderSectionUsingRecencyDate
@property(assign, nonatomic) BOOL showsDateInFloatingLockScreenAlert;	// G=0x35df5bd9; S=0x35df5be9; @synthesize=_showsDateInFloatingLockScreenAlert
@property(assign, nonatomic) BOOL showsSubtitle;	// G=0x35df5b59; S=0x35df5b69; @synthesize=_showsSubtitle
@property(retain, nonatomic) NSString *uniqueIdentifier;	// G=0x35df5c9d; S=0x35df5cad; @synthesize=_uniqueIdentifier
@property(assign, nonatomic) BOOL usesVariableLayout;	// G=0x35df5b99; S=0x35df5ba9; @synthesize=_usesVariableLayout
+ (void)addSectionParametersToCache:(id)cache;	// 0x35df531d
+ (id)copyCachedSectionParametersWithIdentifier:(id)identifier;	// 0x35df54ad
+ (void)removeSectionParametersFromCache:(id)cache;	// 0x35df53ed
- (id)init;	// 0x35df5211
- (id)initWithCoder:(id)coder;	// 0x35df56c5
// declared property getter: - (id)allSubtypeParameters;	// 0x35df5c19
- (void)dealloc;	// 0x35df5525
// declared property getter: - (id)defaultSubtypeParameters;	// 0x35df5bf9
// declared property getter: - (id)displayName;	// 0x35df5c39
// declared property getter: - (BOOL)displaysCriticalBulletins;	// 0x35df5c7d
- (void)encodeWithCoder:(id)coder;	// 0x35df59a5
// declared property getter: - (id)iconData;	// 0x35df5c5d
// declared property getter: - (unsigned)messageNumberOfLines;	// 0x35df5b79
// declared property getter: - (BOOL)orderSectionUsingRecencyDate;	// 0x35df5bb9
- (id)parametersForSubtype:(int)subtype;	// 0x35df560d
// declared property setter: - (void)setAllSubtypeParameters:(id)parameters;	// 0x35df5c29
// declared property setter: - (void)setDefaultSubtypeParameters:(id)parameters;	// 0x35df5c09
// declared property setter: - (void)setDisplayName:(id)name;	// 0x35df5c4d
// declared property setter: - (void)setDisplaysCriticalBulletins:(BOOL)bulletins;	// 0x35df5c8d
// declared property setter: - (void)setIconData:(id)data;	// 0x35df5c6d
// declared property setter: - (void)setMessageNumberOfLines:(unsigned)lines;	// 0x35df5b89
// declared property setter: - (void)setOrderSectionUsingRecencyDate:(BOOL)date;	// 0x35df5bc9
// declared property setter: - (void)setShowsDateInFloatingLockScreenAlert:(BOOL)floatingLockScreenAlert;	// 0x35df5be9
// declared property setter: - (void)setShowsSubtitle:(BOOL)subtitle;	// 0x35df5b69
// declared property setter: - (void)setUniqueIdentifier:(id)identifier;	// 0x35df5cad
// declared property setter: - (void)setUsesVariableLayout:(BOOL)layout;	// 0x35df5ba9
// declared property getter: - (BOOL)showsDateInFloatingLockScreenAlert;	// 0x35df5bd9
// declared property getter: - (BOOL)showsSubtitle;	// 0x35df5b59
// declared property getter: - (id)uniqueIdentifier;	// 0x35df5c9d
// declared property getter: - (BOOL)usesVariableLayout;	// 0x35df5b99
@end

