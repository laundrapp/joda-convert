//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nbransby/Documents/joda-convert/src/main/java/org/joda/convert/RenameHandler.java
//

#include "IOSClass.h"
#include "J2ObjC_source.h"
#include "java/lang/ClassLoader.h"
#include "java/lang/ClassNotFoundException.h"
#include "java/lang/Enum.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Thread.h"
#include "java/util/HashMap.h"
#include "java/util/HashSet.h"
#include "java/util/Map.h"
#include "java/util/Set.h"
#include "java/util/concurrent/ConcurrentHashMap.h"
#include "org/joda/convert/RenameHandler.h"

__attribute__((unused)) static IOSClass *OrgJodaConvertRenameHandler_loadTypeWithNSString_(OrgJodaConvertRenameHandler *self, NSString *fullName);

@interface OrgJodaConvertRenameHandler () {
 @public
  /**
   @brief The type renames.
   */
  JavaUtilConcurrentConcurrentHashMap *typeRenames_;
  /**
   @brief The enum renames.
   */
  JavaUtilConcurrentConcurrentHashMap *enumRenames_;
}
- (instancetype)init;

- (IOSClass *)loadTypeWithNSString:(NSString *)fullName;
@end

J2OBJC_FIELD_SETTER(OrgJodaConvertRenameHandler, typeRenames_, JavaUtilConcurrentConcurrentHashMap *)
J2OBJC_FIELD_SETTER(OrgJodaConvertRenameHandler, enumRenames_, JavaUtilConcurrentConcurrentHashMap *)

BOOL OrgJodaConvertRenameHandler_initialized = NO;

@implementation OrgJodaConvertRenameHandler

OrgJodaConvertRenameHandler * OrgJodaConvertRenameHandler_INSTANCE_;

+ (OrgJodaConvertRenameHandler *)create {
  return OrgJodaConvertRenameHandler_create();
}

- (instancetype)init {
  if (self = [super init]) {
    OrgJodaConvertRenameHandler_setAndConsume_typeRenames_(self, [[JavaUtilConcurrentConcurrentHashMap alloc] initWithInt:16 withFloat:0.75f withInt:2]);
    OrgJodaConvertRenameHandler_setAndConsume_enumRenames_(self, [[JavaUtilConcurrentConcurrentHashMap alloc] initWithInt:16 withFloat:0.75f withInt:2]);
  }
  return self;
}

- (void)renamedTypeWithNSString:(NSString *)oldName
                   withIOSClass:(IOSClass *)currentValue {
  if (oldName == nil) {
    @throw [[[JavaLangIllegalArgumentException alloc] initWithNSString:@"oldName must not be null"] autorelease];
  }
  if (currentValue == nil) {
    @throw [[[JavaLangIllegalArgumentException alloc] initWithNSString:@"currentValue must not be null"] autorelease];
  }
  [((JavaUtilConcurrentConcurrentHashMap *) nil_chk(typeRenames_)) putWithId:oldName withId:currentValue];
}

- (id<JavaUtilMap>)getTypeRenames {
  return [[[JavaUtilHashMap alloc] initWithJavaUtilMap:typeRenames_] autorelease];
}

- (IOSClass *)lookupTypeWithNSString:(NSString *)name {
  if (name == nil) {
    @throw [[[JavaLangIllegalArgumentException alloc] initWithNSString:@"name must not be null"] autorelease];
  }
  IOSClass *type = [((JavaUtilConcurrentConcurrentHashMap *) nil_chk(typeRenames_)) getWithId:name];
  if (type == nil) {
    type = OrgJodaConvertRenameHandler_loadTypeWithNSString_(self, name);
  }
  return type;
}

- (IOSClass *)loadTypeWithNSString:(NSString *)fullName {
  return OrgJodaConvertRenameHandler_loadTypeWithNSString_(self, fullName);
}

- (void)renamedEnumWithNSString:(NSString *)oldName
               withJavaLangEnum:(JavaLangEnum *)currentValue {
  if (oldName == nil) {
    @throw [[[JavaLangIllegalArgumentException alloc] initWithNSString:@"oldName must not be null"] autorelease];
  }
  if (currentValue == nil) {
    @throw [[[JavaLangIllegalArgumentException alloc] initWithNSString:@"currentValue must not be null"] autorelease];
  }
  IOSClass *enumType = [((JavaLangEnum *) nil_chk(currentValue)) getDeclaringClass];
  id<JavaUtilMap> perClass = [((JavaUtilConcurrentConcurrentHashMap *) nil_chk(enumRenames_)) getWithId:enumType];
  if (perClass == nil) {
    [enumRenames_ putIfAbsentWithId:enumType withId:[[[JavaUtilConcurrentConcurrentHashMap alloc] initWithInt:16 withFloat:0.75f withInt:2] autorelease]];
    perClass = [enumRenames_ getWithId:enumType];
  }
  [((id<JavaUtilMap>) nil_chk(perClass)) putWithId:oldName withId:currentValue];
}

- (id<JavaUtilSet>)getEnumTypesWithRenames {
  return [[[JavaUtilHashSet alloc] initWithJavaUtilCollection:[((JavaUtilConcurrentConcurrentHashMap *) nil_chk(enumRenames_)) keySet]] autorelease];
}

- (id<JavaUtilMap>)getEnumRenamesWithIOSClass:(IOSClass *)type {
  if (type == nil) {
    @throw [[[JavaLangIllegalArgumentException alloc] initWithNSString:@"type must not be null"] autorelease];
  }
  id<JavaUtilMap> map = [((JavaUtilConcurrentConcurrentHashMap *) nil_chk(enumRenames_)) getWithId:type];
  if (map == nil) {
    return [[[JavaUtilHashMap alloc] init] autorelease];
  }
  return [[[JavaUtilHashMap alloc] initWithJavaUtilMap:map] autorelease];
}

- (id)lookupEnumWithIOSClass:(IOSClass *)type
                withNSString:(NSString *)name {
  if (type == nil) {
    @throw [[[JavaLangIllegalArgumentException alloc] initWithNSString:@"type must not be null"] autorelease];
  }
  if (name == nil) {
    @throw [[[JavaLangIllegalArgumentException alloc] initWithNSString:@"name must not be null"] autorelease];
  }
  id<JavaUtilMap> map = [self getEnumRenamesWithIOSClass:type];
  JavaLangEnum *value = [((id<JavaUtilMap>) nil_chk(map)) getWithId:name];
  if (value != nil) {
    return [((IOSClass *) nil_chk(type)) cast:value];
  }
  return ((JavaLangEnum *) JavaLangEnum_valueOfWithIOSClass_withNSString_(type, name));
}

- (NSString *)description {
  return JreStrcat("$@$@", @"RenamedTypes", typeRenames_, @",RenamedEnumConstants", enumRenames_);
}

- (void)dealloc {
  RELEASE_(typeRenames_);
  RELEASE_(enumRenames_);
  [super dealloc];
}

- (void)copyAllFieldsTo:(OrgJodaConvertRenameHandler *)other {
  [super copyAllFieldsTo:other];
  OrgJodaConvertRenameHandler_set_typeRenames_(other, typeRenames_);
  OrgJodaConvertRenameHandler_set_enumRenames_(other, enumRenames_);
}

+ (void)initialize {
  if (self == [OrgJodaConvertRenameHandler class]) {
    JreStrongAssignAndConsume(&OrgJodaConvertRenameHandler_INSTANCE_, nil, [[OrgJodaConvertRenameHandler alloc] init]);
    J2OBJC_SET_INITIALIZED(OrgJodaConvertRenameHandler)
  }
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "create", NULL, "Lorg.joda.convert.RenameHandler;", 0x9, NULL },
    { "init", "RenameHandler", NULL, 0x2, NULL },
    { "renamedTypeWithNSString:withIOSClass:", "renamedType", "V", 0x1, NULL },
    { "getTypeRenames", NULL, "Ljava.util.Map;", 0x1, NULL },
    { "lookupTypeWithNSString:", "lookupType", "Ljava.lang.Class;", 0x1, "Ljava.lang.ClassNotFoundException;" },
    { "loadTypeWithNSString:", "loadType", "Ljava.lang.Class;", 0x2, "Ljava.lang.ClassNotFoundException;" },
    { "renamedEnumWithNSString:withJavaLangEnum:", "renamedEnum", "V", 0x1, NULL },
    { "getEnumTypesWithRenames", NULL, "Ljava.util.Set;", 0x1, NULL },
    { "getEnumRenamesWithIOSClass:", "getEnumRenames", "Ljava.util.Map;", 0x1, NULL },
    { "lookupEnumWithIOSClass:withNSString:", "lookupEnum", "TT;", 0x1, NULL },
    { "description", "toString", "Ljava.lang.String;", 0x1, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "INSTANCE_", NULL, 0x19, "Lorg.joda.convert.RenameHandler;", &OrgJodaConvertRenameHandler_INSTANCE_,  },
    { "typeRenames_", NULL, 0x12, "Ljava.util.concurrent.ConcurrentHashMap;", NULL,  },
    { "enumRenames_", NULL, 0x12, "Ljava.util.concurrent.ConcurrentHashMap;", NULL,  },
  };
  static const J2ObjcClassInfo _OrgJodaConvertRenameHandler = { 1, "RenameHandler", "org.joda.convert", NULL, 0x11, 11, methods, 3, fields, 0, NULL};
  return &_OrgJodaConvertRenameHandler;
}

@end

OrgJodaConvertRenameHandler *OrgJodaConvertRenameHandler_create() {
  OrgJodaConvertRenameHandler_init();
  return [[[OrgJodaConvertRenameHandler alloc] init] autorelease];
}

IOSClass *OrgJodaConvertRenameHandler_loadTypeWithNSString_(OrgJodaConvertRenameHandler *self, NSString *fullName) {
  JavaLangClassLoader *loader = [((JavaLangThread *) nil_chk(JavaLangThread_currentThread())) getContextClassLoader];
  return loader != nil ? [loader loadClassWithNSString:fullName] : IOSClass_forNameWithNSString_(fullName);
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(OrgJodaConvertRenameHandler)