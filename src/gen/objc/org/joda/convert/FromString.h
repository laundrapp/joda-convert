//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/HambroPerks/hambroperks_org/joda-convert/src/main/java/org/joda/convert/FromString.java
//

#ifndef _OrgJodaConvertFromString_H_
#define _OrgJodaConvertFromString_H_

#include "J2ObjC_header.h"
#include "java/lang/annotation/Annotation.h"

/**
 @brief Annotation used to mark a method or constructor as being suitable for converting an object from a <code>String</code> .
 <p> When applying to a method, this annotation should be applied once per class. The method must be static and have one <code>String</code> parameter with a return type of the type that the method is implemented on. For example, Integer#parseInt(String) . <p> When applying to a constructor, this annotation should be applied to the constructor that takes one <code>String</code> parameter.
 */
@protocol OrgJodaConvertFromString < JavaLangAnnotationAnnotation >

@end

@interface OrgJodaConvertFromString : NSObject < OrgJodaConvertFromString >

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJodaConvertFromString)

J2OBJC_TYPE_LITERAL_HEADER(OrgJodaConvertFromString)

#endif // _OrgJodaConvertFromString_H_
