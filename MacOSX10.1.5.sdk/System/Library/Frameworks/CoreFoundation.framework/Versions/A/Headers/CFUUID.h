/*	CFUUID.h
	Copyright 1999-2001, Apple, Inc. All rights reserved.
*/

#if !defined(__COREFOUNDATION_CFUUID__)
#define __COREFOUNDATION_CFUUID__ 1

#include <CoreFoundation/CFBase.h>
#include <CoreFoundation/CFString.h>

#if defined(__cplusplus)
extern "C" {
#endif

typedef const struct __CFUUID * CFUUIDRef;

typedef struct {
    UInt8 byte0;
    UInt8 byte1;
    UInt8 byte2;
    UInt8 byte3;
    UInt8 byte4;
    UInt8 byte5;
    UInt8 byte6;
    UInt8 byte7;
    UInt8 byte8;
    UInt8 byte9;
    UInt8 byte10;
    UInt8 byte11;
    UInt8 byte12;
    UInt8 byte13;
    UInt8 byte14;
    UInt8 byte15;
} CFUUIDBytes;
/* The CFUUIDBytes struct is a 128-bit struct that contains the
raw UUID.  A CFUUIDRef can provide such a struct from the
CFUUIDGetUUIDBytes() function.  This struct is suitable for
passing to APIs that expect a raw UUID.
*/
        
CF_EXPORT
CFTypeID CFUUIDGetTypeID(void);

CF_EXPORT
CFUUIDRef CFUUIDCreate(CFAllocatorRef alloc);
    /* Create and return a brand new unique identifier */

CF_EXPORT
CFUUIDRef CFUUIDCreateWithBytes(CFAllocatorRef alloc, UInt8 byte0, UInt8 byte1, UInt8 byte2, UInt8 byte3, UInt8 byte4, UInt8 byte5, UInt8 byte6, UInt8 byte7, UInt8 byte8, UInt8 byte9, UInt8 byte10, UInt8 byte11, UInt8 byte12, UInt8 byte13, UInt8 byte14, UInt8 byte15);
    /* Create and return an identifier with the given contents.  This may return an existing instance with its ref count bumped because of uniquing. */

CF_EXPORT
CFUUIDRef CFUUIDCreateFromString(CFAllocatorRef alloc, CFStringRef uuidStr);
    /* Converts from a string representation to the UUID.  This may return an existing instance with its ref count bumped because of uniquing. */

CF_EXPORT
CFStringRef CFUUIDCreateString(CFAllocatorRef alloc, CFUUIDRef uuid);
    /* Converts from a UUID to its string representation. */

CF_EXPORT
CFUUIDRef CFUUIDGetConstantUUIDWithBytes(CFAllocatorRef alloc, UInt8 byte0, UInt8 byte1, UInt8 byte2, UInt8 byte3, UInt8 byte4, UInt8 byte5, UInt8 byte6, UInt8 byte7, UInt8 byte8, UInt8 byte9, UInt8 byte10, UInt8 byte11, UInt8 byte12, UInt8 byte13, UInt8 byte14, UInt8 byte15);
    /* This returns an immortal CFUUIDRef that should not be released.  It can be used in headers to declare UUID constants with #define. */

CF_EXPORT
CFUUIDBytes CFUUIDGetUUIDBytes(CFUUIDRef uuid);

CF_EXPORT
CFUUIDRef CFUUIDCreateFromUUIDBytes(CFAllocatorRef alloc, CFUUIDBytes bytes);

#if defined(__cplusplus)
}
#endif

#endif /* ! __COREFOUNDATION_CFUUID__ */

