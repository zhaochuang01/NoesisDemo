////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////


#include <NsCore/Ptr.h>
#include <NsCore/BaseComponent.h>
#include <NsCore/ComponentFactory.h>
#include <NsCore/Kernel.h>
#include <NsCore/DynamicCast.h>


////////////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
inline Noesis::Core::Ptr<T> NsCreateComponent(NsSymbol classId)
{
    return NsDynamicCast<Noesis::Core::Ptr<T> >(
        NsGetKernel()->GetComponentFactory()->CreateComponent(classId));
}
