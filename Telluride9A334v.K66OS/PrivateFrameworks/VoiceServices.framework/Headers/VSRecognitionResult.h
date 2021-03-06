/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <NSObject.h> // Unknown library


@interface VSRecognitionResult : NSObject {
}
@property(retain) id recognitionAction;	// G=0x3201d069; S=0x3201d061; converted property
+ (void)initialize;	// 0x3201d089
+ (id)recognitionResultWithModelIdentifier:(id)modelIdentifier classIdentifiers:(id)identifiers values:(id)values;	// 0x3201d0b5
- (id)init;	// 0x3201ccb1
- (id)createHandler;	// 0x3201cf45
- (id)description;	// 0x3201d06d
- (int)elementCount;	// 0x3201cf15
- (BOOL)getElementClassIdentifier:(id *)identifier value:(id *)value atIndex:(int)index;	// 0x3201cf19
- (unsigned)hash;	// 0x3201ccc9
- (BOOL)isEqual:(id)equal;	// 0x3201ccb5
- (id)modelIdentifier;	// 0x3201cf11
// converted property getter: - (id)recognitionAction;	// 0x3201d069
- (id)recognitionResultByReplacingValueForClassIdentifier:(id)classIdentifier withValue:(id)value;	// 0x3201cce5
- (oneway void)release;	// 0x3201ccdd
- (id)retain;	// 0x3201cccd
- (unsigned)retainCount;	// 0x3201cce1
// converted property setter: - (void)setRecognitionAction:(id)action;	// 0x3201d061
- (id)valueOfFirstElementWithClassIdentifier:(id)classIdentifier;	// 0x3201ce91
@end

