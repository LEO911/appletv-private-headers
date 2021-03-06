/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueProperty.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface NSKeyValueUnnestedProperty : NSKeyValueProperty {
	NSArray *_affectingProperties;	// 12 = 0xc
	BOOL _cachedIsaForAutonotifyingIsValid;	// 16 = 0x10
	Class _cachedIsaForAutonotifying;	// 20 = 0x14
}
- (void)_addDependentValueKey:(id)key;	// 0x3197a415
- (void)_givenPropertiesBeingInitialized:(CFSetRef)initialized getAffectingProperties:(id)properties;	// 0x31963c49
- (id)_initWithContainerClass:(id)containerClass key:(id)key propertiesBeingInitialized:(CFSetRef)initialized;	// 0x319638bd
- (Class)_isaForAutonotifying;	// 0x319651cd
- (id)_keyPathIfAffectedByValueForKey:(id)key exactMatch:(BOOL *)match;	// 0x3196f6a5
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)keys;	// 0x319d7d75
- (void)dealloc;	// 0x319d7bf1
- (id)description;	// 0x319d7c3d
- (Class)isaForAutonotifying;	// 0x319650b9
- (id)keyPathIfAffectedByValueForKey:(id)key exactMatch:(BOOL *)match;	// 0x3196f5a5
- (id)keyPathIfAffectedByValueForMemberOfKeys:(id)keys;	// 0x319d7dad
- (BOOL)matchesWithoutOperatorComponentsKeyPath:(id)path;	// 0x319d7ea1
- (void)object:(id)object didAddObservance:(id)observance recurse:(BOOL)recurse;	// 0x31964fe1
- (void)object:(id)object didRemoveObservance:(id)observance recurse:(BOOL)recurse;	// 0x31998529
- (void)object:(id)object withObservance:(id)observance didChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB)values;	// 0x3196fc55
- (BOOL)object:(id)object withObservance:(id)observance willChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB *)values;	// 0x3196f6dd
@end

