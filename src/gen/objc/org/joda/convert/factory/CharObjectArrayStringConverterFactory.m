//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/joda-convert/src/main/java/org/joda/convert/factory/CharObjectArrayStringConverterFactory.java
//

#include "IOSClass.h"
#include "IOSObjectArray.h"
#include "J2ObjC_source.h"
#include "java/lang/Character.h"
#include "java/lang/Enum.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Arrays.h"
#include "java/util/regex/Pattern.h"
#include "org/joda/convert/StringConverter.h"
#include "org/joda/convert/StringConverterFactory.h"
#include "org/joda/convert/factory/CharObjectArrayStringConverterFactory.h"

#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"

@interface OrgJodaConvertFactoryCharObjectArrayStringConverterFactory ()

/*!
 @brief Restricted constructor.
 */
- (instancetype __nonnull)init;

@end

__attribute__((unused)) static void OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_init(OrgJodaConvertFactoryCharObjectArrayStringConverterFactory *self);

__attribute__((unused)) static OrgJodaConvertFactoryCharObjectArrayStringConverterFactory *new_OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_init(void) NS_RETURNS_RETAINED;

__attribute__((unused)) static OrgJodaConvertFactoryCharObjectArrayStringConverterFactory *create_OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_init(void);

inline IOSObjectArray *OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter_get_EMPTY(void);
static IOSObjectArray *OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter, EMPTY, IOSObjectArray *)

__attribute__((unused)) static void OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter_initWithNSString_withInt_(OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter *self, NSString *__name, jint __ordinal);

@interface OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter_1 : OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter

- (NSString *)convertToStringWithId:(IOSObjectArray *)array;

- (IOSObjectArray *)convertFromStringWithIOSClass:(IOSClass *)cls
                                     withNSString:(NSString *)str;

- (IOSClass *)getEffectiveType;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter_1)

__attribute__((unused)) static void OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter_1_initWithNSString_withInt_(OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter_1 *self, NSString *__name, jint __ordinal);

J2OBJC_INITIALIZED_DEFN(OrgJodaConvertFactoryCharObjectArrayStringConverterFactory)

id<OrgJodaConvertStringConverterFactory> OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_INSTANCE;
JavaUtilRegexPattern *OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_DELIMITER;

@implementation OrgJodaConvertFactoryCharObjectArrayStringConverterFactory

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype __nonnull)init {
  OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

- (id<OrgJodaConvertStringConverter>)findConverterWithIOSClass:(IOSClass *)cls {
  if (cls == IOSClass_arrayType(JavaLangCharacter_class_(), 1)) {
    return JreLoadEnum(OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter, INSTANCE);
  }
  return nil;
}

- (NSString *)description {
  return [[self java_getClass] getSimpleName];
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, NULL, 0x2, -1, -1, -1, -1, -1, -1 },
    { NULL, "LOrgJodaConvertStringConverter;", 0x1, 0, 1, -1, 2, -1, -1 },
    { NULL, "LNSString;", 0x1, 3, -1, -1, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  #pragma clang diagnostic ignored "-Wundeclared-selector"
  methods[0].selector = @selector(init);
  methods[1].selector = @selector(findConverterWithIOSClass:);
  methods[2].selector = @selector(description);
  #pragma clang diagnostic pop
  static const J2ObjcFieldInfo fields[] = {
    { "INSTANCE", "LOrgJodaConvertStringConverterFactory;", .constantValue.asLong = 0, 0x19, -1, 4, -1, -1 },
    { "DELIMITER", "LJavaUtilRegexPattern;", .constantValue.asLong = 0, 0x18, -1, 5, -1, -1 },
  };
  static const void *ptrTable[] = { "findConverter", "LIOSClass;", "(Ljava/lang/Class<*>;)Lorg/joda/convert/StringConverter<*>;", "toString", &OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_INSTANCE, &OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_DELIMITER, "LOrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter;" };
  static const J2ObjcClassInfo _OrgJodaConvertFactoryCharObjectArrayStringConverterFactory = { "CharObjectArrayStringConverterFactory", "org.joda.convert.factory", ptrTable, methods, fields, 7, 0x11, 3, 2, -1, 6, -1, -1, -1 };
  return &_OrgJodaConvertFactoryCharObjectArrayStringConverterFactory;
}

+ (void)initialize {
  if (self == [OrgJodaConvertFactoryCharObjectArrayStringConverterFactory class]) {
    JreStrongAssignAndConsume(&OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_INSTANCE, new_OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_init());
    JreStrongAssign(&OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_DELIMITER, JavaUtilRegexPattern_compileWithNSString_(@"[,]"));
    J2OBJC_SET_INITIALIZED(OrgJodaConvertFactoryCharObjectArrayStringConverterFactory)
  }
}

@end

void OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_init(OrgJodaConvertFactoryCharObjectArrayStringConverterFactory *self) {
  NSObject_init(self);
}

OrgJodaConvertFactoryCharObjectArrayStringConverterFactory *new_OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_init() {
  J2OBJC_NEW_IMPL(OrgJodaConvertFactoryCharObjectArrayStringConverterFactory, init)
}

OrgJodaConvertFactoryCharObjectArrayStringConverterFactory *create_OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_init() {
  J2OBJC_CREATE_IMPL(OrgJodaConvertFactoryCharObjectArrayStringConverterFactory, init)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(OrgJodaConvertFactoryCharObjectArrayStringConverterFactory)

J2OBJC_INITIALIZED_DEFN(OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter)

OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter *OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter_values_[1];

@implementation OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter

+ (IOSObjectArray *)values {
  return OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter_values();
}

+ (OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter *)valueOfWithNSString:(NSString *)name {
  return OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter_valueOfWithNSString_(name);
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, "[LOrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter;", 0x9, -1, -1, -1, -1, -1, -1 },
    { NULL, "LOrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter;", 0x9, 0, 1, -1, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  #pragma clang diagnostic ignored "-Wundeclared-selector"
  methods[0].selector = @selector(values);
  methods[1].selector = @selector(valueOfWithNSString:);
  #pragma clang diagnostic pop
  static const J2ObjcFieldInfo fields[] = {
    { "INSTANCE", "LOrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter;", .constantValue.asLong = 0, 0x4019, -1, 2, -1, -1 },
    { "EMPTY", "[LJavaLangCharacter;", .constantValue.asLong = 0, 0x1a, -1, 3, -1, -1 },
  };
  static const void *ptrTable[] = { "valueOf", "LNSString;", &JreEnum(OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter, INSTANCE), &OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter_EMPTY, "LOrgJodaConvertFactoryCharObjectArrayStringConverterFactory;", "Ljava/lang/Enum<Lorg/joda/convert/factory/CharObjectArrayStringConverterFactory$CharecterArrayStringConverter;>;Lorg/joda/convert/TypedStringConverter<[Ljava/lang/Character;>;" };
  static const J2ObjcClassInfo _OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter = { "CharecterArrayStringConverter", "org.joda.convert.factory", ptrTable, methods, fields, 7, 0x4408, 2, 2, 4, -1, -1, 5, -1 };
  return &_OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter;
}

+ (void)initialize {
  if (self == [OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter class]) {
    size_t allocSize = 0;
    size_t objSize_INSTANCE = class_getInstanceSize([OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter_1 class]);
    allocSize += objSize_INSTANCE;
    uintptr_t ptr = (uintptr_t)calloc(allocSize, 1);
    id e;
    ((void) (JreEnum(OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter, INSTANCE) = e = objc_constructInstance([OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter_1 class], (void *)ptr)), ptr += objSize_INSTANCE);
    OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter_1_initWithNSString_withInt_(e, @"INSTANCE", 0);
    JreStrongAssignAndConsume(&OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter_EMPTY, [IOSObjectArray newArrayWithLength:0 type:JavaLangCharacter_class_()]);
    J2OBJC_SET_INITIALIZED(OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter)
  }
}

@end

void OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter_initWithNSString_withInt_(OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter *self, NSString *__name, jint __ordinal) {
  JavaLangEnum_initWithNSString_withInt_(self, __name, __ordinal);
}

IOSObjectArray *OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter_values() {
  OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter_initialize();
  return [IOSObjectArray arrayWithObjects:OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter_values_ count:1 type:OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter_class_()];
}

OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter *OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter_valueOfWithNSString_(NSString *name) {
  OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter_initialize();
  for (int i = 0; i < 1; i++) {
    OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter *e = OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter_values_[i];
    if ([name isEqual:[e name]]) {
      return e;
    }
  }
  @throw create_JavaLangIllegalArgumentException_initWithNSString_(name);
  return nil;
}

OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter *OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter_fromOrdinal(NSUInteger ordinal) {
  OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter_initialize();
  if (ordinal >= 1) {
    return nil;
  }
  return OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter_values_[ordinal];
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter)

@implementation OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter_1

- (NSString *)convertToStringWithId:(IOSObjectArray *)array {
  if (((IOSObjectArray *) nil_chk(array))->size_ == 0) {
    return @"";
  }
  JavaLangStringBuilder *buf = create_JavaLangStringBuilder_initWithInt_(array->size_ * 8);
  for (jint i = 0; i < array->size_; i++) {
    if (IOSObjectArray_Get(array, i) == nil) {
      [buf appendWithNSString:@"\\-"];
    }
    else {
      jchar ch = [((JavaLangCharacter *) nil_chk(IOSObjectArray_Get(array, i))) charValue];
      if (ch == '\\') {
        [buf appendWithNSString:@"\\\\"];
      }
      else {
        [buf appendWithChar:ch];
      }
    }
  }
  return [buf description];
}

- (IOSObjectArray *)convertFromStringWithIOSClass:(IOSClass *)cls
                                     withNSString:(NSString *)str {
  if ([((NSString *) nil_chk(str)) java_length] == 0) {
    return JreLoadStatic(OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter, EMPTY);
  }
  IOSObjectArray *array = [IOSObjectArray arrayWithLength:[str java_length] type:JavaLangCharacter_class_()];
  jint arrayPos = 0;
  jint pos;
  while ((pos = [((NSString *) nil_chk(str)) java_indexOf:'\\']) >= 0) {
    for (jint i = 0; i < pos; i++) {
      IOSObjectArray_Set(array, arrayPos++, JavaLangCharacter_valueOfWithChar_([str charAtWithInt:i]));
    }
    if ([str charAtWithInt:pos + 1] == '\\') {
      IOSObjectArray_Set(array, arrayPos++, JavaLangCharacter_valueOfWithChar_('\\'));
    }
    else if ([str charAtWithInt:pos + 1] == '-') {
      IOSObjectArray_Set(array, arrayPos++, nil);
    }
    else {
      @throw create_JavaLangIllegalArgumentException_initWithNSString_(@"Invalid Character[] string, incorrect escape");
    }
    str = [str java_substring:pos + 2];
  }
  for (jint i = 0; i < [str java_length]; i++) {
    IOSObjectArray_Set(array, arrayPos++, JavaLangCharacter_valueOfWithChar_([str charAtWithInt:i]));
  }
  return JavaUtilArrays_copyOfWithNSObjectArray_withInt_(array, arrayPos);
}

- (IOSClass *)getEffectiveType {
  return IOSClass_arrayType(JavaLangCharacter_class_(), 1);
}

- (void)dealloc {
  JreCheckFinalize(self, [OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter_1 class]);
  [super dealloc];
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, "LNSString;", 0x1, 0, 1, -1, -1, -1, -1 },
    { NULL, "[LJavaLangCharacter;", 0x1, 2, 3, -1, 4, -1, -1 },
    { NULL, "LIOSClass;", 0x1, -1, -1, -1, 5, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  #pragma clang diagnostic ignored "-Wundeclared-selector"
  methods[0].selector = @selector(convertToStringWithId:);
  methods[1].selector = @selector(convertFromStringWithIOSClass:withNSString:);
  methods[2].selector = @selector(getEffectiveType);
  #pragma clang diagnostic pop
  static const void *ptrTable[] = { "convertToString", "[LJavaLangCharacter;", "convertFromString", "LIOSClass;LNSString;", "(Ljava/lang/Class<+[Ljava/lang/Character;>;Ljava/lang/String;)[Ljava/lang/Character;", "()Ljava/lang/Class<*>;", "LOrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter;" };
  static const J2ObjcClassInfo _OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter_1 = { "", "org.joda.convert.factory", ptrTable, methods, NULL, 7, 0xc018, 3, 0, 6, -1, -1, -1, -1 };
  return &_OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter_1;
}

@end

void OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter_1_initWithNSString_withInt_(OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter_1 *self, NSString *__name, jint __ordinal) {
  OrgJodaConvertFactoryCharObjectArrayStringConverterFactory_CharecterArrayStringConverter_initWithNSString_withInt_(self, __name, __ordinal);
}
