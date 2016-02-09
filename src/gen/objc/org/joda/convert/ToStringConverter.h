//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/andrefonseca/Documents/PodsFolders/joda-convert/src/main/java/org/joda/convert/ToStringConverter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("OrgJodaConvertToStringConverter_INCLUDE_ALL")
#ifdef OrgJodaConvertToStringConverter_RESTRICT
#define OrgJodaConvertToStringConverter_INCLUDE_ALL 0
#else
#define OrgJodaConvertToStringConverter_INCLUDE_ALL 1
#endif
#undef OrgJodaConvertToStringConverter_RESTRICT

#if !defined (OrgJodaConvertToStringConverter_) && (OrgJodaConvertToStringConverter_INCLUDE_ALL || defined(OrgJodaConvertToStringConverter_INCLUDE))
#define OrgJodaConvertToStringConverter_

/*!
 @brief Interface defining conversion to a <code>String</code>.
 <p>
 ToStringConverter is an interface and must be implemented with care.
 Implementations must be immutable and thread-safe.
 */
@protocol OrgJodaConvertToStringConverter < NSObject, JavaObject >

/*!
 @brief Converts the specified object to a <code>String</code>.
 @param object  the object to convert, not null
 @return the converted string, may be null but generally not
 */
- (NSString *)convertToStringWithId:(id)object;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJodaConvertToStringConverter)

J2OBJC_TYPE_LITERAL_HEADER(OrgJodaConvertToStringConverter)

#endif

#pragma pop_macro("OrgJodaConvertToStringConverter_INCLUDE_ALL")
