/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableData, NSString;

@interface PTPDeviceInfoDataset : NSObject {
	NSMutableData *_content;	// 4 = 0x4
	BOOL _dirty;	// 8 = 0x8
	unsigned short _standardVersion;	// 10 = 0xa
	unsigned long _vendorExtensionID;	// 12 = 0xc
	unsigned short _vendorExtensionVersion;	// 16 = 0x10
	NSString *_vendorExtensionDescription;	// 20 = 0x14
	unsigned short _functionalMode;	// 24 = 0x18
	NSMutableArray *_operationsSupported;	// 28 = 0x1c
	NSMutableArray *_eventsSupported;	// 32 = 0x20
	NSMutableArray *_devicePropertiesSupported;	// 36 = 0x24
	NSMutableArray *_captureFormats;	// 40 = 0x28
	NSMutableArray *_imageFormats;	// 44 = 0x2c
	NSString *_manufacturer;	// 48 = 0x30
	NSString *_model;	// 52 = 0x34
	NSString *_deviceVersion;	// 56 = 0x38
	NSString *_serialNumber;	// 60 = 0x3c
	BOOL _readOnlyObject;	// 64 = 0x40
}
@property(retain) NSMutableArray *captureFormats;	// G=0x3420f105; S=0x3420f115; converted property
@property(retain) NSMutableData *content;	// G=0x3420eadd; S=0x3420e47d; converted property
@property(retain) NSMutableArray *devicePropertiesSupported;	// G=0x3420f085; S=0x3420f095; converted property
@property(retain) NSString *deviceVersion;	// G=0x3420f2cd; S=0x3420f2dd; converted property
@property(retain) NSMutableArray *eventsSupported;	// G=0x3420f005; S=0x3420f015; converted property
@property(assign) unsigned short functionalMode;	// G=0x3420ef55; S=0x3420ef65; converted property
@property(retain) NSMutableArray *imageFormats;	// G=0x3420f185; S=0x3420f195; converted property
@property(retain) NSString *manufacturer;	// G=0x3420f205; S=0x3420f215; converted property
@property(retain) NSString *model;	// G=0x3420f269; S=0x3420f279; converted property
@property(retain) NSMutableArray *operationsSupported;	// G=0x3420ef85; S=0x3420ef95; converted property
@property(retain) NSString *serialNumber;	// G=0x3420f331; S=0x3420f341; converted property
@property(assign) unsigned short standardVersion;	// G=0x3420ee61; S=0x3420ee71; converted property
@property(retain) NSString *vendorExtensionDescription;	// G=0x3420eef1; S=0x3420ef01; converted property
@property(assign) unsigned long vendorExtensionID;	// G=0x3420ee91; S=0x3420eea1; converted property
@property(assign) unsigned short vendorExtensionVersion;	// G=0x3420eec1; S=0x3420eed1; converted property
- (id)init;	// 0x3420e3ed
- (id)initWithData:(id)data;	// 0x3420e609
- (id)initWithMutableData:(id)mutableData;	// 0x3420e6b1
- (id)canonicalManufacturer;	// 0x3420f395
// converted property getter: - (id)captureFormats;	// 0x3420f105
// converted property getter: - (id)content;	// 0x3420eadd
- (void)dealloc;	// 0x3420e735
- (id)description;	// 0x3420eb05
// converted property getter: - (id)devicePropertiesSupported;	// 0x3420f085
// converted property getter: - (id)deviceVersion;	// 0x3420f2cd
// converted property getter: - (id)eventsSupported;	// 0x3420f005
// converted property getter: - (unsigned short)functionalMode;	// 0x3420ef55
// converted property getter: - (id)imageFormats;	// 0x3420f185
// converted property getter: - (id)manufacturer;	// 0x3420f205
// converted property getter: - (id)model;	// 0x3420f269
// converted property getter: - (id)operationsSupported;	// 0x3420ef85
// converted property getter: - (id)serialNumber;	// 0x3420f331
// converted property setter: - (void)setCaptureFormats:(id)formats;	// 0x3420f115
// converted property setter: - (void)setContent:(id)content;	// 0x3420e47d
// converted property setter: - (void)setDevicePropertiesSupported:(id)supported;	// 0x3420f095
// converted property setter: - (void)setDeviceVersion:(id)version;	// 0x3420f2dd
// converted property setter: - (void)setEventsSupported:(id)supported;	// 0x3420f015
// converted property setter: - (void)setFunctionalMode:(unsigned short)mode;	// 0x3420ef65
// converted property setter: - (void)setImageFormats:(id)formats;	// 0x3420f195
// converted property setter: - (void)setManufacturer:(id)manufacturer;	// 0x3420f215
// converted property setter: - (void)setModel:(id)model;	// 0x3420f279
// converted property setter: - (void)setOperationsSupported:(id)supported;	// 0x3420ef95
// converted property setter: - (void)setSerialNumber:(id)number;	// 0x3420f341
// converted property setter: - (void)setStandardVersion:(unsigned short)version;	// 0x3420ee71
// converted property setter: - (void)setVendorExtensionDescription:(id)description;	// 0x3420ef01
// converted property setter: - (void)setVendorExtensionID:(unsigned long)anId;	// 0x3420eea1
// converted property setter: - (void)setVendorExtensionVersion:(unsigned short)version;	// 0x3420eed1
// converted property getter: - (unsigned short)standardVersion;	// 0x3420ee61
- (void)updateContent;	// 0x3420e84d
// converted property getter: - (id)vendorExtensionDescription;	// 0x3420eef1
// converted property getter: - (unsigned long)vendorExtensionID;	// 0x3420ee91
// converted property getter: - (unsigned short)vendorExtensionVersion;	// 0x3420eec1
@end

