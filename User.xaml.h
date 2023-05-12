#pragma once

#include "User.g.h"

namespace winrt::DairyApp::implementation
{
    struct User : UserT<User>
    {
        User();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void myButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::DairyApp::factory_implementation
{
    struct User : UserT<User, implementation::User>
    {
    };
}
