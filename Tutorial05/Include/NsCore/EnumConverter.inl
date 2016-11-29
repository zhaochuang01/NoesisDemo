////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
// [CR #710]
////////////////////////////////////////////////////////////////////////////////////////////////////


#include <NsCore/String.h>


namespace Noesis
{
namespace Core
{

////////////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
EnumConverter<T>::EnumConverter(): BaseEnumConverter(TypeOf<T>())
{
}

////////////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
Ptr<BaseComponent> EnumConverter<T>::Box(NsUInt32 v) const
{
    return Boxing::Box<T>(static_cast<T>(v));
}

////////////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
NsUInt32 EnumConverter<T>::Unbox(BaseComponent* value) const
{
    return static_cast<NsUInt32>(Boxing::Unbox<T>(value));
}

////////////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
NsBool EnumConverter<T>::CanUnbox(BaseComponent* value) const
{
    return Boxing::CanUnbox<T>(value);
}

}
}