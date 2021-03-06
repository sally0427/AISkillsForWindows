// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.190111.3

#pragma once
#include "winrt/impl/Windows.AI.MachineLearning.1.h"
#include "winrt/impl/Windows.ApplicationModel.1.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.1.h"
#include "winrt/impl/Windows.Graphics.Imaging.1.h"
#include "winrt/impl/Windows.Media.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Microsoft.AI.Skills.SkillInterface.1.h"

WINRT_EXPORT namespace winrt::Microsoft::AI::Skills::SkillInterface {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Microsoft::AI::Skills::SkillInterface {

struct WINRT_EBO D3D12CommandQueueWrapper :
    Microsoft::AI::Skills::SkillInterface::ID3D12CommandQueueWrapper
{
    D3D12CommandQueueWrapper(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SkillExecutionDeviceCPU :
    Microsoft::AI::Skills::SkillInterface::ISkillExecutionDeviceCPU,
    impl::require<SkillExecutionDeviceCPU, Microsoft::AI::Skills::SkillInterface::ISkillExecutionDevice>
{
    SkillExecutionDeviceCPU(std::nullptr_t) noexcept {}
    static Microsoft::AI::Skills::SkillInterface::SkillExecutionDeviceCPU Create();
};

struct WINRT_EBO SkillExecutionDeviceDXCore :
    Microsoft::AI::Skills::SkillInterface::ISkillExecutionDeviceDXCore,
    impl::require<SkillExecutionDeviceDXCore, Microsoft::AI::Skills::SkillInterface::ISkillExecutionDevice, Microsoft::AI::Skills::SkillInterface::ISkillExecutionDeviceDX>
{
    SkillExecutionDeviceDXCore(std::nullptr_t) noexcept {}
    static Windows::Foundation::Collections::IVectorView<Microsoft::AI::Skills::SkillInterface::SkillExecutionDeviceDXCore> GetAvailableDXCoreExecutionDevices();
    static Microsoft::AI::Skills::SkillInterface::SkillExecutionDeviceDXCore Create(Microsoft::AI::Skills::SkillInterface::D3D12CommandQueueWrapper const& direct3D12CommandQueueWrapper);
};

struct WINRT_EBO SkillExecutionDeviceDXHelper :
    Microsoft::AI::Skills::SkillInterface::ISkillExecutionDeviceDXHelper
{
    SkillExecutionDeviceDXHelper(std::nullptr_t) noexcept {}
    static Windows::Foundation::Collections::IVectorView<Microsoft::AI::Skills::SkillInterface::ISkillExecutionDeviceDX> GetAvailableDXExecutionDevices();
};

struct WINRT_EBO SkillExecutionDeviceDirectX :
    Microsoft::AI::Skills::SkillInterface::ISkillExecutionDeviceDirectX,
    impl::require<SkillExecutionDeviceDirectX, Microsoft::AI::Skills::SkillInterface::ISkillExecutionDevice, Microsoft::AI::Skills::SkillInterface::ISkillExecutionDeviceDX>
{
    SkillExecutionDeviceDirectX(std::nullptr_t) noexcept {}
    static Windows::Foundation::Collections::IVectorView<Microsoft::AI::Skills::SkillInterface::SkillExecutionDeviceDirectX> GetAvailableDirectXExecutionDevices();
    static Microsoft::AI::Skills::SkillInterface::SkillExecutionDeviceDirectX Create(Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& direct3D11Device);
};

struct WINRT_EBO SkillFeature :
    Microsoft::AI::Skills::SkillInterface::ISkillFeature,
    impl::require<SkillFeature, Windows::Foundation::IClosable>
{
    SkillFeature(std::nullptr_t) noexcept {}
    static Microsoft::AI::Skills::SkillInterface::SkillFeature Create(Microsoft::AI::Skills::SkillInterface::ISkillFeatureDescriptor const& descriptor, Microsoft::AI::Skills::SkillInterface::ISkillExecutionDevice const& device);
};

struct WINRT_EBO SkillFeatureImageDescriptor :
    Microsoft::AI::Skills::SkillInterface::ISkillFeatureImageDescriptor,
    impl::require<SkillFeatureImageDescriptor, Microsoft::AI::Skills::SkillInterface::ISkillFeatureImageDescriptor2>
{
    SkillFeatureImageDescriptor(std::nullptr_t) noexcept {}
    SkillFeatureImageDescriptor(param::hstring const& name, param::hstring const& description, bool isRequired, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapPixelFormat const& supportedBitmapPixelFormat, Windows::Graphics::Imaging::BitmapAlphaMode const& supportedBitmapAlphaMode);
    SkillFeatureImageDescriptor(param::hstring const& name, param::hstring const& description, bool isRequired, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapPixelFormat const& supportedBitmapPixelFormat, Windows::Graphics::Imaging::BitmapAlphaMode const& supportedBitmapAlphaMode, Microsoft::AI::Skills::SkillInterface::ImageStretchKind const& imageStretchKindApplied, Microsoft::AI::Skills::SkillInterface::ImageInterpolationKind const& imageInterpolationKindApplied);
};

struct WINRT_EBO SkillFeatureImageValue :
    Microsoft::AI::Skills::SkillInterface::ISkillFeatureImageValue,
    impl::require<SkillFeatureImageValue, Microsoft::AI::Skills::SkillInterface::ISkillFeatureValue, Windows::Foundation::IClosable>
{
    SkillFeatureImageValue(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SkillFeatureMapDescriptor :
    Microsoft::AI::Skills::SkillInterface::ISkillFeatureMapDescriptor
{
    SkillFeatureMapDescriptor(std::nullptr_t) noexcept {}
    SkillFeatureMapDescriptor(param::hstring const& name, param::hstring const& description, bool isRequired, Microsoft::AI::Skills::SkillInterface::SkillElementKind const& valueElementKind, Microsoft::AI::Skills::SkillInterface::SkillElementKind const& keyElementKind, param::iterable<Windows::Foundation::IInspectable> const& validKeys);
};

struct WINRT_EBO SkillFeatureMapValue :
    Microsoft::AI::Skills::SkillInterface::ISkillFeatureMapValue,
    impl::require<SkillFeatureMapValue, Microsoft::AI::Skills::SkillInterface::ISkillFeatureValue, Windows::Foundation::IClosable>
{
    SkillFeatureMapValue(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SkillFeatureTensorBooleanValue :
    Microsoft::AI::Skills::SkillInterface::ISkillFeatureTensorBooleanValue,
    impl::require<SkillFeatureTensorBooleanValue, Microsoft::AI::Skills::SkillInterface::ISkillFeatureTensorValue, Microsoft::AI::Skills::SkillInterface::ISkillFeatureValue, Windows::Foundation::IClosable>
{
    SkillFeatureTensorBooleanValue(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SkillFeatureTensorCustomValue :
    Microsoft::AI::Skills::SkillInterface::ISkillFeatureTensorCustomValue,
    impl::require<SkillFeatureTensorCustomValue, Microsoft::AI::Skills::SkillInterface::ISkillFeatureTensorValue, Microsoft::AI::Skills::SkillInterface::ISkillFeatureValue, Windows::Foundation::IClosable>
{
    SkillFeatureTensorCustomValue(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SkillFeatureTensorDescriptor :
    Microsoft::AI::Skills::SkillInterface::ISkillFeatureTensorDescriptor
{
    SkillFeatureTensorDescriptor(std::nullptr_t) noexcept {}
    SkillFeatureTensorDescriptor(param::hstring const& name, param::hstring const& description, bool isRequired, param::vector_view<int32_t> const& shape, Microsoft::AI::Skills::SkillInterface::SkillElementKind const& elementKind);
};

struct WINRT_EBO SkillFeatureTensorDoubleValue :
    Microsoft::AI::Skills::SkillInterface::ISkillFeatureTensorDoubleValue,
    impl::require<SkillFeatureTensorDoubleValue, Microsoft::AI::Skills::SkillInterface::ISkillFeatureTensorValue, Microsoft::AI::Skills::SkillInterface::ISkillFeatureValue, Windows::Foundation::IClosable>
{
    SkillFeatureTensorDoubleValue(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SkillFeatureTensorFloat16Value :
    Microsoft::AI::Skills::SkillInterface::ISkillFeatureTensorFloat16Value,
    impl::require<SkillFeatureTensorFloat16Value, Microsoft::AI::Skills::SkillInterface::ISkillFeatureTensorValue, Microsoft::AI::Skills::SkillInterface::ISkillFeatureValue, Windows::Foundation::IClosable>
{
    SkillFeatureTensorFloat16Value(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SkillFeatureTensorFloatValue :
    Microsoft::AI::Skills::SkillInterface::ISkillFeatureTensorFloatValue,
    impl::require<SkillFeatureTensorFloatValue, Microsoft::AI::Skills::SkillInterface::ISkillFeatureTensorValue, Microsoft::AI::Skills::SkillInterface::ISkillFeatureValue, Windows::Foundation::IClosable>
{
    SkillFeatureTensorFloatValue(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SkillFeatureTensorInt16Value :
    Microsoft::AI::Skills::SkillInterface::ISkillFeatureTensorInt16Value,
    impl::require<SkillFeatureTensorInt16Value, Microsoft::AI::Skills::SkillInterface::ISkillFeatureTensorValue, Microsoft::AI::Skills::SkillInterface::ISkillFeatureValue, Windows::Foundation::IClosable>
{
    SkillFeatureTensorInt16Value(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SkillFeatureTensorInt64Value :
    Microsoft::AI::Skills::SkillInterface::ISkillFeatureTensorInt64Value,
    impl::require<SkillFeatureTensorInt64Value, Microsoft::AI::Skills::SkillInterface::ISkillFeatureTensorValue, Microsoft::AI::Skills::SkillInterface::ISkillFeatureValue, Windows::Foundation::IClosable>
{
    SkillFeatureTensorInt64Value(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SkillFeatureTensorIntValue :
    Microsoft::AI::Skills::SkillInterface::ISkillFeatureTensorIntValue,
    impl::require<SkillFeatureTensorIntValue, Microsoft::AI::Skills::SkillInterface::ISkillFeatureTensorValue, Microsoft::AI::Skills::SkillInterface::ISkillFeatureValue, Windows::Foundation::IClosable>
{
    SkillFeatureTensorIntValue(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SkillFeatureTensorStringValue :
    Microsoft::AI::Skills::SkillInterface::ISkillFeatureTensorStringValue,
    impl::require<SkillFeatureTensorStringValue, Microsoft::AI::Skills::SkillInterface::ISkillFeatureTensorValue, Microsoft::AI::Skills::SkillInterface::ISkillFeatureValue, Windows::Foundation::IClosable>
{
    SkillFeatureTensorStringValue(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SkillFeatureTensorUInt16Value :
    Microsoft::AI::Skills::SkillInterface::ISkillFeatureTensorUInt16Value,
    impl::require<SkillFeatureTensorUInt16Value, Microsoft::AI::Skills::SkillInterface::ISkillFeatureTensorValue, Microsoft::AI::Skills::SkillInterface::ISkillFeatureValue, Windows::Foundation::IClosable>
{
    SkillFeatureTensorUInt16Value(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SkillFeatureTensorUInt32Value :
    Microsoft::AI::Skills::SkillInterface::ISkillFeatureTensorUInt32Value,
    impl::require<SkillFeatureTensorUInt32Value, Microsoft::AI::Skills::SkillInterface::ISkillFeatureTensorValue, Microsoft::AI::Skills::SkillInterface::ISkillFeatureValue, Windows::Foundation::IClosable>
{
    SkillFeatureTensorUInt32Value(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SkillFeatureTensorUInt64Value :
    Microsoft::AI::Skills::SkillInterface::ISkillFeatureTensorUInt64Value,
    impl::require<SkillFeatureTensorUInt64Value, Microsoft::AI::Skills::SkillInterface::ISkillFeatureTensorValue, Microsoft::AI::Skills::SkillInterface::ISkillFeatureValue, Windows::Foundation::IClosable>
{
    SkillFeatureTensorUInt64Value(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SkillFeatureTensorUInt8Value :
    Microsoft::AI::Skills::SkillInterface::ISkillFeatureTensorUInt8Value,
    impl::require<SkillFeatureTensorUInt8Value, Microsoft::AI::Skills::SkillInterface::ISkillFeatureTensorValue, Microsoft::AI::Skills::SkillInterface::ISkillFeatureValue, Windows::Foundation::IClosable>
{
    SkillFeatureTensorUInt8Value(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SkillInformation :
    Microsoft::AI::Skills::SkillInterface::ISkillInformation
{
    SkillInformation(std::nullptr_t) noexcept {}
    static Microsoft::AI::Skills::SkillInterface::SkillInformation Create(param::hstring const& name, param::hstring const& description, winrt::guid const& id, Windows::ApplicationModel::PackageVersion const& version, param::hstring const& author, param::hstring const& publisher);
};

struct WINRT_EBO VisionSkillBindingHelper :
    Microsoft::AI::Skills::SkillInterface::IVisionSkillBindingHelper,
    impl::require<VisionSkillBindingHelper, Microsoft::AI::Skills::SkillInterface::IVisionSkillBindingHelperOverrides, Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Microsoft::AI::Skills::SkillInterface::ISkillFeature>>, Windows::Foundation::Collections::IMap<hstring, Microsoft::AI::Skills::SkillInterface::ISkillFeature>>
{
    VisionSkillBindingHelper(std::nullptr_t) noexcept {}
    VisionSkillBindingHelper(Microsoft::AI::Skills::SkillInterface::ISkillDescriptor const& descriptor, Microsoft::AI::Skills::SkillInterface::ISkillExecutionDevice const& device);
};

template <typename D>
class IVisionSkillBindingHelperOverridesT
{
    D& shim() noexcept { return *static_cast<D*>(this); }
    D const& shim() const noexcept { return *static_cast<const D*>(this); }

public:

    using IVisionSkillBindingHelperOverrides = winrt::Microsoft::AI::Skills::SkillInterface::IVisionSkillBindingHelperOverrides;

    Windows::Foundation::IAsyncAction SetInputImageInternalAsync(Windows::Media::VideoFrame const& videoFrame) const;
};

}
