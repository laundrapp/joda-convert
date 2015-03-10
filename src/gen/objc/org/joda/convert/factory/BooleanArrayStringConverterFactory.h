//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nbransby/Documents/joda-convert/src/main/java/org/joda/convert/factory/BooleanArrayStringConverterFactory.java
//

#ifndef _OrgJodaConvertFactoryBooleanArrayStringConverterFactory_H_
#define _OrgJodaConvertFactoryBooleanArrayStringConverterFactory_H_

@class IOSBooleanArray;
@class IOSClass;
@protocol OrgJodaConvertStringConverter;

#include "J2ObjC_header.h"
#include "java/lang/Enum.h"
#include "org/joda/convert/StringConverterFactory.h"
#include "org/joda/convert/TypedStringConverter.h"

/**
 @brief Factory for <code>StringConverter</code> providing support for primitive boolean array as a sequence of 'T' and 'F'.
 <p> This is intended as a human readable format, not a compact format. <p> To use, simply register the instance with a <code>StringConvert</code> instance. <p> This class is immutable and thread-safe.
 @since 1.5
 */
@interface OrgJodaConvertFactoryBooleanArrayStringConverterFactory : NSObject < OrgJodaConvertStringConverterFactory > {
}

/**
 @brief Finds a converter by type.
 @param cls the type to lookup, not null
 @return the converter, null if not found
 @throws RuntimeException (or subclass) if source code is invalid
 */
- (id<OrgJodaConvertStringConverter>)findConverterWithIOSClass:(IOSClass *)cls;

- (NSString *)description;

@end

FOUNDATION_EXPORT BOOL OrgJodaConvertFactoryBooleanArrayStringConverterFactory_initialized;
J2OBJC_STATIC_INIT(OrgJodaConvertFactoryBooleanArrayStringConverterFactory)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT id<OrgJodaConvertStringConverterFactory> OrgJodaConvertFactoryBooleanArrayStringConverterFactory_INSTANCE_;
J2OBJC_STATIC_FIELD_GETTER(OrgJodaConvertFactoryBooleanArrayStringConverterFactory, INSTANCE_, id<OrgJodaConvertStringConverterFactory>)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgJodaConvertFactoryBooleanArrayStringConverterFactory)

typedef NS_ENUM(NSUInteger, OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverter) {
  OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverter_INSTANCE = 0,
};

@interface OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverterEnum : JavaLangEnum < NSCopying, OrgJodaConvertTypedStringConverter > {
}

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverterEnum_values();

+ (OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverterEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverterEnum *OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverterEnum_valueOfWithNSString_(NSString *name);
- (id)copyWithZone:(NSZone *)zone;

@end

FOUNDATION_EXPORT BOOL OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverterEnum_initialized;
J2OBJC_STATIC_INIT(OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverterEnum)

FOUNDATION_EXPORT OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverterEnum *OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverterEnum_values_[];

#define OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverterEnum_INSTANCE OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverterEnum_values_[OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverter_INSTANCE]
J2OBJC_ENUM_CONSTANT_GETTER(OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverterEnum, INSTANCE)

FOUNDATION_EXPORT IOSBooleanArray *OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverterEnum_EMPTY_;
J2OBJC_STATIC_FIELD_GETTER(OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverterEnum, EMPTY_, IOSBooleanArray *)

J2OBJC_TYPE_LITERAL_HEADER(OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverterEnum)

@interface OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverterEnum_$1 : OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverterEnum {
}

- (NSString *)convertToStringWithId:(IOSBooleanArray *)array;

- (IOSBooleanArray *)convertFromStringWithIOSClass:(IOSClass *)cls
                                      withNSString:(NSString *)str;

- (IOSClass *)getEffectiveType;

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverterEnum_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverterEnum_$1)

#endif // _OrgJodaConvertFactoryBooleanArrayStringConverterFactory_H_