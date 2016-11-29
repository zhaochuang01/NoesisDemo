////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////


#ifndef __GUI_MENU_H__
#define __GUI_MENU_H__


#include <Noesis.h>
#include <NsGui/CoreApi.h>
#include <NsGui/BaseMenu.h>


namespace Noesis
{
namespace Gui
{

////////////////////////////////////////////////////////////////////////////////////////////////////
/// Represents a Windows menu control that enables you to hierarchically organize elements 
/// associated with commands and event handlers.
///
/// http://msdn.microsoft.com/en-us/library/ms611602.aspx
////////////////////////////////////////////////////////////////////////////////////////////////////
class NS_GUI_CORE_API Menu: public BaseMenu
{
public:
    Menu();

    /// Gets or sets a value that indicates whether this Menu receives a main menu activation 
    /// notification
    //@{
    NsBool GetIsMainMenu() const;
    void SetIsMainMenu(NsBool value);
    //@}

    /// Gets or sets a value that indicates whether this Menu is activated and sub menu items
    /// get opened when mouse moves over them
    //@{
    NsBool GetActivated() const;
    void SetActivated(NsBool activated);
    //@}

public:
    /// Dependency properties
    //@{
    static const DependencyProperty* IsMainMenuProperty;
    //@}

private:
    void CloseSubmenus();

    void MouseCapture();
    void MouseRelease();

    static void StaticOnMenuLostMouseCapture(BaseComponent* obj, const EventArgs& e);
    void OnMenuLostMouseCapture(const MouseEventArgs& e);

    static void StaticOnMenuMouseButtonDown(BaseComponent* obj, const EventArgs& e);
    void OnMenuMouseButtonDown(const MouseEventArgs& e);

private:
    NsBool mIsActivated;

    NS_DECLARE_REFLECTION(Menu, BaseMenu)
};

}
}

#endif