/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import </libobjc.A.h>


@interface GEOSearchProvider : NSObject {
	id _error;	// 4 = 0x4
}
@property(copy, nonatomic) id error;	// G=0x30eb0af9; S=0x30ea6ad9; @synthesize=_error
+ (unsigned short)provider;	// 0x30ef9999
- (void)cancel;	// 0x30ef99a1
- (void)dealloc;	// 0x30eaa8f1
// declared property getter: - (id)error;	// 0x30eb0af9
- (void)search:(id)search timeout:(int)timeout useBackgroundConnection:(BOOL)connection finished:(id)finished spellingSuggestion:(id)suggestion refinement:(id)refinement error:(id)error isCompletions:(BOOL)completions;	// 0x30ef999d
// declared property setter: - (void)setError:(id)error;	// 0x30ea6ad9
@end
