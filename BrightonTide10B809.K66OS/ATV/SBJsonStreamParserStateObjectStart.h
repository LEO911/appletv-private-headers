/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBJsonStreamParserState.h"


@interface SBJsonStreamParserStateObjectStart : SBJsonStreamParserState {
}
+ (id)sharedInstance;	// 0x4bf399
- (id)name;	// 0x4bf3d5
- (BOOL)needKey;	// 0x4bf42d
- (BOOL)parser:(id)parser shouldAcceptToken:(int)token;	// 0x4bf3e1
- (void)parser:(id)parser shouldTransitionTo:(int)to;	// 0x4bf3f1
@end

