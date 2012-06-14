/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DataAccess-Structs.h"
#import <NSObject.h> // Unknown library

@class NoteContext;

@interface DALocalDBHelper : NSObject {
	void *_abDB;	// 4 = 0x4
	int _abConnectionCount;	// 8 = 0x8
	CalDatabase *_calDB;	// 12 = 0xc
	int _calConnectionCount;	// 16 = 0x10
	void *_bookmarkDB;	// 20 = 0x14
	int _bookmarkConnectionCount;	// 24 = 0x18
	NoteContext *_noteDB;	// 28 = 0x1c
	int _noteConnectionCount;	// 32 = 0x20
	id _calUnitTestCallbackBlock;	// 36 = 0x24
}
@property(readonly, assign) void *abDB;	// G=0x3356da39; converted property
@property(readonly, assign) void *bookmarkDB;	// G=0x3356e989; converted property
@property(readonly, assign) int calConnectionCount;	// G=0x3356e979; converted property
@property(readonly, assign) CalDatabase *calDB;	// G=0x3356e009; converted property
@property(readonly, assign) int noteConnectionCount;	// G=0x3356f205; converted property
@property(readonly, retain) NoteContext *noteDB;	// G=0x3356edf5; converted property
+ (void)abSetTestABDBDir:(id)dir;	// 0x3356f215
+ (id)abTestABDBDir;	// 0x3356f299
+ (void)calSetTestCalDBDir:(id)dir;	// 0x3356f2a9
+ (id)calTestCalDBDir;	// 0x3356f32d
+ (id)sharedInstanceForAccountType:(id)accountType creatingClass:(Class)aClass;	// 0x3356d965
- (void)_registerForAddressBookYieldNotifications;	// 0x3356da49
- (void)_registerForCalendarYieldNotifications;	// 0x3356e0bd
- (BOOL)abCloseDBAndSave:(BOOL)save;	// 0x3356ded9
- (id)abConstraintPlistPath;	// 0x3356e005
// converted property getter: - (void *)abDB;	// 0x3356da39
- (void)abOpenDB;	// 0x3356db99
- (void)abProcessAddedImages;	// 0x3356dd85
- (void)abProcessAddedRecords;	// 0x3356dd19
- (BOOL)abSaveDB;	// 0x3356ddf1
- (void)bookmarkCloseDBAndSave:(BOOL)save;	// 0x3356ec2d
// converted property getter: - (void *)bookmarkDB;	// 0x3356e989
- (BOOL)bookmarkOpenDB;	// 0x3356ea3d
- (void)bookmarkSaveDB;	// 0x3356eb71
- (BOOL)calCloseDBAndSave:(BOOL)save;	// 0x3356e7a9
// converted property getter: - (int)calConnectionCount;	// 0x3356e979
// converted property getter: - (CalDatabase *)calDB;	// 0x3356e009
- (void)calOpenDB;	// 0x3356e20d
- (void)calOpenDBWithChangeLogging;	// 0x3356e36d
- (BOOL)calSaveDB;	// 0x3356e4b1
- (BOOL)calSaveDBAndFlushCaches;	// 0x3356e62d
- (void)calUnitTestsSetCallbackBlockForSave:(id)save;	// 0x3356f33d
- (BOOL)noteCloseDBAndSave:(BOOL)save;	// 0x3356f0cd
// converted property getter: - (int)noteConnectionCount;	// 0x3356f205
// converted property getter: - (id)noteDB;	// 0x3356edf5
- (void)noteOpenDB;	// 0x3356eea9
- (BOOL)noteSaveDB;	// 0x3356f009
@end
