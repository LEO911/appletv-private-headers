/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

#import </libobjc.A.h>
#import "LSApplicationWorkspaceObserverProtocol.h"
#import "NSSecureCoding.h"

@class NSUUID;

@interface LSApplicationWorkspaceObserver : NSObject <LSApplicationWorkspaceObserverProtocol, NSSecureCoding> {
	NSUUID *_uuid;	// 4 = 0x4
}
@property(retain, nonatomic) NSUUID *uuid;	// G=0x2e83996d; S=0x2e83997d; @synthesize=_uuid
+ (BOOL)supportsSecureCoding;	// 0x2e8397c9
- (id)init;	// 0x2e839805
- (id)initWithCoder:(id)coder;	// 0x2e839869
- (void)applicationInstallsArePrioritized:(id)prioritized arePaused:(id)paused;	// 0x2e839955
- (void)applicationInstallsDidCancel:(id)applicationInstalls;	// 0x2e839961
- (void)applicationInstallsDidChange:(id)applicationInstalls;	// 0x2e839945
- (void)applicationInstallsDidPause:(id)applicationInstalls;	// 0x2e839959
- (void)applicationInstallsDidPrioritize:(id)applicationInstalls;	// 0x2e839965
- (void)applicationInstallsDidResume:(id)applicationInstalls;	// 0x2e83995d
- (void)applicationInstallsDidStart:(id)applicationInstalls;	// 0x2e839941
- (void)applicationInstallsDidUpdateIcon:(id)applicationInstalls;	// 0x2e839949
- (void)applicationsDidInstall:(id)applications;	// 0x2e83994d
- (void)applicationsDidUninstall:(id)applications;	// 0x2e839951
- (void)dealloc;	// 0x2e8398f5
- (void)encodeWithCoder:(id)coder;	// 0x2e8397cd
- (void)networkUsageChanged:(BOOL)changed;	// 0x2e839969
// declared property setter: - (void)setUuid:(id)uuid;	// 0x2e83997d
// declared property getter: - (id)uuid;	// 0x2e83996d
@end

