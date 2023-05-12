#include "pch.h"
#include "Contact.h"
#if __has_include("Contact.g.cpp")
#include "Contact.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::DairyApp::implementation
{
    Contact::Contact(hstring const& firstName, hstring const& lastName) : mFirstName(firstName), mLastName(lastName)
    {
    }

    hstring Contact::FirstName()
    {
        return mFirstName;
    }

    void Contact::FirstName(hstring const& value)
    {
        if (mFirstName != value)
        {
            mFirstName = value;
            mPropertyChanged(*this, Microsoft::UI::Xaml::Data::PropertyChangedEventArgs(L"FirstName"));
        }
    }

    hstring Contact::LastName()
    {
        return mLastName;
    }

    void Contact::LastName(hstring const& value)
    {
        if (mLastName != value)
        {
            mLastName = value;
            mPropertyChanged(*this, Microsoft::UI::Xaml::Data::PropertyChangedEventArgs(L"LastName"));
        }
    }

    event_token Contact::PropertyChanged(Microsoft::UI::Xaml::Data::PropertyChangedEventHandler const& handler)
    {
        return mPropertyChanged.add(handler);
    }

    void Contact::PropertyChanged(event_token const& token) noexcept
    {
        mPropertyChanged.remove(token);
    }
}
