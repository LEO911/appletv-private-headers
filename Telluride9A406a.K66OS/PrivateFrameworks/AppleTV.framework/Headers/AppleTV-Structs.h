/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

typedef struct _NSZone NSZone;

typedef struct __ATVMediaItem *ATVMediaItemRef;

typedef struct OpaqueJSValue OpaqueJSValue;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct BRTimeRange {
	double _field1;
	double _field2;
} BRTimeRange;

typedef struct __CFString *CFStringRef;

typedef struct __ATVMediaQuery *ATVMediaQueryRef;

typedef struct CGContext *CGContextRef;

typedef struct __ATVMediaType *ATVMediaTypeRef;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct __CFRunLoop *CFRunLoopRef;

typedef struct __CFRunLoopSource *CFRunLoopSourceRef;

typedef struct _opaque_pthread_mutex_t {
	long __sig;
	BOOL __opaque[40];
} opaque_pthread_mutex_t;

typedef struct _NSRange {
	unsigned location;
	unsigned length;
} NSRange;

typedef struct __CFSocket *CFSocketRef;

typedef struct __SCPreferences *SCPreferencesRef;

typedef struct __SCNetworkService *SCNetworkServiceRef;

typedef struct __CFNumber *CFNumberRef;

typedef struct __IOHIDEventSystemClient *IOHIDEventSystemClientRef;

typedef struct __IOHIDServiceClient *IOHIDServiceClientRef;

typedef struct __IOHIDEvent *IOHIDEventRef;

typedef struct dispatch_queue_s dispatch_queue_s;

typedef struct sqlite3 sqlite3;

typedef struct __ATVMediaCollection *ATVMediaCollectionRef;

typedef struct __ATVDataClient *ATVDataClientRef;

typedef struct OpaqueJSContext OpaqueJSContext;

typedef struct OpaqueJSClass OpaqueJSClass;

typedef struct CGColor *CGColorRef;

typedef struct CGAffineTransform {
	float _field1;
	float _field2;
	float _field3;
	float _field4;
	float _field5;
	float _field6;
} CGAffineTransform;

typedef struct CGImage *CGImageRef;

typedef struct CGImageSource *CGImageSourceRef;

typedef struct URegularExpression URegularExpression;

typedef struct __ATVDataServer *ATVDataServerRef;

typedef struct CATransform3D {
	float m11;
	float m12;
	float m13;
	float m14;
	float m21;
	float m22;
	float m23;
	float m24;
	float m31;
	float m32;
	float m33;
	float m34;
	float m41;
	float m42;
	float m43;
	float m44;
} CATransform3D;

typedef struct CGFunction *CGFunctionRef;

typedef struct __WiFiDeviceClient WiFiDeviceClient;

typedef struct __WiFiNetwork WiFiNetwork;

typedef struct _xmlDoc xmlDoc;
typedef struct _xmlNs xmlNs;
typedef struct _xmlAttr xmlAttr;
typedef struct _xmlNode {
	void *_field1;
	int _field2;
	char *_field3;
	struct xmlNode *_field4;
	struct xmlNode *_field5;
	struct xmlNode *_field6;
	struct xmlNode *_field7;
	struct xmlNode *_field8;
	xmlDoc *_field9;
	xmlNs *_field10;
	char *_field11;
	xmlAttr *_field12;
	xmlNs *_field13;
	void *_field14;
	unsigned short _field15;
	unsigned short _field16;
} xmlNode;

struct _xmlDoc;

struct _xmlNs;

struct _xmlAttr;

typedef struct BRFocusEdge {
	CGPoint _field1;
	CGPoint _field2;
} BRFocusEdge;

typedef struct __CTFont *CTFontRef;

typedef struct __SCDynamicStore *SCDynamicStoreRef;

typedef struct __CTLine *CTLineRef;

typedef struct __CTTypesetter *CTTypesetterRef;

typedef struct __ATVMediaFilter *ATVMediaFilterRef;

typedef struct __ATVMediaCompoundFilter *ATVMediaCompoundFilterRef;

typedef struct _xmlSchema xmlSchema;

typedef struct {
	unsigned _field1[8];
} XXStruct_kUSYWB;

typedef struct _xpc_connection_s xpc_connection_s;

typedef struct __CFArray *CFArrayRef;

typedef struct __SCNetworkReachability *SCNetworkReachabilityRef;

typedef struct __SecTrust SecTrust;

typedef struct SBSProcessAssertion *SBSProcessAssertionRef;

typedef struct __CFUserNotification *CFUserNotificationRef;

typedef struct sqlite3_stmt sqlite3_stmt;

typedef struct __CFDictionary *CFDictionaryRef;

typedef struct dispatch_semaphore_s dispatch_semaphore_s;

typedef struct MutexInternal MutexInternal;

typedef struct _opaque_pthread_t opaque_pthread_t;

typedef struct Time {
	unsigned long long time;
} Time;

typedef struct Mutex {
	/*function-pointer*/ void **_vptr$Lock;
	MutexInternal *_internal;
	opaque_pthread_t *_owner;
	int _lockCount;
	Time *_lockedTime;
	bool _trackLocktime;
	Time _minTime;
} Mutex;

typedef struct ConsoleSink {
	/*function-pointer*/ void **_field1;
	Mutex _field2;
	int _field3;
} ConsoleSink;

typedef struct NrdLibImpl NrdLibImpl;

template<>
struct auto_ptr<netflix::NrdLib::NrdLibImpl> {
	NrdLibImpl *_M_ptr;
};

typedef struct NrdLib {
	auto_ptr<netflix::NrdLib::NrdLibImpl> _field1;
} NrdLib;

typedef struct NBPLauncher *NBPLauncherRef;

typedef struct NBPApplication {
	/*function-pointer*/ void **_field1;
	NBPLauncherRef _field2;
} NBPApplication;

typedef struct XML_ParserStruct *XML_ParserStructRef;

typedef struct {
	unsigned _field1 : 8;
	unsigned _field2 : 4;
	unsigned _field3 : 1;
	unsigned _field4 : 1;
	unsigned _field5 : 18;
	unsigned short _field6[8];
} XXStruct_9isexA;

typedef struct Formatter Formatter;

typedef struct IOSObjCEventConnection {
	/*function-pointer*/ void **_field1;
	unsigned _field2;
	bool _field3;
	bool _field4;
	Formatter *_field5;
} IOSObjCEventConnection;

typedef struct CdnSelection CdnSelection;

template<>
struct _Sp_counted_base<_S_atomic>;

template<>
struct __shared_count<_S_atomic> {
	_Sp_counted_base<_S_atomic> *_M_pi;
};

template<>
struct shared_ptr<netflix::EDSClient::CdnSelection> {
	CdnSelection *_M_ptr;
	__shared_count<_S_atomic> _M_refcount;
};

typedef struct Manifest Manifest;

template<>
struct shared_ptr<const netflix::ase::Manifest> {
	Manifest *_field1;
	__shared_count<_S_atomic> _field2;
};

template<>
struct vector<netflix::nccp::CdnEntity,std::allocator<netflix::nccp::CdnEntity> >;

template<>
struct shared_ptr<const std::vector<netflix::nccp::CdnEntity, std::allocator<netflix::nccp::CdnEntity> > > {
	vector<netflix::nccp::CdnEntity,std::allocator<netflix::nccp::CdnEntity> > *_field1;
	__shared_count<_S_atomic> _field2;
};

typedef struct _Alloc_hider {
	char *_field1;
} Alloc_hider;

template<>
struct basic_string<char,std::char_traits<char>,std::allocator<char> > {
	Alloc_hider _field1;
};

template<>
struct less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >;

typedef struct _Rb_tree_node_base {
	int _field1;
	struct Rb_tree_node_base *_field2;
	struct Rb_tree_node_base *_field3;
	struct Rb_tree_node_base *_field4;
} Rb_tree_node_base;

template<>
struct _Rb_tree_impl<std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >,false> {
	less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > _field1;
	Rb_tree_node_base _field2;
	unsigned _field3;
};

template<>
struct _Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,std::pair<const std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::basic_string<char, std::char_traits<char>, std::allocator<char> > >,std::_Select1st<std::pair<const std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >,std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >,std::allocator<std::pair<const std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::basic_string<char, std::char_traits<char>, std::allocator<char> > > > > {
	_Rb_tree_impl<std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >,false> _field1;
};

template<>
struct map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,std::basic_string<char, std::char_traits<char>, std::allocator<char> >,std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >,std::allocator<std::pair<const std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::basic_string<char, std::char_traits<char>, std::allocator<char> > > > > {
	_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,std::pair<const std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::basic_string<char, std::char_traits<char>, std::allocator<char> > >,std::_Select1st<std::pair<const std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >,std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >,std::allocator<std::pair<const std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::basic_string<char, std::char_traits<char>, std::allocator<char> > > > > _field1;
};

template<>
struct PrimitiveEntity<unsigned int> {
	/*function-pointer*/ void **_field1;
	basic_string<char,std::char_traits<char>,std::allocator<char> > _field2;
	map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,std::basic_string<char, std::char_traits<char>, std::allocator<char> >,std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >,std::allocator<std::pair<const std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::basic_string<char, std::char_traits<char>, std::allocator<char> > > > > _field3;
	unsigned _field4;
};

template<>
struct PrimitiveEntity<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > {
	/*function-pointer*/ void **_field1;
	basic_string<char,std::char_traits<char>,std::allocator<char> > _field2;
	map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,std::basic_string<char, std::char_traits<char>, std::allocator<char> >,std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >,std::allocator<std::pair<const std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::basic_string<char, std::char_traits<char>, std::allocator<char> > > > > _field3;
	basic_string<char,std::char_traits<char>,std::allocator<char> > _field4;
};

typedef struct CdnEntity {
	/*function-pointer*/ void **_field1;
	basic_string<char,std::char_traits<char>,std::allocator<char> > _field2;
	map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,std::basic_string<char, std::char_traits<char>, std::allocator<char> >,std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >,std::allocator<std::pair<const std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::basic_string<char, std::char_traits<char>, std::allocator<char> > > > > _field3;
	PrimitiveEntity<unsigned int> _field4;
	PrimitiveEntity<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > _field5;
	PrimitiveEntity<unsigned int> _field6;
	PrimitiveEntity<unsigned int> _field7;
} CdnEntity;

typedef struct Speed {
	unsigned long long _field1;
	bool _field2;
} Speed;

typedef struct SpeedMeasurement SpeedMeasurement;

template<>
struct shared_ptr<netflix::EDSClient::SpeedMeasurement> {
	SpeedMeasurement *_field1;
	__shared_count<_S_atomic> _field2;
};

typedef struct Cdn {
	CdnEntity _field1;
	Speed _field2;
	int _field3;
	basic_string<char,std::char_traits<char>,std::allocator<char> > _field4;
	shared_ptr<netflix::EDSClient::SpeedMeasurement> _field5;
	bool _field6;
	bool _field7;
	int _field8;
	Time _field9;
	Speed _field10;
	unsigned _field11;
	unsigned _field12;
	unsigned _field13;
	int _field14;
} Cdn;

typedef struct ManifestStream ManifestStream;

template<>
struct shared_ptr<netflix::ase::ManifestStream> {
	ManifestStream *_field1;
	__shared_count<_S_atomic> _field2;
};

typedef struct HttpStreamReader HttpStreamReader;

template<>
struct shared_ptr<netflix::http::HttpStreamReader> {
	HttpStreamReader *_M_ptr;
	__shared_count<_S_atomic> _M_refcount;
};

typedef struct IMediaControl {
	/*function-pointer*/ void **_field1;
} IMediaControl;

typedef struct NetflixMediaControlListener {
	/*function-pointer*/ void **_field1;
} NetflixMediaControlListener;

typedef struct AseTimeVal {
	unsigned long long time;
} AseTimeVal;

typedef struct _Vector_impl {
	unsigned *_M_start;
	unsigned *_M_finish;
	unsigned *_M_end_of_storage;
} Vector_impl;

template<>
struct vector<unsigned int,std::allocator<unsigned int> > {
	Vector_impl _M_impl;
};

typedef struct BwEntry {
	AseTimeVal _field1;
	AseTimeVal _field2;
	unsigned _field3;
	vector<unsigned int,std::allocator<unsigned int> > _field4;
} BwEntry;

typedef struct _Vector_impl {
	char *_field1;
	char *_field2;
	char *_field3;
} Vector_impl;

template<>
struct vector<unsigned char,std::allocator<unsigned char> > {
	Vector_impl _field1;
};


