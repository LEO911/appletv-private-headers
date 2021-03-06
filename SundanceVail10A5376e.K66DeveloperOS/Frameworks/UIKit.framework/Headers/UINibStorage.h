/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString, UINibDecoder, NSData, NSBundle;

__attribute__((visibility("hidden")))
@interface UINibStorage : NSObject {
	NSString *bundleResourceName;	// 4 = 0x4
	NSString *bundleDirectoryName;	// 8 = 0x8
	NSBundle *bundle;	// 12 = 0xc
	NSString *identifierForStringsFile;	// 16 = 0x10
	NSData *archiveData;	// 20 = 0x14
	UINibDecoder *nibDecoder;	// 24 = 0x18
	BOOL instantiatingForSimulator;	// 28 = 0x1c
	BOOL captureImplicitLoadingContextOnDecode;	// 29 = 0x1d
}
@property(copy, nonatomic) NSData *archiveData;	// G=0x303afe51; S=0x303afe65; @synthesize
@property(retain, nonatomic) NSBundle *bundle;	// G=0x303af9c5; S=0x303af0b5; @synthesize
@property(copy, nonatomic) NSString *bundleDirectoryName;	// G=0x303af969; S=0x303af0d5; @synthesize
@property(copy, nonatomic) NSString *bundleResourceName;	// G=0x303af16d; S=0x303af0c5; @synthesize
@property(assign) BOOL captureImplicitLoadingContextOnDecode;	// G=0x3049a6b1; S=0x3049a6c9; @synthesize
@property(copy, nonatomic) NSString *identifierForStringsFile;	// G=0x303af86d; S=0x3049a691; @synthesize
@property(assign, nonatomic) BOOL instantiatingForSimulator;	// G=0x303b62ed; S=0x3049a6a1; @synthesize
@property(retain, nonatomic) UINibDecoder *nibDecoder;	// G=0x303afcc1; S=0x303b11c5; @synthesize
// declared property getter: - (id)archiveData;	// 0x303afe51
// declared property getter: - (id)bundle;	// 0x303af9c5
// declared property getter: - (id)bundleDirectoryName;	// 0x303af969
// declared property getter: - (id)bundleResourceName;	// 0x303af16d
// declared property getter: - (BOOL)captureImplicitLoadingContextOnDecode;	// 0x3049a6b1
- (void)dealloc;	// 0x303b6bb1
// declared property getter: - (id)identifierForStringsFile;	// 0x303af86d
// declared property getter: - (BOOL)instantiatingForSimulator;	// 0x303b62ed
// declared property getter: - (id)nibDecoder;	// 0x303afcc1
// declared property setter: - (void)setArchiveData:(id)data;	// 0x303afe65
// declared property setter: - (void)setBundle:(id)bundle;	// 0x303af0b5
// declared property setter: - (void)setBundleDirectoryName:(id)name;	// 0x303af0d5
// declared property setter: - (void)setBundleResourceName:(id)name;	// 0x303af0c5
// declared property setter: - (void)setCaptureImplicitLoadingContextOnDecode:(BOOL)decode;	// 0x3049a6c9
// declared property setter: - (void)setIdentifierForStringsFile:(id)stringsFile;	// 0x3049a691
// declared property setter: - (void)setInstantiatingForSimulator:(BOOL)simulator;	// 0x3049a6a1
// declared property setter: - (void)setNibDecoder:(id)decoder;	// 0x303b11c5
@end

