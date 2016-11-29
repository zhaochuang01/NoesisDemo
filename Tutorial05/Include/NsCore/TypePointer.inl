////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
// [CR #866]
////////////////////////////////////////////////////////////////////////////////////////////////////


namespace Noesis
{
namespace Core
{

////////////////////////////////////////////////////////////////////////////////////////////////////
inline const Type* TypeReference::GetContentType() const
{
    return mContentType;
}


////////////////////////////////////////////////////////////////////////////////////////////////////
inline const Type* TypeConst::GetContentType() const
{
    return mContentType;
}


////////////////////////////////////////////////////////////////////////////////////////////////////
inline const Type* TypePointer::GetStaticContentType() const
{
    return mContentType;
}


////////////////////////////////////////////////////////////////////////////////////////////////////
inline const Type* TypePtr::GetStaticContentType() const
{
    return mContentType;
}


////////////////////////////////////////////////////////////////////////////////////////////////////
inline NsSize TypeArray::GetNumElems() const
{
    return mElemCount;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
inline const NsChar* TypeArray::GetCollectionId() const
{
    return "array";
}

}
}
