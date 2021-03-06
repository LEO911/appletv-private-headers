/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "NSCopying.h"
#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSSet, NSString;

@interface AVMediaFileType : NSObject <NSCopying> {
@private
	NSString *_uti;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *UTI;	// G=0x35e665bd; 
@property(readonly, assign, nonatomic) unsigned long audioFileTypeID;	// G=0x35e66605; 
@property(readonly, assign, nonatomic) NSString *defaultFileExtension;	// G=0x35e663e5; 
@property(readonly, assign, nonatomic) NSString *figFormatReaderFileFormat;	// G=0x35e665cd; 
@property(readonly, assign, nonatomic) NSSet *supportedMediaTypes;	// G=0x35e6642d; 
+ (id)_mediaFileTypeWithFileTypeIdentifier:(id)fileTypeIdentifier exceptionReason:(id *)reason;	// 0x35e66139
+ (id)allFileTypeIdentifiers;	// 0x35e660e1
+ (void)initialize;	// 0x35e65f41
+ (id)mediaFileTypeWithFileTypeIdentifier:(id)fileTypeIdentifier;	// 0x35e66125
- (id)initWithFileTypeIdentifier:(id)fileTypeIdentifier exceptionReason:(id *)reason;	// 0x35e66189
// declared property getter: - (id)UTI;	// 0x35e665bd
// declared property getter: - (unsigned long)audioFileTypeID;	// 0x35e66605
- (id)copyWithZone:(NSZone *)zone;	// 0x35e6636d
- (void)dealloc;	// 0x35e66321
// declared property getter: - (id)defaultFileExtension;	// 0x35e663e5
- (id)description;	// 0x35e6637d
// declared property getter: - (id)figFormatReaderFileFormat;	// 0x35e665cd
// declared property getter: - (id)supportedMediaTypes;	// 0x35e6642d
- (BOOL)supportsOutputSettings:(id)settings reason:(id *)reason;	// 0x35e66675
@end

