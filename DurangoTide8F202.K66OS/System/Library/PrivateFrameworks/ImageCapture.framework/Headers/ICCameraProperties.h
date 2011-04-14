/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library
#import "ImageCapture-Structs.h"

@class NSString, NSMutableArray;

@interface ICCameraProperties : NSObject {
	NSString *_volumePath;	// 4 = 0x4
	BOOL _ejectable;	// 8 = 0x8
	BOOL _beingEjected;	// 9 = 0x9
	BOOL _locked;	// 10 = 0xa
	BOOL _allowsSyncingClock;	// 11 = 0xb
	unsigned _contentCatalogPercentCompleted;	// 12 = 0xc
	BOOL _batteryLevelAvailable;	// 16 = 0x10
	unsigned _batteryLevel;	// 20 = 0x14
	NSMutableArray *_contents;	// 24 = 0x18
	NSMutableArray *_mediaFiles;	// 28 = 0x1c
	NSMutableArray *_toBeNotifiedAddedItems;	// 32 = 0x20
	int _contentsLock;	// 36 = 0x24
	int _mediaFilesLock;	// 40 = 0x28
	double _timeOffset;	// 44 = 0x2c
	unsigned _estimatedNumberOfDownloadableItems;	// 52 = 0x34
	unsigned _numberOfDownloadableItems;	// 56 = 0x38
	BOOL _contentReceived;	// 60 = 0x3c
	double _downloadCancelTimestamp;	// 64 = 0x40
	dispatch_queue_s *_thumbnailFetchQ;	// 72 = 0x48
	dispatch_queue_s *_metadataFetchQ;	// 76 = 0x4c
	dispatch_queue_s *_downloadQ;	// 80 = 0x50
	dispatch_queue_s *_generalQ;	// 84 = 0x54
	dispatch_semaphore_s *_deviceQSemaphore;	// 88 = 0x58
	BOOL _accessRestrictedAppleDevice;	// 92 = 0x5c
}
@property(assign) BOOL accessRestrictedAppleDevice;	// G=0x301cd48d; S=0x301cd49d; @synthesize=_accessRestrictedAppleDevice
@property(assign) BOOL allowsSyncingClock;	// G=0x301cd64d; S=0x301cd65d; @synthesize=_allowsSyncingClock
@property(assign) unsigned batteryLevel;	// G=0x301cd5ed; S=0x301cd5fd; @synthesize=_batteryLevel
@property(assign) BOOL batteryLevelAvailable;	// G=0x301cd60d; S=0x301cd61d; @synthesize=_batteryLevelAvailable
@property(assign) BOOL beingEjected;	// G=0x301cd68d; S=0x301cd69d; @synthesize=_beingEjected
@property(assign) unsigned contentCatalogPercentCompleted;	// G=0x301cd62d; S=0x301cd63d; @synthesize=_contentCatalogPercentCompleted
@property(assign) BOOL contentReceived;	// G=0x301cd54d; S=0x301cd55d; @synthesize=_contentReceived
@property(retain) NSMutableArray *contents;	// G=0x301ce1e1; S=0x301ce255; @synthesize=_contents
@property(assign) int contentsLock;	// G=0x301cd5ad; S=0x301cd5bd; @synthesize=_contentsLock
@property(assign) dispatch_semaphore_s *deviceQSemaphore;	// G=0x301cd4ad; S=0x301cd4bd; @synthesize=_deviceQSemaphore
@property(assign) double downloadCancelTimestamp;	// G=0x301ce19d; S=0x301ce171; @synthesize=_downloadCancelTimestamp
@property(assign) dispatch_queue_s *downloadQ;	// G=0x301cd4ed; S=0x301cd4fd; @synthesize=_downloadQ
@property(assign) BOOL ejectable;	// G=0x301cd6ad; S=0x301cd6bd; @synthesize=_ejectable
@property(assign) unsigned estimatedNumberOfDownloadableItems;	// G=0x301cd58d; S=0x301cd59d; @synthesize=_estimatedNumberOfDownloadableItems
@property(assign) dispatch_queue_s *generalQ;	// G=0x301cd4cd; S=0x301cd4dd; @synthesize=_generalQ
@property(assign) BOOL locked;	// G=0x301cd66d; S=0x301cd67d; @synthesize=_locked
@property(retain) NSMutableArray *mediaFiles;	// G=0x301ce1f9; S=0x301ce281; @synthesize=_mediaFiles
@property(assign) int mediaFilesLock;	// G=0x301cd5cd; S=0x301cd5dd; @synthesize=_mediaFilesLock
@property(assign) dispatch_queue_s *metadataFetchQ;	// G=0x301cd50d; S=0x301cd51d; @synthesize=_metadataFetchQ
@property(assign) unsigned numberOfDownloadableItems;	// G=0x301cd56d; S=0x301cd57d; @synthesize=_numberOfDownloadableItems
@property(assign) dispatch_queue_s *thumbnailFetchQ;	// G=0x301cd52d; S=0x301cd53d; @synthesize=_thumbnailFetchQ
@property(assign) double timeOffset;	// G=0x301ce145; S=0x301ce119; @synthesize=_timeOffset
@property(retain) NSMutableArray *toBeNotifiedAddedItems;	// G=0x301ce211; S=0x301ce2ad; @synthesize=_toBeNotifiedAddedItems
@property(retain) NSString *volumePath;	// G=0x301ce1c9; S=0x301ce229; @synthesize=_volumePath
// declared property getter: - (BOOL)accessRestrictedAppleDevice;	// 0x301cd48d
// declared property getter: - (BOOL)allowsSyncingClock;	// 0x301cd64d
// declared property getter: - (unsigned)batteryLevel;	// 0x301cd5ed
// declared property getter: - (BOOL)batteryLevelAvailable;	// 0x301cd60d
// declared property getter: - (BOOL)beingEjected;	// 0x301cd68d
// declared property getter: - (unsigned)contentCatalogPercentCompleted;	// 0x301cd62d
// declared property getter: - (BOOL)contentReceived;	// 0x301cd54d
// declared property getter: - (id)contents;	// 0x301ce1e1
// declared property getter: - (int)contentsLock;	// 0x301cd5ad
- (void)dealloc;	// 0x301ce0a5
// declared property getter: - (dispatch_semaphore_s *)deviceQSemaphore;	// 0x301cd4ad
// declared property getter: - (double)downloadCancelTimestamp;	// 0x301ce19d
// declared property getter: - (dispatch_queue_s *)downloadQ;	// 0x301cd4ed
// declared property getter: - (BOOL)ejectable;	// 0x301cd6ad
// declared property getter: - (unsigned)estimatedNumberOfDownloadableItems;	// 0x301cd58d
- (void)finalize;	// 0x301ce031
// declared property getter: - (dispatch_queue_s *)generalQ;	// 0x301cd4cd
- (void)lockContents;	// 0x301cd6cd
- (void)lockMediaFiles;	// 0x301cd6e5
// declared property getter: - (BOOL)locked;	// 0x301cd66d
// declared property getter: - (id)mediaFiles;	// 0x301ce1f9
// declared property getter: - (int)mediaFilesLock;	// 0x301cd5cd
// declared property getter: - (dispatch_queue_s *)metadataFetchQ;	// 0x301cd50d
// declared property getter: - (unsigned)numberOfDownloadableItems;	// 0x301cd56d
// declared property setter: - (void)setAccessRestrictedAppleDevice:(BOOL)device;	// 0x301cd49d
// declared property setter: - (void)setAllowsSyncingClock:(BOOL)clock;	// 0x301cd65d
// declared property setter: - (void)setBatteryLevel:(unsigned)level;	// 0x301cd5fd
// declared property setter: - (void)setBatteryLevelAvailable:(BOOL)available;	// 0x301cd61d
// declared property setter: - (void)setBeingEjected:(BOOL)ejected;	// 0x301cd69d
// declared property setter: - (void)setContentCatalogPercentCompleted:(unsigned)completed;	// 0x301cd63d
// declared property setter: - (void)setContentReceived:(BOOL)received;	// 0x301cd55d
// declared property setter: - (void)setContents:(id)contents;	// 0x301ce255
// declared property setter: - (void)setContentsLock:(int)lock;	// 0x301cd5bd
// declared property setter: - (void)setDeviceQSemaphore:(dispatch_semaphore_s *)semaphore;	// 0x301cd4bd
// declared property setter: - (void)setDownloadCancelTimestamp:(double)timestamp;	// 0x301ce171
// declared property setter: - (void)setDownloadQ:(dispatch_queue_s *)q;	// 0x301cd4fd
// declared property setter: - (void)setEjectable:(BOOL)ejectable;	// 0x301cd6bd
// declared property setter: - (void)setEstimatedNumberOfDownloadableItems:(unsigned)downloadableItems;	// 0x301cd59d
// declared property setter: - (void)setGeneralQ:(dispatch_queue_s *)q;	// 0x301cd4dd
// declared property setter: - (void)setLocked:(BOOL)locked;	// 0x301cd67d
// declared property setter: - (void)setMediaFiles:(id)files;	// 0x301ce281
// declared property setter: - (void)setMediaFilesLock:(int)lock;	// 0x301cd5dd
// declared property setter: - (void)setMetadataFetchQ:(dispatch_queue_s *)q;	// 0x301cd51d
// declared property setter: - (void)setNumberOfDownloadableItems:(unsigned)downloadableItems;	// 0x301cd57d
// declared property setter: - (void)setThumbnailFetchQ:(dispatch_queue_s *)q;	// 0x301cd53d
// declared property setter: - (void)setTimeOffset:(double)offset;	// 0x301ce119
// declared property setter: - (void)setToBeNotifiedAddedItems:(id)beNotifiedAddedItems;	// 0x301ce2ad
// declared property setter: - (void)setVolumePath:(id)path;	// 0x301ce229
// declared property getter: - (dispatch_queue_s *)thumbnailFetchQ;	// 0x301cd52d
// declared property getter: - (double)timeOffset;	// 0x301ce145
// declared property getter: - (id)toBeNotifiedAddedItems;	// 0x301ce211
- (void)unlockContents;	// 0x301cd6fd
- (void)unlockMediaFiles;	// 0x301cd715
// declared property getter: - (id)volumePath;	// 0x301ce1c9
@end
