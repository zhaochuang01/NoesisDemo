////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////


#ifndef __CORE_TYPEOFFORWARD_H__
#define __CORE_TYPEOFFORWARD_H__


#include <Noesis.h>


namespace Noesis
{
namespace Core
{

////////////////////////////////////////////////////////////////////////////////////////////////////
template<class T> class TypeOfHelper;

////////////////////////////////////////////////////////////////////////////////////////////////////
/// Returns the type (a class derived from Type) for T
////////////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
const typename TypeOfHelper<T>::ReturnType* TypeOf();

}
}


#endif
