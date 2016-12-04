#include <render\IDevice.h>
#ifdef _WINDOWS
	#include <render\D3D11\D3D11Device.h>
#endif // _WINDOWS

namespace render
{
	IDevice::~IDevice()
	{

	}

	IDevice* createDevice(CCreationParams& params)
	{
		IDevice* device = NULL;
		if (params.deviceType == DT_DX11)
		{
			device = new D3D11Device;
		}
		if (device)
		{
			if (!device->initDevice(params))
			{
				device->release();
				device = NULL;
			}
		}
		return device;
	}
}