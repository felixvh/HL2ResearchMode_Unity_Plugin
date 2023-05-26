// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.200729.8

#pragma once
#include "winrt/HL2UnityPlugin.h"
namespace winrt::HL2UnityPlugin::implementation
{
    template <typename D, typename... I>
    struct __declspec(empty_bases) HL2ResearchMode_base : implements<D, HL2UnityPlugin::HL2ResearchMode, I...>
    {
        using base_type = HL2ResearchMode_base;
        using class_type = HL2UnityPlugin::HL2ResearchMode;
        using implements_type = typename HL2ResearchMode_base::implements_type;
        using implements_type::implements_type;
        
        hstring GetRuntimeClassName() const
        {
            return L"HL2UnityPlugin.HL2ResearchMode";
        }
    };
}
namespace winrt::HL2UnityPlugin::factory_implementation
{
    template <typename D, typename T, typename... I>
    struct __declspec(empty_bases) HL2ResearchModeT : implements<D, Windows::Foundation::IActivationFactory, I...>
    {
        using instance_type = HL2UnityPlugin::HL2ResearchMode;

        hstring GetRuntimeClassName() const
        {
            return L"HL2UnityPlugin.HL2ResearchMode";
        }
        auto ActivateInstance() const
        {
            return make<T>();
        }
    };
}

#if defined(WINRT_FORCE_INCLUDE_HL2RESEARCHMODE_XAML_G_H) || __has_include("HL2ResearchMode.xaml.g.h")
#include "HL2ResearchMode.xaml.g.h"
#else

namespace winrt::HL2UnityPlugin::implementation
{
    template <typename D, typename... I>
    using HL2ResearchModeT = HL2ResearchMode_base<D, I...>;
}

#endif
