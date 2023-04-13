#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
//#include <windows.ui.xaml.navigation.h>
#endif

#include "SettingsPage.xaml.h"

#include <winrt/Windows.UI.Xaml.Interop.h>

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::DairyApp::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();
    }

    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
}

void winrt::DairyApp::implementation::MainWindow::NavigationView_ItemInvoked(winrt::Microsoft::UI::Xaml::Controls::NavigationView const& sender, winrt::Microsoft::UI::Xaml::Controls::NavigationViewItemInvokedEventArgs const& args)
{
    auto currentPageType = contentFrame().CurrentSourcePageType();
    if (args.IsSettingsInvoked())
    {
        auto settingsPageType = xaml_typename<DairyApp::SettingsPage>();
        settingsPageType.Kind = Windows::UI::Xaml::Interop::TypeKind::Custom;
        if (currentPageType != settingsPageType)
        {
            contentFrame().Navigate(settingsPageType, nullptr);
        }

    }
    else
    {
        winrt:Windows::UI::Xaml::Interop::TypeName typeName;
        typeName.Name = winrt::unbox_value<winrt::hstring>(args.InvokedItemContainer().Tag());
        typeName.Kind = winrt::Windows::UI::Xaml::Interop::TypeKind::Custom;
        if (currentPageType != typeName) 
        {
            contentFrame().Navigate(typeName, nullptr);
        }
    }
}
