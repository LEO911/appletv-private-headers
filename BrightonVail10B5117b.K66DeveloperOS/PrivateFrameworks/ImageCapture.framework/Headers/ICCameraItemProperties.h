/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class ICCameraDevice, NSString, ICCameraFolder, NSMutableDictionary, NSDate;

@interface ICCameraItemProperties : NSObject {
	ICCameraDevice *_device;	// 4 = 0x4
	ICCameraFolder *_parentFolder;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	NSString *_UTI;	// 16 = 0x10
	NSDate *_creationDate;	// 20 = 0x14
	NSDate *_modificationDate;	// 24 = 0x18
	BOOL _locked;	// 28 = 0x1c
	NSMutableDictionary *_userData;	// 32 = 0x20
}
@property(retain) NSString *UTI;	// G=0x343d5f6d; S=0x343d5f81; @synthesize=_UTI
@property(retain) NSDate *creationDate;	// G=0x343d5fa5; S=0x343d5fb9; @synthesize=_creationDate
@property(assign) ICCameraDevice *device;	// G=0x343d5edd; S=0x343d5ef1; @synthesize=_device
@property(assign) BOOL locked;	// G=0x343d6015; S=0x343d602d; @synthesize=_locked
@property(retain) NSDate *modificationDate;	// G=0x343d5fdd; S=0x343d5ff1; @synthesize=_modificationDate
@property(retain) NSString *name;	// G=0x343d5f35; S=0x343d5f49; @synthesize=_name
@property(assign) ICCameraFolder *parentFolder;	// G=0x343d5f09; S=0x343d5f1d; @synthesize=_parentFolder
@property(retain) NSMutableDictionary *userData;	// G=0x343d6045; S=0x343d6059; @synthesize=_userData
// declared property getter: - (id)UTI;	// 0x343d5f6d
// declared property getter: - (id)creationDate;	// 0x343d5fa5
- (void)dealloc;	// 0x343d5d65
// declared property getter: - (id)device;	// 0x343d5edd
- (void)finalize;	// 0x343d5e21
// declared property getter: - (BOOL)locked;	// 0x343d6015
// declared property getter: - (id)modificationDate;	// 0x343d5fdd
// declared property getter: - (id)name;	// 0x343d5f35
// declared property getter: - (id)parentFolder;	// 0x343d5f09
// declared property setter: - (void)setCreationDate:(id)date;	// 0x343d5fb9
// declared property setter: - (void)setDevice:(id)device;	// 0x343d5ef1
// declared property setter: - (void)setLocked:(BOOL)locked;	// 0x343d602d
// declared property setter: - (void)setModificationDate:(id)date;	// 0x343d5ff1
// declared property setter: - (void)setName:(id)name;	// 0x343d5f49
// declared property setter: - (void)setParentFolder:(id)folder;	// 0x343d5f1d
// declared property setter: - (void)setUTI:(id)uti;	// 0x343d5f81
// declared property setter: - (void)setUserData:(id)data;	// 0x343d6059
// declared property getter: - (id)userData;	// 0x343d6045
@end
