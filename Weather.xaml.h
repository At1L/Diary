#pragma once

#include "Weather.g.h"

namespace winrt::DairyApp::implementation
{
    struct Weather : WeatherT<Weather>
    {
        Weather();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void myButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::DairyApp::factory_implementation
{
    struct Weather : WeatherT<Weather, implementation::Weather>
    {
    };
}
