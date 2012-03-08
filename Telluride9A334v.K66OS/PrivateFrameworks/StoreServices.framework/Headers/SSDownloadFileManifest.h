/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class SSXPCConnection;

@interface SSDownloadFileManifest : NSObject {
@private
	SSXPCConnection *_connection;	// 4 = 0x4
	int _manifestType;	// 8 = 0x8
}
@property(readonly, assign) int manifestType;	// G=0x3250aeb5; 
- (id)init;	// 0x3250ab25
- (id)initWithManifestType:(int)manifestType;	// 0x3250ab39
- (void)_removeItemsWithAssetPaths:(id)assetPaths completionBlock:(id)block;	// 0x3250b0e9
- (void)dealloc;	// 0x3250abc5
- (void)getPathsForFilesWithClass:(int)aClass completionBlock:(id)block;	// 0x3250ac11
// declared property getter: - (int)manifestType;	// 0x3250aeb5
- (void)rebuildManifestWithCompletionBlock:(id)completionBlock;	// 0x3250aec5
- (void)removeItemWithAssetPath:(id)assetPath completionBlock:(id)block;	// 0x3250af9d
- (void)removeItemsWithAssetPaths:(id)assetPaths completionBlock:(id)block;	// 0x3250b06d
@end
