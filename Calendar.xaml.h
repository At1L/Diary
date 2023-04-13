#pragma once

#include "Calendar.g.h"

namespace winrt::DairyApp::implementation
{
    struct Calendar : CalendarT<Calendar>
    {
        Calendar();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void myButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::DairyApp::factory_implementation
{
    struct Calendar : CalendarT<Calendar, implementation::Calendar>
    {
    };//
}
