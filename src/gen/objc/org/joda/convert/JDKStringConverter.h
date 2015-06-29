//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/HambroPerks/hambroperks_org/joda-convert/src/main/java/org/joda/convert/JDKStringConverter.java
//

#ifndef _OrgJodaConvertJDKStringConverter_H_
#define _OrgJodaConvertJDKStringConverter_H_

#include "J2ObjC_header.h"
#include "java/lang/Enum.h"
#include "org/joda/convert/TypedStringConverter.h"

@class IOSClass;

typedef NS_ENUM(NSUInteger, OrgJodaConvertJDKStringConverter) {
  OrgJodaConvertJDKStringConverter_STRING = 0,
  OrgJodaConvertJDKStringConverter_CHAR_SEQUENCE = 1,
  OrgJodaConvertJDKStringConverter_STRING_BUFFER = 2,
  OrgJodaConvertJDKStringConverter_STRING_BUILDER = 3,
  OrgJodaConvertJDKStringConverter_LONG = 4,
  OrgJodaConvertJDKStringConverter_INTEGER = 5,
  OrgJodaConvertJDKStringConverter_SHORT = 6,
  OrgJodaConvertJDKStringConverter_BYTE = 7,
  OrgJodaConvertJDKStringConverter_BYTE_ARRAY = 8,
  OrgJodaConvertJDKStringConverter_CHARACTER = 9,
  OrgJodaConvertJDKStringConverter_CHAR_ARRAY = 10,
  OrgJodaConvertJDKStringConverter_BOOLEAN = 11,
  OrgJodaConvertJDKStringConverter_DOUBLE = 12,
  OrgJodaConvertJDKStringConverter_FLOAT = 13,
  OrgJodaConvertJDKStringConverter_BIG_INTEGER = 14,
  OrgJodaConvertJDKStringConverter_BIG_DECIMAL = 15,
  OrgJodaConvertJDKStringConverter_ATOMIC_LONG = 16,
  OrgJodaConvertJDKStringConverter_ATOMIC_INTEGER = 17,
  OrgJodaConvertJDKStringConverter_ATOMIC_BOOLEAN = 18,
  OrgJodaConvertJDKStringConverter_LOCALE = 19,
  OrgJodaConvertJDKStringConverter_CLASS = 20,
  OrgJodaConvertJDKStringConverter_PACKAGE = 21,
  OrgJodaConvertJDKStringConverter_CURRENCY = 22,
  OrgJodaConvertJDKStringConverter_TIME_ZONE = 23,
  OrgJodaConvertJDKStringConverter_UUID = 24,
  OrgJodaConvertJDKStringConverter_URL = 25,
  OrgJodaConvertJDKStringConverter_URI = 26,
  OrgJodaConvertJDKStringConverter_INET_ADDRESS = 27,
  OrgJodaConvertJDKStringConverter_FILE = 28,
  OrgJodaConvertJDKStringConverter_DATE = 29,
  OrgJodaConvertJDKStringConverter_CALENDAR = 30,
};

/**
 @brief Conversion between JDK classes and a <code>String</code> .
 */
@interface OrgJodaConvertJDKStringConverterEnum : JavaLangEnum < NSCopying, OrgJodaConvertTypedStringConverter >

#pragma mark Public

- (NSString *)convertToStringWithId:(id)object;

/**
 @brief Gets the type of the converter.
 @return the type, not null
 */
- (IOSClass *)getEffectiveType;

#pragma mark Package-Private

/**
 @brief Gets the type of the converter.
 @return the type, not null
 */
- (IOSClass *)getType;

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *OrgJodaConvertJDKStringConverterEnum_values();

+ (OrgJodaConvertJDKStringConverterEnum *)valueOfWithNSString:(NSString *)name;
FOUNDATION_EXPORT OrgJodaConvertJDKStringConverterEnum *OrgJodaConvertJDKStringConverterEnum_valueOfWithNSString_(NSString *name);

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(OrgJodaConvertJDKStringConverterEnum)

FOUNDATION_EXPORT OrgJodaConvertJDKStringConverterEnum *OrgJodaConvertJDKStringConverterEnum_values_[];

#define OrgJodaConvertJDKStringConverterEnum_STRING OrgJodaConvertJDKStringConverterEnum_values_[OrgJodaConvertJDKStringConverter_STRING]
J2OBJC_ENUM_CONSTANT_GETTER(OrgJodaConvertJDKStringConverterEnum, STRING)

#define OrgJodaConvertJDKStringConverterEnum_CHAR_SEQUENCE OrgJodaConvertJDKStringConverterEnum_values_[OrgJodaConvertJDKStringConverter_CHAR_SEQUENCE]
J2OBJC_ENUM_CONSTANT_GETTER(OrgJodaConvertJDKStringConverterEnum, CHAR_SEQUENCE)

#define OrgJodaConvertJDKStringConverterEnum_STRING_BUFFER OrgJodaConvertJDKStringConverterEnum_values_[OrgJodaConvertJDKStringConverter_STRING_BUFFER]
J2OBJC_ENUM_CONSTANT_GETTER(OrgJodaConvertJDKStringConverterEnum, STRING_BUFFER)

#define OrgJodaConvertJDKStringConverterEnum_STRING_BUILDER OrgJodaConvertJDKStringConverterEnum_values_[OrgJodaConvertJDKStringConverter_STRING_BUILDER]
J2OBJC_ENUM_CONSTANT_GETTER(OrgJodaConvertJDKStringConverterEnum, STRING_BUILDER)

#define OrgJodaConvertJDKStringConverterEnum_LONG OrgJodaConvertJDKStringConverterEnum_values_[OrgJodaConvertJDKStringConverter_LONG]
J2OBJC_ENUM_CONSTANT_GETTER(OrgJodaConvertJDKStringConverterEnum, LONG)

#define OrgJodaConvertJDKStringConverterEnum_INTEGER OrgJodaConvertJDKStringConverterEnum_values_[OrgJodaConvertJDKStringConverter_INTEGER]
J2OBJC_ENUM_CONSTANT_GETTER(OrgJodaConvertJDKStringConverterEnum, INTEGER)

#define OrgJodaConvertJDKStringConverterEnum_SHORT OrgJodaConvertJDKStringConverterEnum_values_[OrgJodaConvertJDKStringConverter_SHORT]
J2OBJC_ENUM_CONSTANT_GETTER(OrgJodaConvertJDKStringConverterEnum, SHORT)

#define OrgJodaConvertJDKStringConverterEnum_BYTE OrgJodaConvertJDKStringConverterEnum_values_[OrgJodaConvertJDKStringConverter_BYTE]
J2OBJC_ENUM_CONSTANT_GETTER(OrgJodaConvertJDKStringConverterEnum, BYTE)

#define OrgJodaConvertJDKStringConverterEnum_BYTE_ARRAY OrgJodaConvertJDKStringConverterEnum_values_[OrgJodaConvertJDKStringConverter_BYTE_ARRAY]
J2OBJC_ENUM_CONSTANT_GETTER(OrgJodaConvertJDKStringConverterEnum, BYTE_ARRAY)

#define OrgJodaConvertJDKStringConverterEnum_CHARACTER OrgJodaConvertJDKStringConverterEnum_values_[OrgJodaConvertJDKStringConverter_CHARACTER]
J2OBJC_ENUM_CONSTANT_GETTER(OrgJodaConvertJDKStringConverterEnum, CHARACTER)

#define OrgJodaConvertJDKStringConverterEnum_CHAR_ARRAY OrgJodaConvertJDKStringConverterEnum_values_[OrgJodaConvertJDKStringConverter_CHAR_ARRAY]
J2OBJC_ENUM_CONSTANT_GETTER(OrgJodaConvertJDKStringConverterEnum, CHAR_ARRAY)

#define OrgJodaConvertJDKStringConverterEnum_BOOLEAN OrgJodaConvertJDKStringConverterEnum_values_[OrgJodaConvertJDKStringConverter_BOOLEAN]
J2OBJC_ENUM_CONSTANT_GETTER(OrgJodaConvertJDKStringConverterEnum, BOOLEAN)

#define OrgJodaConvertJDKStringConverterEnum_DOUBLE OrgJodaConvertJDKStringConverterEnum_values_[OrgJodaConvertJDKStringConverter_DOUBLE]
J2OBJC_ENUM_CONSTANT_GETTER(OrgJodaConvertJDKStringConverterEnum, DOUBLE)

#define OrgJodaConvertJDKStringConverterEnum_FLOAT OrgJodaConvertJDKStringConverterEnum_values_[OrgJodaConvertJDKStringConverter_FLOAT]
J2OBJC_ENUM_CONSTANT_GETTER(OrgJodaConvertJDKStringConverterEnum, FLOAT)

#define OrgJodaConvertJDKStringConverterEnum_BIG_INTEGER OrgJodaConvertJDKStringConverterEnum_values_[OrgJodaConvertJDKStringConverter_BIG_INTEGER]
J2OBJC_ENUM_CONSTANT_GETTER(OrgJodaConvertJDKStringConverterEnum, BIG_INTEGER)

#define OrgJodaConvertJDKStringConverterEnum_BIG_DECIMAL OrgJodaConvertJDKStringConverterEnum_values_[OrgJodaConvertJDKStringConverter_BIG_DECIMAL]
J2OBJC_ENUM_CONSTANT_GETTER(OrgJodaConvertJDKStringConverterEnum, BIG_DECIMAL)

#define OrgJodaConvertJDKStringConverterEnum_ATOMIC_LONG OrgJodaConvertJDKStringConverterEnum_values_[OrgJodaConvertJDKStringConverter_ATOMIC_LONG]
J2OBJC_ENUM_CONSTANT_GETTER(OrgJodaConvertJDKStringConverterEnum, ATOMIC_LONG)

#define OrgJodaConvertJDKStringConverterEnum_ATOMIC_INTEGER OrgJodaConvertJDKStringConverterEnum_values_[OrgJodaConvertJDKStringConverter_ATOMIC_INTEGER]
J2OBJC_ENUM_CONSTANT_GETTER(OrgJodaConvertJDKStringConverterEnum, ATOMIC_INTEGER)

#define OrgJodaConvertJDKStringConverterEnum_ATOMIC_BOOLEAN OrgJodaConvertJDKStringConverterEnum_values_[OrgJodaConvertJDKStringConverter_ATOMIC_BOOLEAN]
J2OBJC_ENUM_CONSTANT_GETTER(OrgJodaConvertJDKStringConverterEnum, ATOMIC_BOOLEAN)

#define OrgJodaConvertJDKStringConverterEnum_LOCALE OrgJodaConvertJDKStringConverterEnum_values_[OrgJodaConvertJDKStringConverter_LOCALE]
J2OBJC_ENUM_CONSTANT_GETTER(OrgJodaConvertJDKStringConverterEnum, LOCALE)

#define OrgJodaConvertJDKStringConverterEnum_CLASS OrgJodaConvertJDKStringConverterEnum_values_[OrgJodaConvertJDKStringConverter_CLASS]
J2OBJC_ENUM_CONSTANT_GETTER(OrgJodaConvertJDKStringConverterEnum, CLASS)

#define OrgJodaConvertJDKStringConverterEnum_PACKAGE OrgJodaConvertJDKStringConverterEnum_values_[OrgJodaConvertJDKStringConverter_PACKAGE]
J2OBJC_ENUM_CONSTANT_GETTER(OrgJodaConvertJDKStringConverterEnum, PACKAGE)

#define OrgJodaConvertJDKStringConverterEnum_CURRENCY OrgJodaConvertJDKStringConverterEnum_values_[OrgJodaConvertJDKStringConverter_CURRENCY]
J2OBJC_ENUM_CONSTANT_GETTER(OrgJodaConvertJDKStringConverterEnum, CURRENCY)

#define OrgJodaConvertJDKStringConverterEnum_TIME_ZONE OrgJodaConvertJDKStringConverterEnum_values_[OrgJodaConvertJDKStringConverter_TIME_ZONE]
J2OBJC_ENUM_CONSTANT_GETTER(OrgJodaConvertJDKStringConverterEnum, TIME_ZONE)

#define OrgJodaConvertJDKStringConverterEnum_UUID OrgJodaConvertJDKStringConverterEnum_values_[OrgJodaConvertJDKStringConverter_UUID]
J2OBJC_ENUM_CONSTANT_GETTER(OrgJodaConvertJDKStringConverterEnum, UUID)

#define OrgJodaConvertJDKStringConverterEnum_URL OrgJodaConvertJDKStringConverterEnum_values_[OrgJodaConvertJDKStringConverter_URL]
J2OBJC_ENUM_CONSTANT_GETTER(OrgJodaConvertJDKStringConverterEnum, URL)

#define OrgJodaConvertJDKStringConverterEnum_URI OrgJodaConvertJDKStringConverterEnum_values_[OrgJodaConvertJDKStringConverter_URI]
J2OBJC_ENUM_CONSTANT_GETTER(OrgJodaConvertJDKStringConverterEnum, URI)

#define OrgJodaConvertJDKStringConverterEnum_INET_ADDRESS OrgJodaConvertJDKStringConverterEnum_values_[OrgJodaConvertJDKStringConverter_INET_ADDRESS]
J2OBJC_ENUM_CONSTANT_GETTER(OrgJodaConvertJDKStringConverterEnum, INET_ADDRESS)

#define OrgJodaConvertJDKStringConverterEnum_FILE OrgJodaConvertJDKStringConverterEnum_values_[OrgJodaConvertJDKStringConverter_FILE]
J2OBJC_ENUM_CONSTANT_GETTER(OrgJodaConvertJDKStringConverterEnum, FILE)

#define OrgJodaConvertJDKStringConverterEnum_DATE OrgJodaConvertJDKStringConverterEnum_values_[OrgJodaConvertJDKStringConverter_DATE]
J2OBJC_ENUM_CONSTANT_GETTER(OrgJodaConvertJDKStringConverterEnum, DATE)

#define OrgJodaConvertJDKStringConverterEnum_CALENDAR OrgJodaConvertJDKStringConverterEnum_values_[OrgJodaConvertJDKStringConverter_CALENDAR]
J2OBJC_ENUM_CONSTANT_GETTER(OrgJodaConvertJDKStringConverterEnum, CALENDAR)

J2OBJC_TYPE_LITERAL_HEADER(OrgJodaConvertJDKStringConverterEnum)

#endif // _OrgJodaConvertJDKStringConverter_H_
