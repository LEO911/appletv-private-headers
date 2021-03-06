/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISDialogOperation.h"


@interface ISRetryDialogOperation : ISDialogOperation {
	BOOL _shouldRetry;	// 80 = 0x50
}
@property(assign) BOOL shouldRetry;	// G=0x36955e3d; S=0x36955e4d; @synthesize=_shouldRetry
+ (id)operationWithTitle:(id)title message:(id)message;	// 0x36955bed
- (void)handleButtonSelected:(int)selected withResponseDictionary:(id)responseDictionary;	// 0x36955e01
// declared property setter: - (void)setShouldRetry:(BOOL)retry;	// 0x36955e4d
// declared property getter: - (BOOL)shouldRetry;	// 0x36955e3d
@end

