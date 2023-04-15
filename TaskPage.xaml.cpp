#include "pch.h"
#include "TaskPage.xaml.h"
#if __has_include("TaskPage.g.cpp")
#include "TaskPage.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::DairyApp::implementation
{
    TaskPage::TaskPage()
    {
        InitializeComponent();
    }

    int32_t TaskPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void TaskPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
    void TaskPage::Button_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {

    }
}