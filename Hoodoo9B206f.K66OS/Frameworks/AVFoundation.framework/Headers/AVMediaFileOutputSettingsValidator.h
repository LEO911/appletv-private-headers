/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVOutputSettingsValidation.h"
#import <NSObject.h> // Unknown library

@class AVMediaFileType;

@interface AVMediaFileOutputSettingsValidator : NSObject <AVOutputSettingsValidation> {
@private
	AVMediaFileType *_fileType;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) AVMediaFileType *fileType;	// G=0x326e49f1; 
+ (void)initialize;	// 0x326e46b5
+ (id)mediaFileOutputSettingsValidatorForFileType:(id)fileType;	// 0x326e480d
- (id)init;	// 0x326e4899
- (id)initWithFileType:(id)fileType;	// 0x326e48ad
- (void)dealloc;	// 0x326e49a5
// declared property getter: - (id)fileType;	// 0x326e49f1
- (BOOL)validateAudioOutputSettings:(id)settings reason:(id *)reason;	// 0x326e4a01
- (BOOL)validateVideoOutputSettings:(id)settings reason:(id *)reason;	// 0x326e4b8d
@end

