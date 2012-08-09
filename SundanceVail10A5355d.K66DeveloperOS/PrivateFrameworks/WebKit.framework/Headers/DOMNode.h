/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <DOMNode.h> // Unknown library


@interface DOMNode (WebDOMNodeOperations)
- (id)webArchive;	// 0x316ad065
@end

@interface DOMNode (WebDOMNodeOperationsPendingPublic)
- (CGRect)_renderRect:(bool *)rect;	// 0x316ad2f5
- (id)markupString;	// 0x316ad1a1
@end

@interface DOMNode (WebDOMNodeOperationsPrivate)
- (void)hidePlaceholder;	// 0x316ad4f5
- (BOOL)isHorizontalWritingMode;	// 0x316ad4c1
- (void)showPlaceholderIfNecessary;	// 0x316ad569
- (id)webArchiveByFilteringSubframes:(id)subframes;	// 0x316ad31d
@end

@interface DOMNode (WebDOMNodeOperationsInternal)
- (id)_subresourceURLs;	// 0x316ad5dd
@end

@interface DOMNode (VisiblePositionExtensions)
- (id)endPosition;	// 0x317085bd
- (id)rangeOfContents;	// 0x317082cd
- (id)startPosition;	// 0x31708349
@end
