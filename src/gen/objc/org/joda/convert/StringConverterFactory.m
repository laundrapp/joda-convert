//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/joda-convert/src/main/java/org/joda/convert/StringConverterFactory.java
//

#include "J2ObjC_source.h"
#include "org/joda/convert/StringConverterFactory.h"

@interface OrgJodaConvertStringConverterFactory : NSObject

@end

@implementation OrgJodaConvertStringConverterFactory

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, "LOrgJodaConvertStringConverter;", 0x401, 0, 1, -1, 2, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  #pragma clang diagnostic ignored "-Wundeclared-selector"
  methods[0].selector = @selector(findConverterWithIOSClass:);
  #pragma clang diagnostic pop
  static const void *ptrTable[] = { "findConverter", "LIOSClass;", "(Ljava/lang/Class<*>;)Lorg/joda/convert/StringConverter<*>;" };
  static const J2ObjcClassInfo _OrgJodaConvertStringConverterFactory = { "StringConverterFactory", "org.joda.convert", ptrTable, methods, NULL, 7, 0x609, 1, 0, -1, -1, -1, -1, -1 };
  return &_OrgJodaConvertStringConverterFactory;
}

@end

J2OBJC_INTERFACE_TYPE_LITERAL_SOURCE(OrgJodaConvertStringConverterFactory)
