//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/HambroPerks/hambroperks_org/joda-convert/src/main/java/org/joda/convert/FromString.java
//

#include "IOSClass.h"
#include "IOSObjectArray.h"
#include "J2ObjC_source.h"
#include "java/lang/annotation/ElementType.h"
#include "java/lang/annotation/Retention.h"
#include "java/lang/annotation/RetentionPolicy.h"
#include "java/lang/annotation/Target.h"
#include "org/joda/convert/FromString.h"

@implementation OrgJodaConvertFromString

- (IOSClass *)annotationType {
  return OrgJodaConvertFromString_class_();
}

- (NSString *)description {
  return @"@org.joda.convert.FromString()";
}

+ (IOSObjectArray *)__annotations {
  return [IOSObjectArray arrayWithObjects:(id[]) { [[[JavaLangAnnotationTarget alloc] initWithValue:[IOSObjectArray arrayWithObjects:(id[]) { JavaLangAnnotationElementTypeEnum_get_METHOD(), JavaLangAnnotationElementTypeEnum_get_CONSTRUCTOR() } count:2 type:NSObject_class_()]] autorelease], [[[JavaLangAnnotationRetention alloc] initWithValue:JavaLangAnnotationRetentionPolicyEnum_get_RUNTIME()] autorelease] } count:2 type:JavaLangAnnotationAnnotation_class_()];
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcClassInfo _OrgJodaConvertFromString = { 2, "FromString", "org.joda.convert", NULL, 0x2609, 0, NULL, 0, NULL, 0, NULL, 0, NULL, NULL, NULL };
  return &_OrgJodaConvertFromString;
}

@end

J2OBJC_INTERFACE_TYPE_LITERAL_SOURCE(OrgJodaConvertFromString)
