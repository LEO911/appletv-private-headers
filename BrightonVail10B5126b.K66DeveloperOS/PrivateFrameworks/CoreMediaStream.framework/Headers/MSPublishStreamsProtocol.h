/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import "MSStreamsProtocol.h"

@class NSArray;

@interface MSPublishStreamsProtocol : MSStreamsProtocol {
	MSPSPCContext _context;	// 12 = 0xc
	NSArray *_assetCollectionsInFlight;	// 92 = 0x5c
	MSPSPCUCContext _UCContext;	// 96 = 0x60
}
@property(assign) id delegate;	// G=0x3375753d; S=0x33757569; converted property
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x33757595
- (void).cxx_destruct;	// 0x33758fe1
- (void)_coreProtocolDidFailAuthenticationError:(id)_coreProtocol;	// 0x33758e29
- (void)_coreProtocolDidFinishResponse:(id)_coreProtocol error:(id)error;	// 0x33758d01
- (void)_coreProtocolDidFinishUCResults:(id)_coreProtocol error:(id)error;	// 0x33758f0d
- (BOOL)_insertInfoAboutAsset:(id)asset intoDictionary:(id)dictionary outError:(id *)error;	// 0x33757865
- (id)_metadataDictForAsset:(id)asset outError:(id *)error;	// 0x33757bbd
- (id)_metadataDictForAssetCollection:(id)assetCollection outError:(id *)error;	// 0x33758219
- (id)_missingAssetFieldErrorWithFieldName:(id)fieldName;	// 0x337577b9
- (void)_resetConnectionVariables;	// 0x33757ba5
- (void)abort;	// 0x33758cd1
- (void)dealloc;	// 0x33757751
// converted property getter: - (id)delegate;	// 0x3375753d
- (void)sendMetadataForAssetCollections:(id)assetCollections;	// 0x33758615
- (void)sendUploadCompleteForAssetCollections:(id)assetCollections;	// 0x33758b01
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x33757569
@end
