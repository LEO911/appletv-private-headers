/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSObject.h"

@class NSString;
@protocol UIWebFindOnPageHighlighterDelegate;

@protocol UIWebFindOnPageHighlighter <NSObject>
@property(assign, nonatomic) id<UIWebFindOnPageHighlighterDelegate> delegate;
@property(readonly, assign, nonatomic) unsigned highlightedMatchIndex;
@property(readonly, assign, nonatomic) unsigned numberOfMatches;
@property(readonly, assign, nonatomic) NSString *searchText;
// declared property getter: - (id)delegate;
- (void)highlightNextMatch;
- (void)highlightPreviousMatch;
// declared property getter: - (unsigned)highlightedMatchIndex;
// declared property getter: - (unsigned)numberOfMatches;
// declared property getter: - (id)searchText;
// declared property setter: - (void)setDelegate:(id)delegate;
- (void)setSearchText:(id)text matchLimit:(unsigned)limit;
@end

