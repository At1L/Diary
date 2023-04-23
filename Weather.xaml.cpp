#include "pch.h"
#include "Weather.xaml.h"
#if __has_include("Weather.g.cpp")
#include "Weather.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::DairyApp::implementation
{
    Weather::Weather()
    {
        InitializeComponent();
    }

    int32_t Weather::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void Weather::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

}
