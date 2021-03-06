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
@property(assign) BOOL shouldRetry;	// G=0x3352f1d9; S=0x3352f1f1; @synthesize=_shouldRetry
+ (id)operationWithTitle:(id)title message:(id)message;	// 0x3352ef91
- (void)handleButtonSelected:(int)selected withResponseDictionary:(id)responseDictionary;	// 0x3352f1a1
// declared property setter: - (void)setShouldRetry:(BOOL)retry;	// 0x3352f1f1
// declared property getter: - (BOOL)shouldRetry;	// 0x3352f1d9
@end

