/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebEditCommand : NSObject {
@private
	RefPtr<WebCore::EditCommand> m_command;	// 4 = 0x4
}
+ (id)commandWithEditCommand:(PassRefPtr<WebCore::EditCommand>)editCommand;	// 0x3050a379
+ (void)initialize;	// 0x3050a36d
- (id)initWithEditCommand:(PassRefPtr<WebCore::EditCommand>)editCommand;	// 0x3050a4e5
- (id).cxx_construct;	// 0x3050a4d5
- (void).cxx_destruct;	// 0x3051a875
- (EditCommand *)command;	// 0x3051a865
- (void)dealloc;	// 0x3051b221
- (void)finalize;	// 0x3051b1f1
@end
