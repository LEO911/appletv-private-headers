/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSelectionHandler.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFlickrSaveRemoveSearchSelectionHandler : XXUnknownSuperclass <BRSelectionHandler> {
	NSString *_searchTerm;	// 4 = 0x4
}
+ (id)selectionHandlerWithSearchTerm:(id)searchTerm;	// 0x192f7d
- (id)initWithSearchTerm:(id)searchTerm;	// 0x192fb9
- (void)dealloc;	// 0x192fed
- (BOOL)handleSelectionForControl:(id)control;	// 0x193039
@end

