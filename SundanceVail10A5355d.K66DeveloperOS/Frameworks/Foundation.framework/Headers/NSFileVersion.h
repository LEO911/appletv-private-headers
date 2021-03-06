/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSDate, NSURL, NSString;
@protocol NSCoding;

@interface NSFileVersion : NSObject {
	NSURL *_fileURL;	// 4 = 0x4
	id _library;	// 8 = 0x8
	NSString *_clientID;	// 12 = 0xc
	NSString *_name;	// 16 = 0x10
	NSURL *_contentsURL;	// 20 = 0x14
	BOOL _isBackup;	// 24 = 0x18
	NSString *_localizedName;	// 28 = 0x1c
	NSString *_localizedComputerName;	// 32 = 0x20
	NSDate *_modificationDate;	// 36 = 0x24
	BOOL _isResolved;	// 40 = 0x28
	BOOL _contentsURLIsAccessed;	// 41 = 0x29
	id _reserved1;	// 44 = 0x2c
	id _reserved2;	// 48 = 0x30
	BOOL _discardable;	// 52 = 0x34
}
@property(readonly, assign) NSURL *URL;	// G=0x3476ebc5; 
@property(readonly, assign, getter=_isBackup) BOOL _isBackup;	// G=0x34770891; 
@property(readonly, assign, getter=isConflict) BOOL conflict;	// G=0x3476ee8d; 
@property(assign, getter=isDiscardable) BOOL discardable;	// G=0x3476f711; S=0x3476f729; @synthesize=_discardable
@property(readonly, assign) NSString *localizedName;	// G=0x3476ec29; 
@property(readonly, assign) NSString *localizedNameOfSavingComputer;	// G=0x3476ec9d; 
@property(readonly, assign) NSDate *modificationDate;	// G=0x3476ed35; 
@property(readonly, assign) id<NSCoding> persistentIdentifier;	// G=0x3476eda9; 
@property(assign, getter=isResolved) BOOL resolved;	// G=0x3476f059; S=0x3476ef19; 
+ (void *)_addConflictObserverForItemAtURL:(id)url statusChangedHandler:(id)handler;	// 0x34770d71
+ (id)_addVersionOfItemAtURL:(id)url withContentsOfURL:(id)url2 options:(unsigned)options temporaryStorageIdentifier:(id *)identifier error:(id *)error;	// 0x3476ff6d
+ (id)_autosaveDirectoryURLCreateIfNecessary:(BOOL)necessary;	// 0x3476fa89
+ (BOOL)_conflictsExistForItemAtURL:(id)url;	// 0x34770b99
+ (id)_libraryForURL:(id)url clientID:(id)anId temporaryStorageIdentifier:(id *)identifier;	// 0x3476fb91
+ (void)_markConflicts:(id)conflicts asHandledForItemAtURL:(id)url;	// 0x34770bb1
+ (id)_otherVersionsOfItemAtURL:(id)url temporaryStorageIdentifier:(id)identifier;	// 0x3476fc9d
+ (void)_removeConflictObserver:(void *)observer;	// 0x34770d75
+ (BOOL)_removeOtherVersionsOfItemAtURL:(id)url temporaryStorageIdentifier:(id)identifier error:(id *)error;	// 0x34770289
+ (void)_removeTemporaryDirectoryAtURL:(id)url;	// 0x34770675
+ (id)_supportedGenerationalStorageClientIDs;	// 0x3476fb4d
+ (id)_temporaryDirectoryURLForNewVersionOfItemAtURL:(id)url temporaryStorageIdentifier:(id)identifier;	// 0x34770215
+ (id)_temporaryStorageLocationForIdentifier:(id)identifier;	// 0x3476faed
+ (id)_versionOfItemAtURL:(id)url forClientID:(id)clientID name:(id)name temporaryStorageIdentifier:(id)identifier evenIfDeleted:(BOOL)deleted;	// 0x34770481
+ (id)_versionOfItemAtURL:(id)url forPersistentIdentifier:(id)persistentIdentifier temporaryStorageIdentifier:(id)identifier;	// 0x3476fddd
+ (id)addVersionOfItemAtURL:(id)url withContentsOfURL:(id)url2 options:(unsigned)options error:(id *)error;	// 0x3476e9d5
+ (id)currentVersionOfItemAtURL:(id)url;	// 0x3476e7e5
+ (id)otherVersionsOfItemAtURL:(id)url;	// 0x3476e855
+ (BOOL)removeOtherVersionsOfItemAtURL:(id)url error:(id *)error;	// 0x3476f605
+ (id)temporaryDirectoryURLForNewVersionOfItemAtURL:(id)url;	// 0x3476ea05
+ (id)unresolvedConflictVersionsOfItemAtURL:(id)url;	// 0x3476ea35
+ (BOOL)unresolvedConflictsExistForItemAtURL:(id)url;	// 0x34770b61
+ (id)versionOfItemAtURL:(id)url forPersistentIdentifier:(id)persistentIdentifier;	// 0x3476e9b1
+ (id)versionsOfItemAtURL:(id)url;	// 0x34770a11
- (id)init;	// 0x3476e611
// declared property getter: - (id)URL;	// 0x3476ebc5
- (id)_documentInfo;	// 0x347706f5
- (id)_initWithFileURL:(id)fileURL library:(id)library clientID:(id)anId name:(id)name contentsURL:(id)url isBackup:(BOOL)backup revision:(id)revision;	// 0x3476f741
// declared property getter: - (BOOL)_isBackup;	// 0x34770891
- (void)_overrideModificationDateWithDate:(id)date;	// 0x347707b1
- (BOOL)_preserveConflictVersionLocally;	// 0x347708a1
- (BOOL)_setDocumentInfo:(id)info;	// 0x3477076d
- (void)dealloc;	// 0x3476e661
- (unsigned)hash;	// 0x3476e7bd
// declared property getter: - (BOOL)isConflict;	// 0x3476ee8d
// declared property getter: - (BOOL)isDiscardable;	// 0x3476f711
- (BOOL)isEqual:(id)equal;	// 0x3476e73d
// declared property getter: - (BOOL)isResolved;	// 0x3476f059
// declared property getter: - (id)localizedName;	// 0x3476ec29
// declared property getter: - (id)localizedNameOfSavingComputer;	// 0x3476ec9d
// declared property getter: - (id)modificationDate;	// 0x3476ed35
// declared property getter: - (id)persistentIdentifier;	// 0x3476eda9
- (BOOL)removeAndReturnError:(id *)error;	// 0x3476f485
- (id)replaceItemAtURL:(id)url options:(unsigned)options error:(id *)error;	// 0x3476f069
- (id)restoreOverItemAtURL:(id)url error:(id *)error;	// 0x34770b41
// declared property setter: - (void)setDiscardable:(BOOL)discardable;	// 0x3476f729
// declared property setter: - (void)setResolved:(BOOL)resolved;	// 0x3476ef19
@end

