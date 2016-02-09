//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/andrefonseca/Documents/PodsFolders/joda-convert/src/main/java/org/joda/convert/factory/BooleanArrayStringConverterFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("OrgJodaConvertFactoryBooleanArrayStringConverterFactory_INCLUDE_ALL")
#ifdef OrgJodaConvertFactoryBooleanArrayStringConverterFactory_RESTRICT
#define OrgJodaConvertFactoryBooleanArrayStringConverterFactory_INCLUDE_ALL 0
#else
#define OrgJodaConvertFactoryBooleanArrayStringConverterFactory_INCLUDE_ALL 1
#endif
#undef OrgJodaConvertFactoryBooleanArrayStringConverterFactory_RESTRICT

#if !defined (OrgJodaConvertFactoryBooleanArrayStringConverterFactory_) && (OrgJodaConvertFactoryBooleanArrayStringConverterFactory_INCLUDE_ALL || defined(OrgJodaConvertFactoryBooleanArrayStringConverterFactory_INCLUDE))
#define OrgJodaConvertFactoryBooleanArrayStringConverterFactory_

#define OrgJodaConvertStringConverterFactory_RESTRICT 1
#define OrgJodaConvertStringConverterFactory_INCLUDE 1
#include "org/joda/convert/StringConverterFactory.h"

@class IOSClass;
@protocol OrgJodaConvertStringConverter;

/*!
 @brief Factory for <code>StringConverter</code> providing support for primitive boolean array
 as a sequence of 'T' and 'F'.
 <p>
 This is intended as a human readable format, not a compact format.
 <p>
 To use, simply register the instance with a <code>StringConvert</code> instance.
 <p>
 This class is immutable and thread-safe.
 @since 1.5
 */
@interface OrgJodaConvertFactoryBooleanArrayStringConverterFactory : NSObject < OrgJodaConvertStringConverterFactory >

#pragma mark Public

/*!
 @brief Finds a converter by type.
 @param cls  the type to lookup, not null
 @return the converter, null if not found
 @throws RuntimeException (or subclass) if source code is invalid
 */
- (id<OrgJodaConvertStringConverter>)findConverterWithIOSClass:(IOSClass *)cls;

- (NSString *)description;

@end

J2OBJC_STATIC_INIT(OrgJodaConvertFactoryBooleanArrayStringConverterFactory)

/*!
 @brief Singleton instance.
 */
inline id<OrgJodaConvertStringConverterFactory> OrgJodaConvertFactoryBooleanArrayStringConverterFactory_get_INSTANCE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<OrgJodaConvertStringConverterFactory> OrgJodaConvertFactoryBooleanArrayStringConverterFactory_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgJodaConvertFactoryBooleanArrayStringConverterFactory, INSTANCE, id<OrgJodaConvertStringConverterFactory>)

J2OBJC_TYPE_LITERAL_HEADER(OrgJodaConvertFactoryBooleanArrayStringConverterFactory)

#endif

#if !defined (OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverter_) && (OrgJodaConvertFactoryBooleanArrayStringConverterFactory_INCLUDE_ALL || defined(OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverter_INCLUDE))
#define OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverter_

#define JavaLangEnum_RESTRICT 1
#define JavaLangEnum_INCLUDE 1
#include "java/lang/Enum.h"

#define OrgJodaConvertTypedStringConverter_RESTRICT 1
#define OrgJodaConvertTypedStringConverter_INCLUDE 1
#include "org/joda/convert/TypedStringConverter.h"

typedef NS_ENUM(NSUInteger, OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverter_Enum) {
  OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverter_Enum_INSTANCE = 0,
};

@interface OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverter : JavaLangEnum < NSCopying, OrgJodaConvertTypedStringConverter >

#pragma mark Package-Private

+ (IOSObjectArray *)values;

+ (OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverter *)valueOfWithNSString:(NSString *)name;

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverter)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverter *OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverter_values_[];

inline OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverter *OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverter_get_INSTANCE();
J2OBJC_ENUM_CONSTANT(OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverter, INSTANCE)

FOUNDATION_EXPORT IOSObjectArray *OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverter_values();

FOUNDATION_EXPORT OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverter *OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverter_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverter *OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverter_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(OrgJodaConvertFactoryBooleanArrayStringConverterFactory_BooleanArrayStringConverter)

#endif

#pragma pop_macro("OrgJodaConvertFactoryBooleanArrayStringConverterFactory_INCLUDE_ALL")
