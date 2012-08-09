/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface CPMessageContext : NSObject {
	NSMutableSet *m_warnings;	// 4 = 0x4
	NSMutableSet *m_errors;	// 8 = 0x8
	NSMutableArray *m_currentObjectStack;	// 12 = 0xc
	NSMutableDictionary *m_placeholderToObjectIdMap;	// 16 = 0x10
}
+ (void)createContextForCurrentThread;	// 0x31d7cda5
+ (id)currentObjectOrPlaceholder;	// 0x31d46f21
+ (id)getErrorArray;	// 0x31d7cf15
+ (id)getWarningArray;	// 0x31d7ce85
+ (void)initialize;	// 0x31b80239
+ (BOOL)isFileStructuredStorage;	// 0x31d7cfa5
+ (void)popCurrentObject;	// 0x31d7d051
+ (void)popCurrentPlaceholder:(id)placeholder;	// 0x31d7d1f5
+ (void)pushCurrentObject:(id)object;	// 0x31d7cfb5
+ (id)pushCurrentPlaceholder;	// 0x31d7d12d
+ (void)removeContextForCurrentThread;	// 0x31d7ce35
+ (void)replacePlaceholdersWithObjects;	// 0x31d7d2e5
+ (void)reportError:(CPTaggedMessageStructure *)error;	// 0x31d7ca9d
+ (void)reportErrorException:(id)exception;	// 0x31d7cd11
+ (void)reportObject:(id)object withWarning:(CPTaggedMessageStructure *)warning;	// 0x31d7ca29
+ (void)reportObjectOrPlaceholder:(id)placeholder withWarning:(CPTaggedMessageStructure *)warning parameters:(void *)parameters;	// 0x31d47049
+ (void)reportWarning:(CPTaggedMessageStructure *)warning;	// 0x31d46e91
+ (void)reportWarningException:(id)exception;	// 0x31d7cb6d
+ (void)restoreObjectStack:(unsigned)stack;	// 0x31d7d581
+ (unsigned)saveObjectStack;	// 0x31d7d50d
+ (void)setIsFileStructuredStorage:(BOOL)storage;	// 0x31cda015
+ (void)setObject:(id)object forPlaceholder:(id)placeholder;	// 0x31d7d2e1
- (id)init;	// 0x31d7c869
- (void)dealloc;	// 0x31d7c99d
@end
