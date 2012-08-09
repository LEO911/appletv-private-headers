/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <NSObject.h> // Unknown library


@interface AXReportSender : NSObject {
	BOOL _shouldAnnounce;	// 4 = 0x4
}
@property(assign, nonatomic) BOOL shouldAnnounce;	// G=0x34195c29; S=0x34195c39; @synthesize=_shouldAnnounce
+ (id)sharedInstance;	// 0x34195be1
- (void)sendExceptionForInstallingSafeCategory:(id)installingSafeCategory onTarget:(id)target;	// 0x34195bed
- (void)sendExceptionForSafeBlock:(id)safeBlock;	// 0x34195bf9
- (void)sendExceptionForSafeIVarKey:(id)safeIVarKey onTarget:(id)target;	// 0x34195bf5
- (void)sendExceptionForSafeValueKey:(id)safeValueKey onTarget:(id)target;	// 0x34195bf1
- (void)sendFailedAssertionWithErrorMessage:(id)errorMessage;	// 0x34195c25
- (void)sendGenericReport:(id)report withTag:(id)tag;	// 0x34195bfd
- (void)sendScreenshot:(id)screenshot type:(id)type description:(id)description;	// 0x34195be5
- (void)sendStackshot:(id)stackshot description:(id)description;	// 0x34195be9
- (void)sendValidateExceptionForClass:(id)aClass conformsToProtocol:(id)protocol errorMessage:(id)message;	// 0x34195c09
- (void)sendValidateExceptionForClass:(id)aClass errorMessage:(id)message;	// 0x34195c01
- (void)sendValidateExceptionForClass:(id)aClass hasClassMethod:(id)method errorMessage:(id)message;	// 0x34195c15
- (void)sendValidateExceptionForClass:(id)aClass hasInstanceMethod:(id)method errorMessage:(id)message;	// 0x34195c11
- (void)sendValidateExceptionForClass:(id)aClass hasInstanceVariable:(id)variable errorMessage:(id)message;	// 0x34195c0d
- (void)sendValidateExceptionForClass:(id)aClass hasProperty:(id)property errorMessage:(id)message;	// 0x34195c19
- (void)sendValidateExceptionForClass:(id)aClass isKindOfClass:(id)aClass2 errorMessage:(id)message;	// 0x34195c05
- (void)sendValidateExceptionForProtocol:(id)protocol hasMethod:(id)method errorMessage:(id)message;	// 0x34195c1d
- (void)sendValidateExceptionForProtocol:(id)protocol hasProperty:(id)property errorMessage:(id)message;	// 0x34195c21
// declared property setter: - (void)setShouldAnnounce:(BOOL)announce;	// 0x34195c39
// declared property getter: - (BOOL)shouldAnnounce;	// 0x34195c29
@end
