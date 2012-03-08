/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueProperty.h"
#import "Foundation-Structs.h"

@class NSString, NSKeyValueUnnestedProperty;

__attribute__((visibility("hidden")))
@interface NSKeyValueNestedProperty : NSKeyValueProperty {
@private
	NSString *_relationshipKey;	// 12 = 0xc
	NSString *_keyPathFromRelatedObject;	// 16 = 0x10
	NSKeyValueUnnestedProperty *_relationshipProperty;	// 20 = 0x14
	NSString *_keyPathWithoutOperatorComponents;	// 24 = 0x18
	BOOL _isAllowedToResultInForwarding;	// 28 = 0x1c
	id _dependentValueKeyOrKeys;	// 32 = 0x20
	BOOL _dependentValueKeyOrKeysIsASet;	// 36 = 0x24
}
- (void)_addDependentValueKey:(id)key;	// 0x3104e939
- (void)_givenPropertiesBeingInitialized:(CFSetRef)initialized getAffectingProperties:(id)properties;	// 0x3104e919
- (id)_initWithContainerClass:(id)containerClass keyPath:(id)path firstDotIndex:(unsigned)index propertiesBeingInitialized:(CFSetRef)initialized;	// 0x3104e67d
- (Class)_isaForAutonotifying;	// 0x3104ec45
- (id)_keyPathIfAffectedByValueForKey:(id)key exactMatch:(BOOL *)match;	// 0x3104f3b1
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)keys;	// 0x3104f931
- (void)dealloc;	// 0x31087455
- (id)dependentValueKeyOrKeysIsASet:(BOOL *)set;	// 0x3104f6e1
- (id)description;	// 0x310874f1
- (BOOL)matchesWithoutOperatorComponentsKeyPath:(id)path;	// 0x31087585
- (void)object:(id)object didAddObservance:(id)observance recurse:(BOOL)recurse;	// 0x3104ea4d
- (void)object:(id)object didRemoveObservance:(id)observance recurse:(BOOL)recurse;	// 0x3104ec65
- (void)object:(id)object withObservance:(id)observance didChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB)values;	// 0x3104f981
- (BOOL)object:(id)object withObservance:(id)observance willChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB *)values;	// 0x3104f471
@end
