// This code contains NVIDIA Confidential Information and is disclosed to you
// under a form of NVIDIA software license agreement provided separately to you.
//
// Notice
// NVIDIA Corporation and its licensors retain all intellectual property and
// proprietary rights in and to this software and related documentation and
// any modifications thereto. Any use, reproduction, disclosure, or
// distribution of this software and related documentation without an express
// license agreement from NVIDIA Corporation is strictly prohibited.
//
// ALL NVIDIA DESIGN SPECIFICATIONS, CODE ARE PROVIDED "AS IS.". NVIDIA MAKES
// NO WARRANTIES, EXPRESSED, IMPLIED, STATUTORY, OR OTHERWISE WITH RESPECT TO
// THE MATERIALS, AND EXPRESSLY DISCLAIMS ALL IMPLIED WARRANTIES OF NONINFRINGEMENT,
// MERCHANTABILITY, AND FITNESS FOR A PARTICULAR PURPOSE.
//
// Information and code furnished is believed to be accurate and reliable.
// However, NVIDIA Corporation assumes no responsibility for the consequences of use of such
// information or for any infringement of patents or other rights of third parties that may
// result from its use. No license is granted by implication or otherwise under any patent
// or patent rights of NVIDIA Corporation. Details are subject to change without notice.
// This code supersedes and replaces all information previously supplied.
// NVIDIA Corporation products are not authorized for use as critical
// components in life support devices or systems without express written approval of
// NVIDIA Corporation.
//
// Copyright (c) 2008-2015 NVIDIA Corporation. All rights reserved.

// This file was generated by NvParameterized/scripts/GenParameterized.pl


#include "ColorVsTemperatureModifierParams.h"
#include <string.h>
#include <stdlib.h>

using namespace NvParameterized;

namespace nvidia
{
namespace iofx
{

using namespace ColorVsTemperatureModifierParamsNS;

const char* const ColorVsTemperatureModifierParamsFactory::vptr =
    NvParameterized::getVptr<ColorVsTemperatureModifierParams, ColorVsTemperatureModifierParams::ClassAlignment>();

const uint32_t NumParamDefs = 6;
static NvParameterized::DefinitionImpl* ParamDefTable; // now allocated in buildTree [NumParamDefs];


static const size_t ParamLookupChildrenTable[] =
{
	1, 2, 3, 4, 5,
};

#define TENUM(type) nvidia::##type
#define CHILDREN(index) &ParamLookupChildrenTable[index]
static const NvParameterized::ParamLookupNode ParamLookupTable[NumParamDefs] =
{
	{ TYPE_STRUCT, false, 0, CHILDREN(0), 2 },
	{ TYPE_ENUM, false, (size_t)(&((ParametersStruct*)0)->colorChannel), NULL, 0 }, // colorChannel
	{ TYPE_ARRAY, true, (size_t)(&((ParametersStruct*)0)->controlPoints), CHILDREN(2), 1 }, // controlPoints
	{ TYPE_STRUCT, false, 1 * sizeof(vec2_Type), CHILDREN(3), 2 }, // controlPoints[]
	{ TYPE_F32, false, (size_t)(&((vec2_Type*)0)->x), NULL, 0 }, // controlPoints[].x
	{ TYPE_F32, false, (size_t)(&((vec2_Type*)0)->y), NULL, 0 }, // controlPoints[].y
};


bool ColorVsTemperatureModifierParams::mBuiltFlag = false;
NvParameterized::MutexType ColorVsTemperatureModifierParams::mBuiltFlagMutex;

ColorVsTemperatureModifierParams::ColorVsTemperatureModifierParams(NvParameterized::Traits* traits, void* buf, int32_t* refCount) :
	NvParameters(traits, buf, refCount)
{
	//mParameterizedTraits->registerFactory(className(), &ColorVsTemperatureModifierParamsFactoryInst);

	if (!buf) //Do not init data if it is inplace-deserialized
	{
		initDynamicArrays();
		initStrings();
		initReferences();
		initDefaults();
	}
}

ColorVsTemperatureModifierParams::~ColorVsTemperatureModifierParams()
{
	freeStrings();
	freeReferences();
	freeDynamicArrays();
}

void ColorVsTemperatureModifierParams::destroy()
{
	// We cache these fields here to avoid overwrite in destructor
	bool doDeallocateSelf = mDoDeallocateSelf;
	NvParameterized::Traits* traits = mParameterizedTraits;
	int32_t* refCount = mRefCount;
	void* buf = mBuffer;

	this->~ColorVsTemperatureModifierParams();

	NvParameters::destroy(this, traits, doDeallocateSelf, refCount, buf);
}

const NvParameterized::DefinitionImpl* ColorVsTemperatureModifierParams::getParameterDefinitionTree(void)
{
	if (!mBuiltFlag) // Double-checked lock
	{
		NvParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);
		if (!mBuiltFlag)
		{
			buildTree();
		}
	}

	return(&ParamDefTable[0]);
}

const NvParameterized::DefinitionImpl* ColorVsTemperatureModifierParams::getParameterDefinitionTree(void) const
{
	ColorVsTemperatureModifierParams* tmpParam = const_cast<ColorVsTemperatureModifierParams*>(this);

	if (!mBuiltFlag) // Double-checked lock
	{
		NvParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);
		if (!mBuiltFlag)
		{
			tmpParam->buildTree();
		}
	}

	return(&ParamDefTable[0]);
}

NvParameterized::ErrorType ColorVsTemperatureModifierParams::getParameterHandle(const char* long_name, Handle& handle) const
{
	ErrorType Ret = NvParameters::getParameterHandle(long_name, handle);
	if (Ret != ERROR_NONE)
	{
		return(Ret);
	}

	size_t offset;
	void* ptr;

	getVarPtr(handle, ptr, offset);

	if (ptr == NULL)
	{
		return(ERROR_INDEX_OUT_OF_RANGE);
	}

	return(ERROR_NONE);
}

NvParameterized::ErrorType ColorVsTemperatureModifierParams::getParameterHandle(const char* long_name, Handle& handle)
{
	ErrorType Ret = NvParameters::getParameterHandle(long_name, handle);
	if (Ret != ERROR_NONE)
	{
		return(Ret);
	}

	size_t offset;
	void* ptr;

	getVarPtr(handle, ptr, offset);

	if (ptr == NULL)
	{
		return(ERROR_INDEX_OUT_OF_RANGE);
	}

	return(ERROR_NONE);
}

void ColorVsTemperatureModifierParams::getVarPtr(const Handle& handle, void*& ptr, size_t& offset) const
{
	ptr = getVarPtrHelper(&ParamLookupTable[0], const_cast<ColorVsTemperatureModifierParams::ParametersStruct*>(&parameters()), handle, offset);
}


/* Dynamic Handle Indices */

void ColorVsTemperatureModifierParams::freeParameterDefinitionTable(NvParameterized::Traits* traits)
{
	if (!traits)
	{
		return;
	}

	if (!mBuiltFlag) // Double-checked lock
	{
		return;
	}

	NvParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);

	if (!mBuiltFlag)
	{
		return;
	}

	for (uint32_t i = 0; i < NumParamDefs; ++i)
	{
		ParamDefTable[i].~DefinitionImpl();
	}

	traits->free(ParamDefTable);

	mBuiltFlag = false;
}

#define PDEF_PTR(index) (&ParamDefTable[index])

void ColorVsTemperatureModifierParams::buildTree(void)
{

	uint32_t allocSize = sizeof(NvParameterized::DefinitionImpl) * NumParamDefs;
	ParamDefTable = (NvParameterized::DefinitionImpl*)(mParameterizedTraits->alloc(allocSize));
	memset(ParamDefTable, 0, allocSize);

	for (uint32_t i = 0; i < NumParamDefs; ++i)
	{
		NV_PARAM_PLACEMENT_NEW(ParamDefTable + i, NvParameterized::DefinitionImpl)(*mParameterizedTraits);
	}

	// Initialize DefinitionImpl node: nodeIndex=0, longName=""
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[0];
		ParamDef->init("", TYPE_STRUCT, "STRUCT", true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "ColorVsTemperature modifier parameters", true);
		ParamDefTable[0].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=1, longName="colorChannel"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[1];
		ParamDef->init("colorChannel", TYPE_ENUM, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("defaultValue", "alpha", true);
		ParamDefTable[1].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("defaultValue", "alpha", true);
		HintTable[1].init("shortDescription", "Color channel", true);
		ParamDefTable[1].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */

		static const char* const EnumVals[] = { "red", "green", "blue", "alpha" };
		ParamDefTable[1].setEnumVals((const char**)EnumVals, 4);




	}

	// Initialize DefinitionImpl node: nodeIndex=2, longName="controlPoints"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[2];
		ParamDef->init("controlPoints", TYPE_ARRAY, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[6];
		static Hint* HintPtrTable[6] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], &HintTable[4], &HintTable[5], };
		HintTable[0].init("CURVE_X_SCALE", uint64_t(1), true);
		HintTable[1].init("CURVE_Y_SCALE", uint64_t(2), true);
		HintTable[2].init("ColorWheel", "true", true);
		HintTable[3].init("editorCurve", uint64_t(1), true);
		HintTable[4].init("xAxisLabel", "Temperature", true);
		HintTable[5].init("yAxisLabel", "Color", true);
		ParamDefTable[2].setHints((const NvParameterized::Hint**)HintPtrTable, 6);

#else

		static HintImpl HintTable[8];
		static Hint* HintPtrTable[8] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], &HintTable[4], &HintTable[5], &HintTable[6], &HintTable[7], };
		HintTable[0].init("CURVE_X_SCALE", uint64_t(1), true);
		HintTable[1].init("CURVE_Y_SCALE", uint64_t(2), true);
		HintTable[2].init("ColorWheel", "true", true);
		HintTable[3].init("editorCurve", uint64_t(1), true);
		HintTable[4].init("longDescription", "controlPoints is a sorted list of control points for a curve. Currently, the curve is a lame\nlirp'd curve. We could add support for other curvetypes in the future, either bezier curves,\nsplines, etc.\n", true);
		HintTable[5].init("shortDescription", "Control points for a curve", true);
		HintTable[6].init("xAxisLabel", "Temperature", true);
		HintTable[7].init("yAxisLabel", "Color", true);
		ParamDefTable[2].setHints((const NvParameterized::Hint**)HintPtrTable, 8);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */




		ParamDef->setArraySize(-1);
	}

	// Initialize DefinitionImpl node: nodeIndex=3, longName="controlPoints[]"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[3];
		ParamDef->init("controlPoints", TYPE_STRUCT, "vec2", true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[6];
		static Hint* HintPtrTable[6] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], &HintTable[4], &HintTable[5], };
		HintTable[0].init("CURVE_X_SCALE", uint64_t(1), true);
		HintTable[1].init("CURVE_Y_SCALE", uint64_t(2), true);
		HintTable[2].init("ColorWheel", "true", true);
		HintTable[3].init("editorCurve", uint64_t(1), true);
		HintTable[4].init("xAxisLabel", "Temperature", true);
		HintTable[5].init("yAxisLabel", "Color", true);
		ParamDefTable[3].setHints((const NvParameterized::Hint**)HintPtrTable, 6);

#else

		static HintImpl HintTable[8];
		static Hint* HintPtrTable[8] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], &HintTable[4], &HintTable[5], &HintTable[6], &HintTable[7], };
		HintTable[0].init("CURVE_X_SCALE", uint64_t(1), true);
		HintTable[1].init("CURVE_Y_SCALE", uint64_t(2), true);
		HintTable[2].init("ColorWheel", "true", true);
		HintTable[3].init("editorCurve", uint64_t(1), true);
		HintTable[4].init("longDescription", "controlPoints is a sorted list of control points for a curve. Currently, the curve is a lame\nlirp'd curve. We could add support for other curvetypes in the future, either bezier curves,\nsplines, etc.\n", true);
		HintTable[5].init("shortDescription", "Control points for a curve", true);
		HintTable[6].init("xAxisLabel", "Temperature", true);
		HintTable[7].init("yAxisLabel", "Color", true);
		ParamDefTable[3].setHints((const NvParameterized::Hint**)HintPtrTable, 8);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=4, longName="controlPoints[].x"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[4];
		ParamDef->init("x", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Temperature", true);
		ParamDefTable[4].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=5, longName="controlPoints[].y"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[5];
		ParamDef->init("y", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Color", true);
		ParamDefTable[5].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// SetChildren for: nodeIndex=0, longName=""
	{
		static Definition* Children[2];
		Children[0] = PDEF_PTR(1);
		Children[1] = PDEF_PTR(2);

		ParamDefTable[0].setChildren(Children, 2);
	}

	// SetChildren for: nodeIndex=2, longName="controlPoints"
	{
		static Definition* Children[1];
		Children[0] = PDEF_PTR(3);

		ParamDefTable[2].setChildren(Children, 1);
	}

	// SetChildren for: nodeIndex=3, longName="controlPoints[]"
	{
		static Definition* Children[2];
		Children[0] = PDEF_PTR(4);
		Children[1] = PDEF_PTR(5);

		ParamDefTable[3].setChildren(Children, 2);
	}

	mBuiltFlag = true;

}
void ColorVsTemperatureModifierParams::initStrings(void)
{
}

void ColorVsTemperatureModifierParams::initDynamicArrays(void)
{
	controlPoints.buf = NULL;
	controlPoints.isAllocated = true;
	controlPoints.elementSize = sizeof(vec2_Type);
	controlPoints.arraySizes[0] = 0;
}

void ColorVsTemperatureModifierParams::initDefaults(void)
{

	freeStrings();
	freeReferences();
	freeDynamicArrays();
	colorChannel = (const char*)"alpha";

	initDynamicArrays();
	initStrings();
	initReferences();
}

void ColorVsTemperatureModifierParams::initReferences(void)
{
}

void ColorVsTemperatureModifierParams::freeDynamicArrays(void)
{
	if (controlPoints.isAllocated && controlPoints.buf)
	{
		mParameterizedTraits->free(controlPoints.buf);
	}
}

void ColorVsTemperatureModifierParams::freeStrings(void)
{
}

void ColorVsTemperatureModifierParams::freeReferences(void)
{
}

} // namespace iofx
} // namespace nvidia
