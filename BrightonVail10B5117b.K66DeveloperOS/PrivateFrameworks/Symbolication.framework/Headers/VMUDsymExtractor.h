/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUSymbolExtractor.h"


@interface VMUDsymExtractor : VMUSymbolExtractor {
}
+ (id)directoryForDsymBundle:(id)dsymBundle;	// 0x35790f21
+ (id)dsymExtractorWithMachOHeader:(id)machOHeader;	// 0x3579127d
+ (id)dsymPathForHeaderPath:(id)headerPath uuid:(id)uuid searchingDirectories:(id)directories;	// 0x35791279
+ (id)fullHeaderPathForBaseBinaryDirectory:(id)baseBinaryDirectory oldHeaderPath:(id)path checkUUID:(id)uuid architecture:(id)architecture;	// 0x35790f81
+ (id)localDsymPathForHeaderPath:(id)headerPath uuid:(id)uuid;	// 0x35791181
+ (id)spotlightDsymPathForHeaderPath:(id)headerPath uuid:(id)uuid;	// 0x35791275
- (id)initWithMachOHeader:(id)machOHeader;	// 0x357912b9
@end

