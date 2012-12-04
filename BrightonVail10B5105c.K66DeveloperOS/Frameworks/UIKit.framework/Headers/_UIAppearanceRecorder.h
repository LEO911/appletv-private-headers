/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableArray, NSArray, NSData;

@interface _UIAppearanceRecorder : NSObject {
	NSString *_classNameToRecord;	// 4 = 0x4
	Class _superclassToRecord;	// 8 = 0x8
	NSArray *_containerClassNames;	// 12 = 0xc
	NSMutableArray *_customizations;	// 16 = 0x10
	NSArray *_unarchivedCustomizations;	// 20 = 0x14
}
@property(copy, nonatomic, setter=_setClassNameToRecord:) NSString *_classNameToRecord;	// G=0x348c9089; S=0x348c909d; @synthesize
@property(copy, nonatomic, setter=_setContainerClassNames:) NSArray *_containerClassNames;	// G=0x348c90cd; S=0x348c90e1; @synthesize
@property(readonly, assign, nonatomic) NSData *_serializedRepresentation;	// G=0x348c8f55; 
@property(assign, nonatomic, setter=_setSuperclassToRecord:) Class _superclassToRecord;	// G=0x348c90ad; S=0x348c90bd; @synthesize
+ (id)_sharedAppearanceRecorder;	// 0x348c7915
+ (id)_sharedAppearanceRecorderForClass:(Class)aClass whenContainedIn:(id)anIn;	// 0x348c79e9
+ (id)_sharedAppearanceRecorderForClassNamed:(id)classNamed superclass:(Class)superclass whenContainedIn:(id)anIn;	// 0x348c798d
- (id)init;	// 0x348c7901
- (id)initWithSerializedRepresentation:(id)serializedRepresentation;	// 0x348c7775
- (void)_applyCustomizations;	// 0x348c86a9
// declared property getter: - (id)_classNameToRecord;	// 0x348c9089
// declared property getter: - (id)_containerClassNames;	// 0x348c90cd
- (void)_importCustomizations:(id)customizations withArchiveVersion:(int)archiveVersion;	// 0x348c76c5
- (void)_recordInvocation:(id)invocation withClassName:(id)className containerClassNames:(id)names selectorString:(id)string forRemoteProcess:(BOOL)remoteProcess;	// 0x348c7ae1
// declared property getter: - (id)_serializedRepresentation;	// 0x348c8f55
// declared property setter: - (void)_setClassNameToRecord:(id)record;	// 0x348c909d
// declared property setter: - (void)_setContainerClassNames:(id)names;	// 0x348c90e1
// declared property setter: - (void)_setSuperclassToRecord:(Class)record;	// 0x348c90bd
// declared property getter: - (Class)_superclassToRecord;	// 0x348c90ad
- (void)dealloc;	// 0x348c7a15
- (void)forwardInvocation:(id)invocation;	// 0x348c865d
- (id)methodSignatureForSelector:(SEL)selector;	// 0x348c7aa1
@end
