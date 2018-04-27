//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/joda-convert/src/main/java/org/joda/convert/MethodConstructorStringConverter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJodaConvertMethodConstructorStringConverter")
#ifdef RESTRICT_OrgJodaConvertMethodConstructorStringConverter
#define INCLUDE_ALL_OrgJodaConvertMethodConstructorStringConverter 0
#else
#define INCLUDE_ALL_OrgJodaConvertMethodConstructorStringConverter 1
#endif
#undef RESTRICT_OrgJodaConvertMethodConstructorStringConverter

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJodaConvertMethodConstructorStringConverter_) && (INCLUDE_ALL_OrgJodaConvertMethodConstructorStringConverter || defined(INCLUDE_OrgJodaConvertMethodConstructorStringConverter))
#define OrgJodaConvertMethodConstructorStringConverter_

#define RESTRICT_OrgJodaConvertReflectionStringConverter 1
#define INCLUDE_OrgJodaConvertReflectionStringConverter 1
#include "org/joda/convert/ReflectionStringConverter.h"

@class IOSClass;
@class JavaLangReflectConstructor;
@class JavaLangReflectMethod;

/*!
 @brief Conversion to and from a string using a toString method and a fromString constructor.
 <p>
  The toString method must meet the following signature:<br>
  <code>String anyName()</code> on Class T. 
 <p>
  The fromString constructor must take a single <code>String</code> parameter. 
 <p>
  MethodConstructorStringConverter is thread-safe and immutable.
 */
@interface OrgJodaConvertMethodConstructorStringConverter : OrgJodaConvertReflectionStringConverter

#pragma mark Public

/*!
 @brief Converts the <code>String</code> to an object.
 @param cls the class to convert to, not null
 @param str the string to convert, not null
 @return the converted object, may be null but generally not
 */
- (id)convertFromStringWithIOSClass:(IOSClass *)cls
                       withNSString:(NSString *)str;

- (IOSClass *)getEffectiveType;

#pragma mark Package-Private

/*!
 @brief Creates an instance using a method and a constructor.
 @param cls the class this converts for, not null
 @param toString the toString method, not null
 @param fromString the fromString method, not null
 @throw RuntimeException(or subclass) if the method signatures are invalid
 */
- (instancetype __nonnull)initWithIOSClass:(IOSClass *)cls
                 withJavaLangReflectMethod:(JavaLangReflectMethod *)toString
            withJavaLangReflectConstructor:(JavaLangReflectConstructor *)fromString;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithIOSClass:(IOSClass *)arg0
                 withJavaLangReflectMethod:(JavaLangReflectMethod *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJodaConvertMethodConstructorStringConverter)

FOUNDATION_EXPORT void OrgJodaConvertMethodConstructorStringConverter_initWithIOSClass_withJavaLangReflectMethod_withJavaLangReflectConstructor_(OrgJodaConvertMethodConstructorStringConverter *self, IOSClass *cls, JavaLangReflectMethod *toString, JavaLangReflectConstructor *fromString);

FOUNDATION_EXPORT OrgJodaConvertMethodConstructorStringConverter *new_OrgJodaConvertMethodConstructorStringConverter_initWithIOSClass_withJavaLangReflectMethod_withJavaLangReflectConstructor_(IOSClass *cls, JavaLangReflectMethod *toString, JavaLangReflectConstructor *fromString) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJodaConvertMethodConstructorStringConverter *create_OrgJodaConvertMethodConstructorStringConverter_initWithIOSClass_withJavaLangReflectMethod_withJavaLangReflectConstructor_(IOSClass *cls, JavaLangReflectMethod *toString, JavaLangReflectConstructor *fromString);

J2OBJC_TYPE_LITERAL_HEADER(OrgJodaConvertMethodConstructorStringConverter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_OrgJodaConvertMethodConstructorStringConverter")
