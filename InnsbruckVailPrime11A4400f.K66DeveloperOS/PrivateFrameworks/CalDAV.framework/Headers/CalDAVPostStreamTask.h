/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVPostTask.h>

@class NSString;

@interface CalDAVPostStreamTask : CoreDAVPostTask {
	NSString *_previousScheduleTag;	// 172 = 0xac
	NSString *_filename;	// 176 = 0xb0
}
@property(retain) NSString *filename;	// G=0x30289069; S=0x3028907d; @synthesize=_filename
@property(retain) NSString *previousScheduleTag;	// G=0x30289045; S=0x30289059; @synthesize=_previousScheduleTag
- (id)additionalHeaderValues;	// 0x30288de5
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x30288f9d
- (void)dealloc;	// 0x30288ce5
// declared property getter: - (id)filename;	// 0x30289069
- (id)lossyAsciiFilename;	// 0x30288d49
// declared property getter: - (id)previousScheduleTag;	// 0x30289045
- (id)requestBody;	// 0x30288f99
- (id)requestBodyStream;	// 0x30288f61
- (id)responseData;	// 0x30288fd1
// declared property setter: - (void)setFilename:(id)filename;	// 0x3028907d
// declared property setter: - (void)setPreviousScheduleTag:(id)tag;	// 0x30289059
- (id)utf8PercentEscapedFilename;	// 0x30288db9
@end

