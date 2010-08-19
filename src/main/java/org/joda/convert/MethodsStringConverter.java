/*
 *  Copyright 2010 Stephen Colebourne
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */
package org.joda.convert;

import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

/**
 * Conversion to and from a string using two methods.
 * <p>
 * The toString method must meet the following signature:<br />
 * {@code String anyName()} on Class T.
 * <p>
 * The fromString method must meet the following signature:<br />
 * {@code static T anyName(String)} on any class.
 */
final class MethodsStringConverter<T> extends ReflectionStringConverter<T> {

    /** Conversion from a string. */
    private final Method fromString;

    /**
     * Creates an instance using two methods.
     * @param cls  the class this converts for, not null
     * @param toString  the toString method, not null
     * @param fromString  the fromString method, not null
     * @throws RuntimeException (or subclass) if the method signatures are invalid
     */
    MethodsStringConverter(Class<T> cls, Method toString, Method fromString) {
        super(cls, toString);
        if (fromString == null) {
            throw new IllegalArgumentException("FromString method must not be null");
        }
        if (fromString.getParameterTypes().length != 1) {
            throw new IllegalStateException("FromString method must have one parameter");
        }
        if (fromString.getParameterTypes()[0] != String.class) {
            throw new IllegalStateException("FromString method must take a String");
        }
        if (fromString.getReturnType() != cls) {
            throw new IllegalStateException("FromString method must return specified class");
        }
        this.fromString = fromString;
    }

    //-----------------------------------------------------------------------
    /**
     * Converts the {@code String} to an object.
     * @param str  the string to convert, not null
     * @return the converted object, may be null but generally not
     */
    public T convertFromString(String str) {
        try {
            return cls.cast(fromString.invoke(null, str));
        } catch (IllegalAccessException ex) {
            throw new IllegalStateException("Method is not accessible");
        } catch (InvocationTargetException ex) {
            if (ex.getCause() instanceof RuntimeException) {
                throw (RuntimeException) ex.getCause();
            }
            throw new RuntimeException(ex.getMessage(), ex);
        }
    }

}