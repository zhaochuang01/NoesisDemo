////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////


#ifndef __CORE_TYPECLASSCREATOREMPTY_H__
#define __CORE_TYPECLASSCREATOREMPTY_H__


#include <Noesis.h>


namespace Noesis
{
namespace Core
{

/// Forward declarations
//@{
class Type;
class TypeInfo;
class TypeClassBuilder;
template<NsInt N> struct Int2Type;
//@}

////////////////////////////////////////////////////////////////////////////////////////////////////
/// TypeClassCreatorEmpty. Creates an empty TypeClass adding only information about base class.
////////////////////////////////////////////////////////////////////////////////////////////////////
template<class ClassT, class BaseT>
class TypeClassCreatorEmpty
{
public:
    /// Creates a TypeClass for the specified class
    static Type* Create(const TypeInfo& typeInfo);

    /// Fills TypeClass with members of the class (only the base type in this case)
    static void Fill(Type* type);

private:
    /// Constructor
    TypeClassCreatorEmpty(TypeClassBuilder* typeClass);

    /// Adds base parent to the type class (only if T is different of NoParent)
    //@{
    template<class T>
    void Base(Int2Type<0>);

    template<class T>
    void Base(Int2Type<1>);
    //@}

private:
    TypeClassBuilder* mTypeClass;
};

}
}

/// Inline include
#include <NsCore/TypeClassCreatorEmpty.inl>


#endif
