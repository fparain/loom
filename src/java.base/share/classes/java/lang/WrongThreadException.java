/*
 * Copyright (c) 2021, Oracle and/or its affiliates. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.  Oracle designates this
 * particular file as subject to the "Classpath" exception as provided
 * by Oracle in the LICENSE file that accompanied this code.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Oracle, 500 Oracle Parkway, Redwood Shores, CA 94065 USA
 * or visit www.oracle.com if you need additional information or have any
 * questions.
 */

package java.lang;

/**
 * Thrown to indicate that a method has been called on the wrong thread.
 *
 * @since 19
 */
public final class WrongThreadException extends RuntimeException {
    @java.io.Serial
    static final long serialVersionUID = 4676498871006316905L;

    /**
     * Constructs a WrongThreadException with no detail message.
     */
    public WrongThreadException() {
        super();
    }

    /**
     * Constructs a WrongThreadException with the given detail message.
     *
     * @param s the String that contains a detailed message, can be null
     */
    public WrongThreadException(String s) {
        super(s);
    }

    /**
     * Constructs a WrongThreadException with the given detail message and cause.
     *
     * @param  message the detail message, can be null
     * @param  cause the cause, can be null
     */
    public WrongThreadException(String message, Throwable cause) {
        super(message, cause);
    }

    /**
     * Constructs a WrongThreadException with the given cause and a detail
     * message of {@code (cause==null ? null : cause.toString())} (which
     * typically contains the class and detail message of {@code cause}).
     *
     * @param  cause the cause, can be null
     */
    public WrongThreadException(Throwable cause) {
        super(cause);
    }
}
