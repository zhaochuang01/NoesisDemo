////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////


#ifndef __GUI_STATUSBARITEM_H__
#define __GUI_STATUSBARITEM_H__


#include <Noesis.h>
#include <NsGui/ContentControl.h>


namespace Noesis
{
namespace Gui
{

////////////////////////////////////////////////////////////////////////////////////////////////////
/// Represents an item of a StatusBar control. 
///
/// http://msdn.microsoft.com/en-us/library/system.windows.controls.primitives.statusbaritem.aspx
////////////////////////////////////////////////////////////////////////////////////////////////////
class NS_GUI_CORE_API StatusBarItem: public ContentControl
{
    NS_DECLARE_REFLECTION(StatusBarItem, ContentControl)
};

}
}

#endif