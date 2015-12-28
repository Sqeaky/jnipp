#pragma once
#include "jnipp/jnipp.h"

class JavaLangCharSequence;
class JavaUtilMap;
class JavaNioCharsetCharset;
class JavaLangStringBuilder;
class JavaUtilSet;
class JavaUtilIterator;
class JavaLangStringBuffer;
class JavaUtilComparator;
class JavaUtilCollection;
class JavaTest;
class JavaUtilLocale;
class JavaLangAbstractStringBuilder;
class JavaLangObject;
class JavaLangString;


// class java.lang.Object
class JavaLangObject : public jnipp::Object
{
public:
    using parent = jnipp::Object;
    using parent::parent;

    static jnipp::GlobalRef<jnipp::Class>& clazz();

    // public java.lang.Object()
    static jnipp::LocalRef<JavaLangObject> construct();

    // public final void java.lang.Object.wait(long,int) throws java.lang.InterruptedException
    void wait(jlong a0, jint a1) const;

    // public final native void java.lang.Object.wait(long) throws java.lang.InterruptedException
    void wait(jlong a0) const;

    // public final void java.lang.Object.wait() throws java.lang.InterruptedException
    void wait() const;

    // public boolean java.lang.Object.equals(java.lang.Object)
    jboolean equals(const jnipp::Ref<JavaLangObject>& a0) const;

    // public native int java.lang.Object.hashCode()
    jint hashCode() const;

    // public final native void java.lang.Object.notify()
    void notify() const;

    // public final native void java.lang.Object.notifyAll()
    void notifyAll() const;
};

// class java.lang.String
class JavaLangString : public jnipp::String
{
public:
    using parent = jnipp::String;
    using parent::parent;

    static jnipp::GlobalRef<jnipp::Class>& clazz();

    // public java.lang.String(byte[])
    static jnipp::LocalRef<JavaLangString> construct(const jnipp::Ref<jnipp::Array<jbyte>>& a0);

    // public java.lang.String(byte[],int,int)
    static jnipp::LocalRef<JavaLangString> construct(const jnipp::Ref<jnipp::Array<jbyte>>& a0, jint a1, jint a2);

    // public java.lang.String(byte[],java.nio.charset.Charset)
    static jnipp::LocalRef<JavaLangString> construct(const jnipp::Ref<jnipp::Array<jbyte>>& a0, const jnipp::Ref<JavaNioCharsetCharset>& a1);

    // public java.lang.String(byte[],java.lang.String) throws java.io.UnsupportedEncodingException
    static jnipp::LocalRef<JavaLangString> construct(const jnipp::Ref<jnipp::Array<jbyte>>& a0, const jnipp::Ref<JavaLangString>& a1);

    // public java.lang.String(byte[],int,int,java.nio.charset.Charset)
    static jnipp::LocalRef<JavaLangString> construct(const jnipp::Ref<jnipp::Array<jbyte>>& a0, jint a1, jint a2, const jnipp::Ref<JavaNioCharsetCharset>& a3);

    // java.lang.String(int,int,char[])
    static jnipp::LocalRef<JavaLangString> construct(jint a0, jint a1, const jnipp::Ref<jnipp::Array<jchar>>& a2);

    // java.lang.String(char[],boolean)
    static jnipp::LocalRef<JavaLangString> construct(const jnipp::Ref<jnipp::Array<jchar>>& a0, jboolean a1);

    // public java.lang.String(java.lang.StringBuilder)
    static jnipp::LocalRef<JavaLangString> construct(const jnipp::Ref<JavaLangStringBuilder>& a0);

    // public java.lang.String(java.lang.StringBuffer)
    static jnipp::LocalRef<JavaLangString> construct(const jnipp::Ref<JavaLangStringBuffer>& a0);

    // public java.lang.String(int[],int,int)
    static jnipp::LocalRef<JavaLangString> construct(const jnipp::Ref<jnipp::Array<jint>>& a0, jint a1, jint a2);

    // public java.lang.String(char[],int,int)
    static jnipp::LocalRef<JavaLangString> construct(const jnipp::Ref<jnipp::Array<jchar>>& a0, jint a1, jint a2);

    // public java.lang.String(char[])
    static jnipp::LocalRef<JavaLangString> construct(const jnipp::Ref<jnipp::Array<jchar>>& a0);

    // public java.lang.String(java.lang.String)
    static jnipp::LocalRef<JavaLangString> construct(const jnipp::Ref<JavaLangString>& a0);

    // public java.lang.String()
    static jnipp::LocalRef<JavaLangString> construct();

    // public java.lang.String(byte[],int,int,java.lang.String) throws java.io.UnsupportedEncodingException
    static jnipp::LocalRef<JavaLangString> construct(const jnipp::Ref<jnipp::Array<jbyte>>& a0, jint a1, jint a2, const jnipp::Ref<JavaLangString>& a3);

    // public java.lang.String(byte[],int)
    static jnipp::LocalRef<JavaLangString> construct(const jnipp::Ref<jnipp::Array<jbyte>>& a0, jint a1);

    // public java.lang.String(byte[],int,int,int)
    static jnipp::LocalRef<JavaLangString> construct(const jnipp::Ref<jnipp::Array<jbyte>>& a0, jint a1, jint a2, jint a3);

    // public boolean java.lang.String.equals(java.lang.Object)
    jboolean equals(const jnipp::Ref<JavaLangObject>& a0) const;

    // public int java.lang.String.hashCode()
    jint hashCode() const;

    // public int java.lang.String.compareTo(java.lang.String)
    jint compareTo(const jnipp::Ref<JavaLangString>& a0) const;

    // public int java.lang.String.indexOf(java.lang.String,int)
    jint indexOf(const jnipp::Ref<JavaLangString>& a0, jint a1) const;

    // public int java.lang.String.indexOf(java.lang.String)
    jint indexOf(const jnipp::Ref<JavaLangString>& a0) const;

    // public int java.lang.String.indexOf(int)
    jint indexOf(jint a0) const;

    // public int java.lang.String.indexOf(int,int)
    jint indexOf(jint a0, jint a1) const;

    // public static java.lang.String java.lang.String.valueOf(char)
    static jnipp::LocalRef<JavaLangString> valueOf(jchar a0);

    // public static java.lang.String java.lang.String.valueOf(java.lang.Object)
    static jnipp::LocalRef<JavaLangString> valueOf(const jnipp::Ref<JavaLangObject>& a0);

    // public static java.lang.String java.lang.String.valueOf(boolean)
    static jnipp::LocalRef<JavaLangString> valueOf(jboolean a0);

    // public static java.lang.String java.lang.String.valueOf(char[],int,int)
    static jnipp::LocalRef<JavaLangString> valueOf(const jnipp::Ref<jnipp::Array<jchar>>& a0, jint a1, jint a2);

    // public static java.lang.String java.lang.String.valueOf(char[])
    static jnipp::LocalRef<JavaLangString> valueOf(const jnipp::Ref<jnipp::Array<jchar>>& a0);

    // public static java.lang.String java.lang.String.valueOf(long)
    static jnipp::LocalRef<JavaLangString> valueOf(jlong a0);

    // public static java.lang.String java.lang.String.valueOf(float)
    static jnipp::LocalRef<JavaLangString> valueOf(jfloat a0);

    // public static java.lang.String java.lang.String.valueOf(int)
    static jnipp::LocalRef<JavaLangString> valueOf(jint a0);

    // public static java.lang.String java.lang.String.valueOf(double)
    static jnipp::LocalRef<JavaLangString> valueOf(jdouble a0);

    // public int java.lang.String.length()
    jint length() const;

    // public boolean java.lang.String.isEmpty()
    jboolean isEmpty() const;

    // public char java.lang.String.charAt(int)
    jchar charAt(jint a0) const;

    // public int java.lang.String.codePointAt(int)
    jint codePointAt(jint a0) const;

    // public int java.lang.String.codePointBefore(int)
    jint codePointBefore(jint a0) const;

    // public int java.lang.String.codePointCount(int,int)
    jint codePointCount(jint a0, jint a1) const;

    // public int java.lang.String.offsetByCodePoints(int,int)
    jint offsetByCodePoints(jint a0, jint a1) const;

    // public void java.lang.String.getChars(int,int,char[],int)
    void getChars(jint a0, jint a1, const jnipp::Ref<jnipp::Array<jchar>>& a2, jint a3) const;

    // public byte[] java.lang.String.getBytes(java.lang.String) throws java.io.UnsupportedEncodingException
    jnipp::LocalRef<jnipp::Array<jbyte>> getBytes(const jnipp::Ref<JavaLangString>& a0) const;

    // public void java.lang.String.getBytes(int,int,byte[],int)
    void getBytes(jint a0, jint a1, const jnipp::Ref<jnipp::Array<jbyte>>& a2, jint a3) const;

    // public byte[] java.lang.String.getBytes(java.nio.charset.Charset)
    jnipp::LocalRef<jnipp::Array<jbyte>> getBytes(const jnipp::Ref<JavaNioCharsetCharset>& a0) const;

    // public byte[] java.lang.String.getBytes()
    jnipp::LocalRef<jnipp::Array<jbyte>> getBytes() const;

    // public boolean java.lang.String.contentEquals(java.lang.CharSequence)
    jboolean contentEquals(const jnipp::Ref<JavaLangCharSequence>& a0) const;

    // public boolean java.lang.String.contentEquals(java.lang.StringBuffer)
    jboolean contentEquals(const jnipp::Ref<JavaLangStringBuffer>& a0) const;

    // public boolean java.lang.String.equalsIgnoreCase(java.lang.String)
    jboolean equalsIgnoreCase(const jnipp::Ref<JavaLangString>& a0) const;

    // public int java.lang.String.compareToIgnoreCase(java.lang.String)
    jint compareToIgnoreCase(const jnipp::Ref<JavaLangString>& a0) const;

    // public boolean java.lang.String.regionMatches(boolean,int,java.lang.String,int,int)
    jboolean regionMatches(jboolean a0, jint a1, const jnipp::Ref<JavaLangString>& a2, jint a3, jint a4) const;

    // public boolean java.lang.String.regionMatches(int,java.lang.String,int,int)
    jboolean regionMatches(jint a0, const jnipp::Ref<JavaLangString>& a1, jint a2, jint a3) const;

    // public boolean java.lang.String.startsWith(java.lang.String,int)
    jboolean startsWith(const jnipp::Ref<JavaLangString>& a0, jint a1) const;

    // public boolean java.lang.String.startsWith(java.lang.String)
    jboolean startsWith(const jnipp::Ref<JavaLangString>& a0) const;

    // public boolean java.lang.String.endsWith(java.lang.String)
    jboolean endsWith(const jnipp::Ref<JavaLangString>& a0) const;

    // public int java.lang.String.lastIndexOf(java.lang.String)
    jint lastIndexOf(const jnipp::Ref<JavaLangString>& a0) const;

    // public int java.lang.String.lastIndexOf(java.lang.String,int)
    jint lastIndexOf(const jnipp::Ref<JavaLangString>& a0, jint a1) const;

    // public int java.lang.String.lastIndexOf(int)
    jint lastIndexOf(jint a0) const;

    // public int java.lang.String.lastIndexOf(int,int)
    jint lastIndexOf(jint a0, jint a1) const;

    // public java.lang.String java.lang.String.substring(int,int)
    jnipp::LocalRef<JavaLangString> substring(jint a0, jint a1) const;

    // public java.lang.String java.lang.String.substring(int)
    jnipp::LocalRef<JavaLangString> substring(jint a0) const;

    // public java.lang.CharSequence java.lang.String.subSequence(int,int)
    jnipp::LocalRef<JavaLangCharSequence> subSequence(jint a0, jint a1) const;

    // public java.lang.String java.lang.String.concat(java.lang.String)
    jnipp::LocalRef<JavaLangString> concat(const jnipp::Ref<JavaLangString>& a0) const;

    // public java.lang.String java.lang.String.replace(char,char)
    jnipp::LocalRef<JavaLangString> replace(jchar a0, jchar a1) const;

    // public java.lang.String java.lang.String.replace(java.lang.CharSequence,java.lang.CharSequence)
    jnipp::LocalRef<JavaLangString> replace(const jnipp::Ref<JavaLangCharSequence>& a0, const jnipp::Ref<JavaLangCharSequence>& a1) const;

    // public boolean java.lang.String.matches(java.lang.String)
    jboolean matches(const jnipp::Ref<JavaLangString>& a0) const;

    // public boolean java.lang.String.contains(java.lang.CharSequence)
    jboolean contains(const jnipp::Ref<JavaLangCharSequence>& a0) const;

    // public java.lang.String java.lang.String.replaceFirst(java.lang.String,java.lang.String)
    jnipp::LocalRef<JavaLangString> replaceFirst(const jnipp::Ref<JavaLangString>& a0, const jnipp::Ref<JavaLangString>& a1) const;

    // public java.lang.String java.lang.String.replaceAll(java.lang.String,java.lang.String)
    jnipp::LocalRef<JavaLangString> replaceAll(const jnipp::Ref<JavaLangString>& a0, const jnipp::Ref<JavaLangString>& a1) const;

    // public java.lang.String[] java.lang.String.split(java.lang.String)
    jnipp::LocalRef<jnipp::Array<JavaLangString>> split(const jnipp::Ref<JavaLangString>& a0) const;

    // public java.lang.String[] java.lang.String.split(java.lang.String,int)
    jnipp::LocalRef<jnipp::Array<JavaLangString>> split(const jnipp::Ref<JavaLangString>& a0, jint a1) const;

    // public java.lang.String java.lang.String.toLowerCase(java.util.Locale)
    jnipp::LocalRef<JavaLangString> toLowerCase(const jnipp::Ref<JavaUtilLocale>& a0) const;

    // public java.lang.String java.lang.String.toLowerCase()
    jnipp::LocalRef<JavaLangString> toLowerCase() const;

    // public java.lang.String java.lang.String.toUpperCase(java.util.Locale)
    jnipp::LocalRef<JavaLangString> toUpperCase(const jnipp::Ref<JavaUtilLocale>& a0) const;

    // public java.lang.String java.lang.String.toUpperCase()
    jnipp::LocalRef<JavaLangString> toUpperCase() const;

    // public java.lang.String java.lang.String.trim()
    jnipp::LocalRef<JavaLangString> trim() const;

    // public char[] java.lang.String.toCharArray()
    jnipp::LocalRef<jnipp::Array<jchar>> toCharArray() const;

    // public static java.lang.String java.lang.String.format(java.lang.String,java.lang.Object[])
    static jnipp::LocalRef<JavaLangString> format(const jnipp::Ref<JavaLangString>& a0, const jnipp::Ref<jnipp::Array<JavaLangObject>>& a1);

    // public static java.lang.String java.lang.String.format(java.util.Locale,java.lang.String,java.lang.Object[])
    static jnipp::LocalRef<JavaLangString> format(const jnipp::Ref<JavaUtilLocale>& a0, const jnipp::Ref<JavaLangString>& a1, const jnipp::Ref<jnipp::Array<JavaLangObject>>& a2);

    // public static java.lang.String java.lang.String.copyValueOf(char[])
    static jnipp::LocalRef<JavaLangString> copyValueOf(const jnipp::Ref<jnipp::Array<jchar>>& a0);

    // public static java.lang.String java.lang.String.copyValueOf(char[],int,int)
    static jnipp::LocalRef<JavaLangString> copyValueOf(const jnipp::Ref<jnipp::Array<jchar>>& a0, jint a1, jint a2);

    // public native java.lang.String java.lang.String.intern()
    jnipp::LocalRef<JavaLangString> intern() const;

#pragma push_macro("CASE_INSENSITIVE_ORDER")
#undef CASE_INSENSITIVE_ORDER
    // public static final java.util.Comparator java.lang.String.CASE_INSENSITIVE_ORDER
    static const jnipp::StaticField<JavaUtilComparator> CASE_INSENSITIVE_ORDER;
#pragma pop_macro("CASE_INSENSITIVE_ORDER")
};

// interface java.util.Map
class JavaUtilMap : public jnipp::Object
{
public:
    using parent = jnipp::Object;
    using parent::parent;

    static jnipp::GlobalRef<jnipp::Class>& clazz();

    // public abstract java.lang.Object java.util.Map.remove(java.lang.Object)
    jnipp::LocalRef<JavaLangObject> remove(const jnipp::Ref<JavaLangObject>& a0) const;

    // public abstract java.lang.Object java.util.Map.get(java.lang.Object)
    jnipp::LocalRef<JavaLangObject> get(const jnipp::Ref<JavaLangObject>& a0) const;

    // public abstract java.lang.Object java.util.Map.put(java.lang.Object,java.lang.Object)
    jnipp::LocalRef<JavaLangObject> put(const jnipp::Ref<JavaLangObject>& a0, const jnipp::Ref<JavaLangObject>& a1) const;

    // public abstract boolean java.util.Map.equals(java.lang.Object)
    jboolean equals(const jnipp::Ref<JavaLangObject>& a0) const;

    // public abstract java.util.Collection java.util.Map.values()
    jnipp::LocalRef<JavaUtilCollection> values() const;

    // public abstract int java.util.Map.hashCode()
    jint hashCode() const;

    // public abstract void java.util.Map.clear()
    void clear() const;

    // public abstract boolean java.util.Map.isEmpty()
    jboolean isEmpty() const;

    // public abstract int java.util.Map.size()
    jint size() const;

    // public abstract java.util.Set java.util.Map.entrySet()
    jnipp::LocalRef<JavaUtilSet> entrySet() const;

    // public abstract void java.util.Map.putAll(java.util.Map)
    void putAll(const jnipp::Ref<JavaUtilMap>& a0) const;

    // public abstract java.util.Set java.util.Map.keySet()
    jnipp::LocalRef<JavaUtilSet> keySet() const;

    // public abstract boolean java.util.Map.containsValue(java.lang.Object)
    jboolean containsValue(const jnipp::Ref<JavaLangObject>& a0) const;

    // public abstract boolean java.util.Map.containsKey(java.lang.Object)
    jboolean containsKey(const jnipp::Ref<JavaLangObject>& a0) const;
};

// interface java.util.Set
class JavaUtilSet : public jnipp::Object
{
public:
    using parent = jnipp::Object;
    using parent::parent;

    static jnipp::GlobalRef<jnipp::Class>& clazz();

    // public abstract boolean java.util.Set.add(java.lang.Object)
    jboolean add(const jnipp::Ref<JavaLangObject>& a0) const;

    // public abstract boolean java.util.Set.remove(java.lang.Object)
    jboolean remove(const jnipp::Ref<JavaLangObject>& a0) const;

    // public abstract boolean java.util.Set.equals(java.lang.Object)
    jboolean equals(const jnipp::Ref<JavaLangObject>& a0) const;

    // public abstract int java.util.Set.hashCode()
    jint hashCode() const;

    // public abstract void java.util.Set.clear()
    void clear() const;

    // public abstract boolean java.util.Set.isEmpty()
    jboolean isEmpty() const;

    // public abstract boolean java.util.Set.contains(java.lang.Object)
    jboolean contains(const jnipp::Ref<JavaLangObject>& a0) const;

    // public abstract int java.util.Set.size()
    jint size() const;

    // public abstract java.lang.Object[] java.util.Set.toArray()
    jnipp::LocalRef<jnipp::Array<JavaLangObject>> toArray() const;

    // public abstract java.lang.Object[] java.util.Set.toArray(java.lang.Object[])
    jnipp::LocalRef<jnipp::Array<JavaLangObject>> toArray(const jnipp::Ref<jnipp::Array<JavaLangObject>>& a0) const;

    // public abstract boolean java.util.Set.addAll(java.util.Collection)
    jboolean addAll(const jnipp::Ref<JavaUtilCollection>& a0) const;

    // public abstract java.util.Iterator java.util.Set.iterator()
    jnipp::LocalRef<JavaUtilIterator> iterator() const;

    // public abstract boolean java.util.Set.containsAll(java.util.Collection)
    jboolean containsAll(const jnipp::Ref<JavaUtilCollection>& a0) const;

    // public abstract boolean java.util.Set.removeAll(java.util.Collection)
    jboolean removeAll(const jnipp::Ref<JavaUtilCollection>& a0) const;

    // public abstract boolean java.util.Set.retainAll(java.util.Collection)
    jboolean retainAll(const jnipp::Ref<JavaUtilCollection>& a0) const;
};

// class JavaTest
class JavaTest : public JavaLangObject
{
public:
    using parent = JavaLangObject;
    using parent::parent;

    static jnipp::GlobalRef<jnipp::Class>& clazz();

    // public JavaTest()
    static jnipp::LocalRef<JavaTest> construct();

#pragma push_macro("staticObject")
#undef staticObject
    // public static java.lang.Object JavaTest.staticObject
    static jnipp::StaticField<JavaLangObject> staticObject;
#pragma pop_macro("staticObject")

#pragma push_macro("staticInt")
#undef staticInt
    // public static int JavaTest.staticInt
    static jnipp::StaticField<jint> staticInt;
#pragma pop_macro("staticInt")
};

// interface java.util.Comparator (stub)
class JavaUtilComparator : public jnipp::Object
{
public:
    using parent = jnipp::Object;
    using parent::parent;

    static jnipp::GlobalRef<jnipp::Class>& clazz();
};

// class java.lang.AbstractStringBuilder (stub)
class JavaLangAbstractStringBuilder : public JavaLangObject
{
public:
    using parent = JavaLangObject;
    using parent::parent;

    static jnipp::GlobalRef<jnipp::Class>& clazz();
};

// class java.lang.StringBuffer (stub)
class JavaLangStringBuffer : public JavaLangAbstractStringBuilder
{
public:
    using parent = JavaLangAbstractStringBuilder;
    using parent::parent;

    static jnipp::GlobalRef<jnipp::Class>& clazz();
};

// interface java.util.Collection (stub)
class JavaUtilCollection : public jnipp::Object
{
public:
    using parent = jnipp::Object;
    using parent::parent;

    static jnipp::GlobalRef<jnipp::Class>& clazz();
};

// interface java.lang.CharSequence (stub)
class JavaLangCharSequence : public jnipp::Object
{
public:
    using parent = jnipp::Object;
    using parent::parent;

    static jnipp::GlobalRef<jnipp::Class>& clazz();
};

// class java.nio.charset.Charset (stub)
class JavaNioCharsetCharset : public JavaLangObject
{
public:
    using parent = JavaLangObject;
    using parent::parent;

    static jnipp::GlobalRef<jnipp::Class>& clazz();
};

// class java.lang.StringBuilder (stub)
class JavaLangStringBuilder : public JavaLangAbstractStringBuilder
{
public:
    using parent = JavaLangAbstractStringBuilder;
    using parent::parent;

    static jnipp::GlobalRef<jnipp::Class>& clazz();
};

// class java.util.Locale (stub)
class JavaUtilLocale : public JavaLangObject
{
public:
    using parent = JavaLangObject;
    using parent::parent;

    static jnipp::GlobalRef<jnipp::Class>& clazz();
};

// interface java.util.Iterator (stub)
class JavaUtilIterator : public jnipp::Object
{
public:
    using parent = jnipp::Object;
    using parent::parent;

    static jnipp::GlobalRef<jnipp::Class>& clazz();
};

