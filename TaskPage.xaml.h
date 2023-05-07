#pragma once

#include "TaskPage.g.h"

namespace winrt::DairyApp::implementation
{
    struct TaskPage : TaskPageT<TaskPage>
    {
        TaskPage();

        int32_t MyProperty();
        void MyProperty(int32_t value);
        void AddNew_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e);
        void itemListView_SelectionChanged(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::Controls::SelectionChangedEventArgs const& e);
    };
}

namespace winrt::DairyApp::factory_implementation
{
    struct TaskPage : TaskPageT<TaskPage, implementation::TaskPage>
    {
    };
}

