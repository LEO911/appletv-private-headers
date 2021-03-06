/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTDocumentLoaderDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class RUIYTDocumentLoader, NSString, NSMutableDictionary, NSDictionary;

__attribute__((visibility("hidden")))
@interface RUIYTSearchResultsLoader : XXUnknownSuperclass <RUIYTDocumentLoaderDelegate> {
	RUIYTDocumentLoader *_documentLoader;	// 4 = 0x4
	NSMutableDictionary *_loadingResults;	// 8 = 0x8
	NSString *_searchTerm;	// 12 = 0xc
}
@property(readonly, assign) NSDictionary *results;	// G=0x2a0719; 
@property(readonly, assign) NSString *searchTerm;	// G=0x2a0b21; @synthesize=_searchTerm
- (id)init;	// 0x2a0639
- (void).cxx_destruct;	// 0x2a0b41
- (void)dealloc;	// 0x2a06b9
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0x2a0995
- (void)loadResultsForSearchTerm:(id)searchTerm;	// 0x2a072d
// declared property getter: - (id)results;	// 0x2a0719
// declared property getter: - (id)searchTerm;	// 0x2a0b21
@end

