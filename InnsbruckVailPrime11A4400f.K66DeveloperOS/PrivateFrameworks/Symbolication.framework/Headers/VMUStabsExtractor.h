/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUSymbolExtractor.h"


@interface VMUStabsExtractor : VMUSymbolExtractor {
}
+ (id)stabsExtractorWithMachOHeader:(id)machOHeader;	// 0x32904ef5
+ (id)symbolForAddress:(unsigned long long)address withMachOHeader:(id)machOHeader;	// 0x32904f3d
- (id)initWithMachOHeader:(id)machOHeader forAddress:(unsigned long long)address;	// 0x32904fc5
- (void)readIndirectSymbolsFromMachOHeader:(id)machOHeader section:(id)section nsyms:(unsigned)nsyms indirectSymbols:(id)symbols nlist:(id)nlist stringTable:(id)table;	// 0x329052e9
- (void)readStabsFromMachOHeader:(id)machOHeader nsyms:(unsigned)nsyms nlist:(id)nlist stringTable:(id)table forAddress:(unsigned long long)address;	// 0x329055e5
@end
