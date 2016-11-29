////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////


#ifndef __CORE_REFLECTIONDECLAREENUM_H__
#define __CORE_REFLECTIONDECLAREENUM_H__


/// Forward declarations
//@{
namespace Noesis
{
namespace Core
{
template<class EnumT> class TypeEnumCreator;
}
}
//@}


////////////////////////////////////////////////////////////////////////////////////////////////////
/// Defines enum filler functor
////////////////////////////////////////////////////////////////////////////////////////////////////
namespace Noesis
{
namespace Core
{
template<class T> struct TypeEnumFiller
{
    static void Fill(TypeEnumCreator<T>& helper);
};
}
}

////////////////////////////////////////////////////////////////////////////////////////////////////
/// Declares an enum to be used in reflection.
////////////////////////////////////////////////////////////////////////////////////////////////////
#define NS_DECLARE_ENUM(api, enumType) \
namespace Noesis \
{\
namespace Core \
{\
template<> struct api TypeEnumFiller<enumType>\
{\
    static void Check();\
    static void Fill(TypeEnumCreator<enumType>& helper);\
};\
}\
}

#endif
