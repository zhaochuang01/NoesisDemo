////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
// [CR #1307]
////////////////////////////////////////////////////////////////////////////////////////////////////


#ifndef __CORE_TYPECOLLECTION_H__
#define __CORE_TYPECOLLECTION_H__


#include <Noesis.h>
#include <NsCore/KernelApi.h>
#include <NsCore/Type.h>
#include <NsCore/ReflectionDeclare.h>


namespace Noesis
{
namespace Core
{

/// Forward declarations
//@{
class TypeInfo;
//@}

////////////////////////////////////////////////////////////////////////////////////////////////////
/// TypeCollection. Types for STL containers.
////////////////////////////////////////////////////////////////////////////////////////////////////
//@{
class NS_CORE_KERNEL_API TypeCollection: public Type
{
public:
    /// Constructor
    TypeCollection(const TypeInfo& typeInfo);

    /// Gets the static type of collection elements
    const Type* GetElemType() const;

    /// Sets static type of collection elements
    void SetElemType(const Type* elemType);

    /// Gets number of elements in the collection
    /// \param ptr Pointer to the vector collection
    virtual NsSize GetNumElems(const void* ptr) const = 0;

    /// Gets ith element
    virtual const void* Get(const void* ptr, NsSize i) const = 0;

    /// Obtains a string describing the implementation of this Collection. For example:
    /// "vector", "list", ...
    virtual const NsChar* GetCollectionId() const = 0;

protected:
    const Type* mElemType;

    NS_DECLARE_REFLECTION(TypeCollection, Type)
};

}
}


#endif
