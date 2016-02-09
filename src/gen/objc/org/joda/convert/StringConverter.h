//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/andrefonseca/Documents/PodsFolders/joda-convert/src/main/java/org/joda/convert/StringConverter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("OrgJodaConvertStringConverter_INCLUDE_ALL")
#ifdef OrgJodaConvertStringConverter_RESTRICT
#define OrgJodaConvertStringConverter_INCLUDE_ALL 0
#else
#define OrgJodaConvertStringConverter_INCLUDE_ALL 1
#endif
#undef OrgJodaConvertStringConverter_RESTRICT

#if !defined (OrgJodaConvertStringConverter_) && (OrgJodaConvertStringConverter_INCLUDE_ALL || defined(OrgJodaConvertStringConverter_INCLUDE))
#define OrgJodaConvertStringConverter_

#define OrgJodaConvertToStringConverter_RESTRICT 1
#define OrgJodaConvertToStringConverter_INCLUDE 1
#include "org/joda/convert/ToStringConverter.h"

#define OrgJodaConvertFromStringConverter_RESTRICT 1
#define OrgJodaConvertFromStringConverter_INCLUDE 1
#include "org/joda/convert/FromStringConverter.h"

/*!
 @brief Interface defining conversion to and from a <code>String</code>.
 <p>
 StringConverter is an interface and must be implemented with care.
 Implementations must be immutable and thread-safe.
 */
@protocol OrgJodaConvertStringConverter < OrgJodaConvertToStringConverter, OrgJodaConvertFromStringConverter, NSObject, JavaObject >

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJodaConvertStringConverter)

J2OBJC_TYPE_LITERAL_HEADER(OrgJodaConvertStringConverter)

#endif

#pragma pop_macro("OrgJodaConvertStringConverter_INCLUDE_ALL")
