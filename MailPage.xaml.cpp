#include "pch.h"
#include "MailPage.xaml.h"
#if __has_include("MailPage.g.cpp")
#include "MailPage.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::DairyApp::implementation
{
    MailPage::MailPage()
    {
        InitializeComponent();
    }

    int32_t MailPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MailPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

}
