#pragma once

#include "MailPage.g.h"

namespace winrt::DairyApp::implementation
{
    struct MailPage : MailPageT<MailPage>
    {
        MailPage();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        
    };
}

namespace winrt::DairyApp::factory_implementation
{
    struct MailPage : MailPageT<MailPage, implementation::MailPage>
    {
    };
}
