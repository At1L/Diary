#pragma once

#include "TaskPage.g.h"

namespace winrt::DairyApp::implementation
{
    struct TaskPage : TaskPageT<TaskPage>
    {
        TaskPage();

        int32_t MyProperty();
        void MyProperty(int32_t value);
    };
}

namespace winrt::DairyApp::factory_implementation
{
    struct TaskPage : TaskPageT<TaskPage, implementation::TaskPage>
    {
    };
}
