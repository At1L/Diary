#include "pch.h"
#include "TaskPage.xaml.h"
#include "TaskClass.h"
#include "TaskPage.xaml.g.h"
#if __has_include("TaskPage.g.cpp")
#include "TaskPage.g.cpp"
#endif

#include <vector>
#include <string>

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
}

std::vector <std::string> UserTask;

void winrt::DairyApp::implementation::TaskPage::AppBarButton_Click(Windows::Foundation::IInspectable const& sender, RoutedEventArgs const& e)
{
    //Txt2().Text(to_hstring(""));
    std::string s = to_string(Txt().Text());
    UserTask.push_back(s);

    std::string s1 = "";

    for (int i = 0; i < UserTask.size(); i++)
    {
        s1 += UserTask[i];
        s1 += ' ';
    }

    Txt2().Text(to_hstring(s1));
}