/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObject.h"

@class NSURL, NSNumber, NSString;

@interface EKAttachment : EKObject {
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x31fc3829; 
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x31fc3a51; 
@property(readonly, assign, nonatomic) NSString *fileFormat;	// G=0x31fc3899; 
@property(readonly, assign, nonatomic) NSString *fileName;	// G=0x31fc3845; 
@property(readonly, assign, nonatomic) NSNumber *fileSize;	// G=0x31fc3901; 
@property(readonly, assign, nonatomic) BOOL isBinary;	// G=0x31fc38b5; 
@property(readonly, assign, nonatomic) NSURL *localURL;	// G=0x31fc38e5; 
- (id)init;	// 0x31fc37bd
// declared property getter: - (id)URL;	// 0x31fc3829
// declared property getter: - (id)UUID;	// 0x31fc3a51
- (int)compareFileNames:(id)names;	// 0x31fc3a6d
- (id)description;	// 0x31fc3b21
// declared property getter: - (id)fileFormat;	// 0x31fc3899
// declared property getter: - (id)fileName;	// 0x31fc3845
// declared property getter: - (id)fileSize;	// 0x31fc3901
// declared property getter: - (BOOL)isBinary;	// 0x31fc38b5
- (BOOL)isEqual:(id)equal;	// 0x31fc3aa9
// declared property getter: - (id)localURL;	// 0x31fc38e5
@end

