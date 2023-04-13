#include "pch.h"
#include "Calendar.xaml.h"
#if __has_include("Calendar.g.cpp")
#include "Calendar.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::DairyApp::implementation
{
    Calendar::Calendar()
    {
        InitializeComponent();
    }

    int32_t Calendar::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void Calendar::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

}
