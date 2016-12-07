//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/andrefonseca/Documents/PodsFolders/joda-convert/src/main/java/org/joda/convert/TypedStringConverter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJodaConvertTypedStringConverter")
#ifdef RESTRICT_OrgJodaConvertTypedStringConverter
#define INCLUDE_ALL_OrgJodaConvertTypedStringConverter 0
#else
#define INCLUDE_ALL_OrgJodaConvertTypedStringConverter 1
#endif
#undef RESTRICT_OrgJodaConvertTypedStringConverter

#if !defined (OrgJodaConvertTypedStringConverter_) && (INCLUDE_ALL_OrgJodaConvertTypedStringConverter || defined(INCLUDE_OrgJodaConvertTypedStringConverter))
#define OrgJodaConvertTypedStringConverter_

#define RESTRICT_OrgJodaConvertStringConverter 1
#define INCLUDE_OrgJodaConvertStringConverter 1
#include "org/joda/convert/StringConverter.h"

@class IOSClass;

/*!
 @brief Interface defining conversion to and from a <code>String</code> together with the type.
 <p>
 TypedStringConverter is an interface and must be implemented with care.
 Implementations must be immutable and thread-safe.
 @since 1.7
 */
@protocol OrgJodaConvertTypedStringConverter < OrgJodaConvertStringConverter, JavaObject >

/*!
 @brief Gets the effective type that the converter works on.
 <p>
 For example, if a class declares the <code>FromString</code> and  <code>ToString</code>
 then the effective type of the converter is that class. If a subclass is
 queried for a converter, then the effective type is that of the superclass.
 @return the effective type
 */
- (IOSClass *)getEffectiveType;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJodaConvertTypedStringConverter)

J2OBJC_TYPE_LITERAL_HEADER(OrgJodaConvertTypedStringConverter)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJodaConvertTypedStringConverter")
