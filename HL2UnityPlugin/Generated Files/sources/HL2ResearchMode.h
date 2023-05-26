#pragma once
#include "HL2ResearchMode.g.h"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.
static_assert(false, "Do not compile generated C++/WinRT source files directly");

namespace winrt::HL2UnityPlugin::implementation
{
    struct HL2ResearchMode : HL2ResearchModeT<HL2ResearchMode>
    {
        HL2ResearchMode() = default;

        uint16_t GetCenterDepth();
        com_array<uint16_t> GetDepthMapBuffer();
        com_array<uint8_t> GetDepthMapTextureBuffer();
        com_array<uint16_t> GetShortAbImageBuffer();
        com_array<uint8_t> GetShortAbImageTextureBuffer();
        com_array<float> GetPointCloudBuffer();
        com_array<float> GetRigidNodePose();
        com_array<uint16_t> GetLongDepthMapBuffer();
        com_array<uint8_t> GetLongDepthMapTextureBuffer();
        com_array<uint8_t> GetLFCameraBuffer();
        com_array<uint8_t> GetRFCameraBuffer();
        com_array<float> GetCenterPoint();
        com_array<float> GetDepthSensorPosition();
        int32_t GetDepthBufferSize();
        int32_t GetLongDepthBufferSize();
        hstring PrintDepthResolution();
        hstring PrintDepthExtrinsics();
        hstring PrintLFResolution();
        hstring PrintLFExtrinsics();
        hstring PrintRFResolution();
        hstring PrintRFExtrinsics();
        bool DepthMapTextureUpdated();
        bool ShortAbImageTextureUpdated();
        bool PointCloudUpdated();
        bool LongDepthMapTextureUpdated();
        bool LFImageUpdated();
        bool RFImageUpdated();
        void InitializeDepthSensor();
        void InitializeLongDepthSensor();
        void InitializeSpatialCamerasFront();
        void StartDepthSensorLoop();
        void StartLongDepthSensorLoop();
        void StartSpatialCamerasFrontLoop();
        void StopAllSensorDevice();
        void SetReferenceCoordinateSystem(Windows::Perception::Spatial::SpatialCoordinateSystem const& refCoord);
        void SetPointCloudRoiInSpace(float centerX, float centerY, float centerZ, float boundX, float boundY, float boundZ);
        void SetPointCloudDepthOffset(uint16_t offset);
    };
}
namespace winrt::HL2UnityPlugin::factory_implementation
{
    struct HL2ResearchMode : HL2ResearchModeT<HL2ResearchMode, implementation::HL2ResearchMode>
    {
    };
}
