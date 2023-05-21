#include "pch.h"
#include "User.xaml.h"
#if __has_include("User.g.cpp")
#include "User.g.cpp"
#endif
#include <iostream>
#include <string>
using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace std;
// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::DairyApp::implementation
{
    User::User()
    {
        InitializeComponent();
    }

    int32_t User::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void User::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    bool flag_for_check = false;



void User::Save_button_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    hstring Name = to_hstring(UserInput().Text());
    hstring Age = to_hstring(UserAge().Text());
    hstring Phone = to_hstring(PhoneUser().Text());
    hstring Mail = to_hstring(MailUser().Text());
    hstring Surname = to_hstring(SurnameUser().Text());
    hstring Password = to_hstring(Pass().Password());
    hstring Mom_Name = to_hstring(Mom().Text());
    hstring Dad_Name = to_hstring(Dad().Text());
    hstring Grandma_Name = to_hstring(Grandma().Text());
    hstring Grandpa_Name = to_hstring(Grandpa().Text());

    if (Age.size() > 2)
    {
        Age.clear();
    }
    for (int i = 0; i < Age.size() && !Age.empty(); i++)
    {
        if (Age[i] <= '9' && Age[i] >= '0')
        {
            continue;
        }
        else
        {
            Age.clear();
            break;
        }
    }
    if (!Age.empty() && Age[0] == '0')
    {
        Age.clear();
    }
    int count_dogs = 0, count_point = 0;
    for (int i = 0; i < Mail.size() && !Mail.empty(); i++)
    {
        if (Mail[i] == '@')
        {
            count_dogs++;
        }
        if (Mail[i] == '.')
        {
            count_point++;
        }
    }
    if (Mail.size() > 0 && (Mail[0] == '@' || Mail[0] == '.' || count_dogs > 1 || count_point > 1 || count_dogs == 0 || count_point == 0))
    {
        Mail.clear();
    }
    for (int i = 0; i < Phone.size() && Phone.size() > 0; i++)
    {
        if ((Phone[i] <= '9' && Phone[i] >= '0') || Phone[0] == '+')
        {
            continue;
        }
        else
        {
            Phone.clear();
            break;
        }
    }
    if (((Phone.size() == 12 && Phone[0] == '+') || Phone.size() == 11))
    {}
    else
    {
        Phone.clear();
    }
    if (!Name.empty() && !Age.empty() && !Mail.empty() && !Surname.empty() && !Password.empty())
    {
        NameUser().Text(Name);
        AgeUser().Text(Age);
        PhoneUser().Text(Phone);
        MailUser().Text(Mail);
        SurnameUser().Text(Surname);
        UserSurname().Text(Surname);
        EditBut().Visibility(Microsoft::UI::Xaml::Visibility::Visible);
        Save_But().Visibility(Microsoft::UI::Xaml::Visibility::Collapsed);
        UserInput().IsHitTestVisible(0);
        UserAge().IsHitTestVisible(0);
        PhoneUser().IsHitTestVisible(0);
        MailUser().IsHitTestVisible(0);
        Pass().IsHitTestVisible(0);
        SurnameUser().IsHitTestVisible(0);
        Mom().IsHitTestVisible(0);
        Dad().IsHitTestVisible(0);
        Grandma().IsHitTestVisible(0);
        Grandpa().IsHitTestVisible(0);
        MessegeWrong().IsOpen(0);
    }
    else
    {
        MessegeWrong().IsOpen(1);
        if (Name.empty())
        {
            (UserInput().Text(L"!!!"));
        }
        if (Age.empty())
        {
            (UserAge().Text(L"!!!"));
        }
        if (Surname.empty())
        {
            (SurnameUser().Text(L"!!!"));
        }
        if (Mail.empty())
        {
            (MailUser().Text(L"!!!"));
        }
        if (Password.empty())
        {
            (Pass().Password(L"!!!"));
        }
        

    }
}

void User::EditBut_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    Save_But().Visibility(Microsoft::UI::Xaml::Visibility::Visible);
    EditBut().Visibility(Microsoft::UI::Xaml::Visibility::Collapsed);
    UserInput().IsHitTestVisible(1);
    UserAge().IsHitTestVisible(1);
    PhoneUser().IsHitTestVisible(1);
    MailUser().IsHitTestVisible(1);
    SurnameUser().IsHitTestVisible(1);
    Pass().IsHitTestVisible(1);
    Mom().IsHitTestVisible(1);
    Dad().IsHitTestVisible(1);
    Grandma().IsHitTestVisible(1);
    Grandpa().IsHitTestVisible(1);
}




}















