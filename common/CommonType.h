#pragma once

#define SafeRelease(x) {if(x){x->Release();x=NULL;}}
#define SafeDelete(x) {if(x){delete x;x=NULL;}}

namespace render
{
	enum E_SHADER_TYPE { EST_SIMPLE, };




	enum DeviceType { DT_DX11, };
	enum E_VERTEX_TYPE { EVT_STANDARD, EVT_SIMPLE };
	enum E_PRIMITIVE_TYPE { EPT_TRIANGLES, };
	enum E_INDEX_TYPE { EIT_16BIT, };
	enum E_GIFORMAT_TYPE { GI_FORMAT_R32G32B32_FLOAT, GI_FORMAT_R32G32_FLOAT, GI_FORMAT_R32G32B32A32_FLOAT};
	enum E_BIND_FLAG {EBF_CONSTANT_BUFFER};
	enum E_CPU_FLAG {ECF_WRITE};
}