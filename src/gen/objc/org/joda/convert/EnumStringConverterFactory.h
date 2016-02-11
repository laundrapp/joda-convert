//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/andrefonseca/Documents/PodsFolders/joda-convert/src/main/java/org/joda/convert/EnumStringConverterFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("OrgJodaConvertEnumStringConverterFactory_INCLUDE_ALL")
#ifdef OrgJodaConvertEnumStringConverterFactory_RESTRICT
#define OrgJodaConvertEnumStringConverterFactory_INCLUDE_ALL 0
#else
#define OrgJodaConvertEnumStringConverterFactory_INCLUDE_ALL 1
#endif
#undef OrgJodaConvertEnumStringConverterFactory_RESTRICT

#if !defined (OrgJodaConvertEnumStringConverterFactory_) && (OrgJodaConvertEnumStringConverterFactory_INCLUDE_ALL || defined(OrgJodaConvertEnumStringConverterFactory_INCLUDE))
#define OrgJodaConvertEnumStringConverterFactory_

#define OrgJodaConvertStringConverterFactory_RESTRICT 1
#define OrgJodaConvertStringConverterFactory_INCLUDE 1
#include "org/joda/convert/StringConverterFactory.h"

@class IOSClass;
@protocol OrgJodaConvertStringConverter;

/*!
 @brief Factory for <code>StringConverter</code> looking up enums.
 <p>
 This class is immutable and thread-safe.
 @since 1.7
 */
@interface OrgJodaConvertEnumStringConverterFactory : NSObject < OrgJodaConvertStringConverterFactory >

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

J2OBJC_STATIC_INIT(OrgJodaConvertEnumStringConverterFactory)

/*!
 @brief Singleton instance.
 */
inline id<OrgJodaConvertStringConverterFactory> OrgJodaConvertEnumStringConverterFactory_get_INSTANCE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<OrgJodaConvertStringConverterFactory> OrgJodaConvertEnumStringConverterFactory_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgJodaConvertEnumStringConverterFactory, INSTANCE, id<OrgJodaConvertStringConverterFactory>)

J2OBJC_TYPE_LITERAL_HEADER(OrgJodaConvertEnumStringConverterFactory)

#endif

#if !defined (OrgJodaConvertEnumStringConverterFactory_EnumStringConverter_) && (OrgJodaConvertEnumStringConverterFactory_INCLUDE_ALL || defined(OrgJodaConvertEnumStringConverterFactory_EnumStringConverter_INCLUDE))
#define OrgJodaConvertEnumStringConverterFactory_EnumStringConverter_

#define OrgJodaConvertTypedStringConverter_RESTRICT 1
#define OrgJodaConvertTypedStringConverter_INCLUDE 1
#include "org/joda/convert/TypedStringConverter.h"

@class IOSClass;
@class JavaLangEnum;
@class OrgJodaConvertEnumStringConverterFactory;

@interface OrgJodaConvertEnumStringConverterFactory_EnumStringConverter : NSObject < OrgJodaConvertTypedStringConverter >

#pragma mark Public

- (JavaLangEnum *)convertFromStringWithIOSClass:(IOSClass *)cls
                                   withNSString:(NSString *)str;

- (NSString *)convertToStringWithId:(JavaLangEnum *)en;

- (IOSClass *)getEffectiveType;

#pragma mark Package-Private

- (instancetype)initWithOrgJodaConvertEnumStringConverterFactory:(OrgJodaConvertEnumStringConverterFactory *)outer$
                                                    withIOSClass:(IOSClass *)effectiveType;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJodaConvertEnumStringConverterFactory_EnumStringConverter)

FOUNDATION_EXPORT void OrgJodaConvertEnumStringConverterFactory_EnumStringConverter_initWithOrgJodaConvertEnumStringConverterFactory_withIOSClass_(OrgJodaConvertEnumStringConverterFactory_EnumStringConverter *self, OrgJodaConvertEnumStringConverterFactory *outer$, IOSClass *effectiveType);

FOUNDATION_EXPORT OrgJodaConvertEnumStringConverterFactory_EnumStringConverter *new_OrgJodaConvertEnumStringConverterFactory_EnumStringConverter_initWithOrgJodaConvertEnumStringConverterFactory_withIOSClass_(OrgJodaConvertEnumStringConverterFactory *outer$, IOSClass *effectiveType) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJodaConvertEnumStringConverterFactory_EnumStringConverter *create_OrgJodaConvertEnumStringConverterFactory_EnumStringConverter_initWithOrgJodaConvertEnumStringConverterFactory_withIOSClass_(OrgJodaConvertEnumStringConverterFactory *outer$, IOSClass *effectiveType);

J2OBJC_TYPE_LITERAL_HEADER(OrgJodaConvertEnumStringConverterFactory_EnumStringConverter)

#endif

#pragma pop_macro("OrgJodaConvertEnumStringConverterFactory_INCLUDE_ALL")
