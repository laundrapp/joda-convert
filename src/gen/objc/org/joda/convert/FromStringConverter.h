//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/andrefonseca/Documents/PodsFolders/joda-convert/src/main/java/org/joda/convert/FromStringConverter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("OrgJodaConvertFromStringConverter_INCLUDE_ALL")
#ifdef OrgJodaConvertFromStringConverter_RESTRICT
#define OrgJodaConvertFromStringConverter_INCLUDE_ALL 0
#else
#define OrgJodaConvertFromStringConverter_INCLUDE_ALL 1
#endif
#undef OrgJodaConvertFromStringConverter_RESTRICT

#if !defined (OrgJodaConvertFromStringConverter_) && (OrgJodaConvertFromStringConverter_INCLUDE_ALL || defined(OrgJodaConvertFromStringConverter_INCLUDE))
#define OrgJodaConvertFromStringConverter_

@class IOSClass;

/*!
 @brief Interface defining conversion from a <code>String</code>.
 <p>
 FromStringConverter is an interface and must be implemented with care.
 Implementations must be immutable and thread-safe.
 */
@protocol OrgJodaConvertFromStringConverter < NSObject, JavaObject >

/*!
 @brief Converts the specified object from a <code>String</code>.
 @param cls  the class to convert to, not null
 @param str  the string to convert, not null
 @return the converted object, may be null but generally not
 */
- (id)convertFromStringWithIOSClass:(IOSClass *)cls
                       withNSString:(NSString *)str;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJodaConvertFromStringConverter)

J2OBJC_TYPE_LITERAL_HEADER(OrgJodaConvertFromStringConverter)

#endif

#pragma pop_macro("OrgJodaConvertFromStringConverter_INCLUDE_ALL")
