/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ExFAT.framework/ExFAT
 */

#import "ExFAT-Structs.h"
#import "UserFSFile.h"
#import "ExFATItem.h"

@class NSString, ExFATVolume;

@interface ExFATFile : ExFATItem <UserFSFile> {
}
@property(readonly, assign, nonatomic) long long createdDate;
@property(readonly, assign, nonatomic) BOOL isDirectory;	// G=0x309add35; 
@property(readonly, assign, nonatomic) unsigned long long length;
@property(readonly, assign, nonatomic, getter=isLocked) BOOL locked;
@property(readonly, assign, nonatomic) long long modifiedDate;
@property(readonly, assign, nonatomic) NSString *name;
@property(retain, nonatomic) ExFATVolume *volume;
- (id)debugDescription;	// 0x309add39
// declared property getter: - (BOOL)isDirectory;	// 0x309add35
- (id)openStream;	// 0x309ade81
@end

