/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQLassoGenerator.h"
#import <NSObject.h> // Unknown library


@interface GQHLasso : NSObject <GQLassoGenerator> {
}
+ (int)beginDocument:(id)document state:(id)state;	// 0x34c03e81
+ (int)beginWorkspace:(const char *)workspace state:(id)state;	// 0x34c03f85
+ (Class)beginWorkspacePage:(id)page state:(id)state;	// 0x34c04105
+ (int)endDocument:(id)document state:(id)state;	// 0x34c03ee1
+ (int)endWorkspace:(id)workspace;	// 0x34c03fb9
+ (int)handleDrawableZOrder:(const char *)order state:(id)state;	// 0x34c04121
+ (int)handleStylesheet:(id)stylesheet state:(id)state;	// 0x34c03f3d
+ (int)handleWorkspaceStyle:(id)style state:(id)state;	// 0x34c04101
@end

