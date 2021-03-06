/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSCoding.h"
#import "StoreServices-Structs.h"
#import "NSCopying.h"

@class SSOperationProgress;

@interface SSDownloadPhase : NSObject <SSCoding, NSCopying> {
@private
	SSOperationProgress *_operationProgress;	// 4 = 0x4
}
@property(readonly, assign) double estimatedSecondsRemaining;	// G=0x304f0dd5; 
@property(readonly, assign) SSOperationProgress *operationProgress;	// G=0x304f0ecd; 
@property(readonly, assign) int phaseType;	// G=0x304f0df5; 
@property(readonly, assign) float progressChangeRate;	// G=0x304f0e5d; 
@property(readonly, assign) int progressUnits;	// G=0x304f0e2d; 
@property(readonly, assign) long long progressValue;	// G=0x304f0e8d; 
@property(readonly, assign) long long totalProgressValue;	// G=0x304f0ead; 
- (id)init;	// 0x304f0ba5
- (id)initWithOperationProgress:(id)operationProgress;	// 0x304f0bb9
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x304f0cad
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x304f0d25
- (id)copyPropertyListEncoding;	// 0x304f0c59
- (id)copyWithZone:(NSZone *)zone;	// 0x304f0d61
- (void *)copyXPCEncoding;	// 0x304f0c79
- (void)dealloc;	// 0x304f0c0d
// declared property getter: - (double)estimatedSecondsRemaining;	// 0x304f0dd5
// declared property getter: - (id)operationProgress;	// 0x304f0ecd
// declared property getter: - (int)phaseType;	// 0x304f0df5
// declared property getter: - (float)progressChangeRate;	// 0x304f0e5d
// declared property getter: - (int)progressUnits;	// 0x304f0e2d
// declared property getter: - (long long)progressValue;	// 0x304f0e8d
// declared property getter: - (long long)totalProgressValue;	// 0x304f0ead
@end

