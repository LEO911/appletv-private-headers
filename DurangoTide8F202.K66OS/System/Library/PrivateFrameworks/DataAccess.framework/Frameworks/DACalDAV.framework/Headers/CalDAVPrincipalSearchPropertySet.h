/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface CalDAVPrincipalSearchPropertySet : NSObject {
	BOOL _supportsPSP;	// 4 = 0x4
	NSMutableDictionary *_properties;	// 8 = 0x8
}
@property(readonly, retain) NSMutableDictionary *properties;	// G=0x32d0f989; converted property
@property(assign) BOOL supportsPropertySearch;	// G=0x32d0f8f9; S=0x32d0f909; @synthesize=_supportsPSP
+ (id)propertySetFromDictionaryRepresentation:(id)dictionaryRepresentation;	// 0x32d101e9
+ (id)propertySetWithProperties:(id)properties;	// 0x32d0f9e5
- (id)initWithSearchProperties:(id)searchProperties;	// 0x32d10385
- (void)_setProperties:(id)properties;	// 0x32d0fa25
- (void)dealloc;	// 0x32d0fa61
- (id)dictionaryRepresentation;	// 0x32d10079
- (BOOL)isEqualToPropertySet:(id)propertySet;	// 0x32d0f919
// converted property getter: - (id)properties;	// 0x32d0f989
- (id)propertyForType:(id)type;	// 0x32d0f9c5
// declared property setter: - (void)setSupportsPropertySearch:(BOOL)search;	// 0x32d0f909
// declared property getter: - (BOOL)supportsPropertySearch;	// 0x32d0f8f9
@end

