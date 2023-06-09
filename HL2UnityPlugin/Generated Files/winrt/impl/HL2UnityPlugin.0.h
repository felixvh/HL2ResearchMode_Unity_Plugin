// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.200729.8

#ifndef WINRT_HL2UnityPlugin_0_H
#define WINRT_HL2UnityPlugin_0_H
WINRT_EXPORT namespace winrt::Windows::Perception::Spatial
{
    struct SpatialCoordinateSystem;
}
WINRT_EXPORT namespace winrt::HL2UnityPlugin
{
    struct IHL2ResearchMode;
    struct HL2ResearchMode;
}
namespace winrt::impl
{
    template <> struct category<HL2UnityPlugin::IHL2ResearchMode>{ using type = interface_category; };
    template <> struct category<HL2UnityPlugin::HL2ResearchMode>{ using type = class_category; };
    template <> inline constexpr auto& name_v<HL2UnityPlugin::HL2ResearchMode> = L"HL2UnityPlugin.HL2ResearchMode";
    template <> inline constexpr auto& name_v<HL2UnityPlugin::IHL2ResearchMode> = L"HL2UnityPlugin.IHL2ResearchMode";
    template <> inline constexpr guid guid_v<HL2UnityPlugin::IHL2ResearchMode>{ 0x99433884,0xE00D,0x5F2A,{ 0x8A,0x68,0xCC,0xDE,0x5B,0x6B,0x75,0xF4 } }; // 99433884-E00D-5F2A-8A68-CCDE5B6B75F4
    template <> struct default_interface<HL2UnityPlugin::HL2ResearchMode>{ using type = HL2UnityPlugin::IHL2ResearchMode; };
    template <> struct abi<HL2UnityPlugin::IHL2ResearchMode>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCenterDepth(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall GetDepthMapBuffer(uint32_t* __resultSize, uint16_t**) noexcept = 0;
            virtual int32_t __stdcall GetDepthMapTextureBuffer(uint32_t* __resultSize, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall GetShortAbImageBuffer(uint32_t* __resultSize, uint16_t**) noexcept = 0;
            virtual int32_t __stdcall GetShortAbImageTextureBuffer(uint32_t* __resultSize, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall GetPointCloudBuffer(uint32_t* __resultSize, float**) noexcept = 0;
            virtual int32_t __stdcall GetRigidNodePose(uint32_t* __resultSize, float**) noexcept = 0;
            virtual int32_t __stdcall GetLongDepthMapBuffer(uint32_t* __resultSize, uint16_t**) noexcept = 0;
            virtual int32_t __stdcall GetLongDepthMapTextureBuffer(uint32_t* __resultSize, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall GetLFCameraBuffer(uint32_t* __resultSize, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall GetRFCameraBuffer(uint32_t* __resultSize, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall GetCenterPoint(uint32_t* __resultSize, float**) noexcept = 0;
            virtual int32_t __stdcall GetDepthSensorPosition(uint32_t* __resultSize, float**) noexcept = 0;
            virtual int32_t __stdcall GetDepthBufferSize(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetLongDepthBufferSize(int32_t*) noexcept = 0;
            virtual int32_t __stdcall PrintDepthResolution(void**) noexcept = 0;
            virtual int32_t __stdcall PrintDepthExtrinsics(void**) noexcept = 0;
            virtual int32_t __stdcall PrintLFResolution(void**) noexcept = 0;
            virtual int32_t __stdcall PrintLFExtrinsics(void**) noexcept = 0;
            virtual int32_t __stdcall PrintRFResolution(void**) noexcept = 0;
            virtual int32_t __stdcall PrintRFExtrinsics(void**) noexcept = 0;
            virtual int32_t __stdcall DepthMapTextureUpdated(bool*) noexcept = 0;
            virtual int32_t __stdcall ShortAbImageTextureUpdated(bool*) noexcept = 0;
            virtual int32_t __stdcall PointCloudUpdated(bool*) noexcept = 0;
            virtual int32_t __stdcall LongDepthMapTextureUpdated(bool*) noexcept = 0;
            virtual int32_t __stdcall LFImageUpdated(bool*) noexcept = 0;
            virtual int32_t __stdcall RFImageUpdated(bool*) noexcept = 0;
            virtual int32_t __stdcall InitializeDepthSensor() noexcept = 0;
            virtual int32_t __stdcall InitializeLongDepthSensor() noexcept = 0;
            virtual int32_t __stdcall InitializeSpatialCamerasFront() noexcept = 0;
            virtual int32_t __stdcall StartDepthSensorLoop() noexcept = 0;
            virtual int32_t __stdcall StartLongDepthSensorLoop() noexcept = 0;
            virtual int32_t __stdcall StartSpatialCamerasFrontLoop() noexcept = 0;
            virtual int32_t __stdcall StopAllSensorDevice() noexcept = 0;
            virtual int32_t __stdcall SetReferenceCoordinateSystem(void*) noexcept = 0;
            virtual int32_t __stdcall SetPointCloudRoiInSpace(float, float, float, float, float, float) noexcept = 0;
            virtual int32_t __stdcall SetPointCloudDepthOffset(uint16_t) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_HL2UnityPlugin_IHL2ResearchMode
    {
        WINRT_IMPL_AUTO(uint16_t) GetCenterDepth() const;
        WINRT_IMPL_AUTO(com_array<uint16_t>) GetDepthMapBuffer() const;
        WINRT_IMPL_AUTO(com_array<uint8_t>) GetDepthMapTextureBuffer() const;
        WINRT_IMPL_AUTO(com_array<uint16_t>) GetShortAbImageBuffer() const;
        WINRT_IMPL_AUTO(com_array<uint8_t>) GetShortAbImageTextureBuffer() const;
        WINRT_IMPL_AUTO(com_array<float>) GetPointCloudBuffer() const;
        WINRT_IMPL_AUTO(com_array<float>) GetRigidNodePose() const;
        WINRT_IMPL_AUTO(com_array<uint16_t>) GetLongDepthMapBuffer() const;
        WINRT_IMPL_AUTO(com_array<uint8_t>) GetLongDepthMapTextureBuffer() const;
        WINRT_IMPL_AUTO(com_array<uint8_t>) GetLFCameraBuffer() const;
        WINRT_IMPL_AUTO(com_array<uint8_t>) GetRFCameraBuffer() const;
        WINRT_IMPL_AUTO(com_array<float>) GetCenterPoint() const;
        WINRT_IMPL_AUTO(com_array<float>) GetDepthSensorPosition() const;
        WINRT_IMPL_AUTO(int32_t) GetDepthBufferSize() const;
        WINRT_IMPL_AUTO(int32_t) GetLongDepthBufferSize() const;
        WINRT_IMPL_AUTO(hstring) PrintDepthResolution() const;
        WINRT_IMPL_AUTO(hstring) PrintDepthExtrinsics() const;
        WINRT_IMPL_AUTO(hstring) PrintLFResolution() const;
        WINRT_IMPL_AUTO(hstring) PrintLFExtrinsics() const;
        WINRT_IMPL_AUTO(hstring) PrintRFResolution() const;
        WINRT_IMPL_AUTO(hstring) PrintRFExtrinsics() const;
        WINRT_IMPL_AUTO(bool) DepthMapTextureUpdated() const;
        WINRT_IMPL_AUTO(bool) ShortAbImageTextureUpdated() const;
        WINRT_IMPL_AUTO(bool) PointCloudUpdated() const;
        WINRT_IMPL_AUTO(bool) LongDepthMapTextureUpdated() const;
        WINRT_IMPL_AUTO(bool) LFImageUpdated() const;
        WINRT_IMPL_AUTO(bool) RFImageUpdated() const;
        WINRT_IMPL_AUTO(void) InitializeDepthSensor() const;
        WINRT_IMPL_AUTO(void) InitializeLongDepthSensor() const;
        WINRT_IMPL_AUTO(void) InitializeSpatialCamerasFront() const;
        WINRT_IMPL_AUTO(void) StartDepthSensorLoop() const;
        WINRT_IMPL_AUTO(void) StartLongDepthSensorLoop() const;
        WINRT_IMPL_AUTO(void) StartSpatialCamerasFrontLoop() const;
        WINRT_IMPL_AUTO(void) StopAllSensorDevice() const;
        WINRT_IMPL_AUTO(void) SetReferenceCoordinateSystem(Windows::Perception::Spatial::SpatialCoordinateSystem const& refCoord) const;
        WINRT_IMPL_AUTO(void) SetPointCloudRoiInSpace(float centerX, float centerY, float centerZ, float boundX, float boundY, float boundZ) const;
        WINRT_IMPL_AUTO(void) SetPointCloudDepthOffset(uint16_t offset) const;
    };
    template <> struct consume<HL2UnityPlugin::IHL2ResearchMode>
    {
        template <typename D> using type = consume_HL2UnityPlugin_IHL2ResearchMode<D>;
    };
}
#endif
