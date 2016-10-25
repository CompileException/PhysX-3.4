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


#include "EmitterGeomSphereParams.h"
#include <string.h>
#include <stdlib.h>

using namespace NvParameterized;

namespace nvidia
{
namespace emitter
{

using namespace EmitterGeomSphereParamsNS;

const char* const EmitterGeomSphereParamsFactory::vptr =
    NvParameterized::getVptr<EmitterGeomSphereParams, EmitterGeomSphereParams::ClassAlignment>();

const uint32_t NumParamDefs = 4;
static NvParameterized::DefinitionImpl* ParamDefTable; // now allocated in buildTree [NumParamDefs];


static const size_t ParamLookupChildrenTable[] =
{
	1, 2, 3,
};

#define TENUM(type) nvidia::##type
#define CHILDREN(index) &ParamLookupChildrenTable[index]
static const NvParameterized::ParamLookupNode ParamLookupTable[NumParamDefs] =
{
	{ TYPE_STRUCT, false, 0, CHILDREN(0), 3 },
	{ TYPE_ENUM, false, (size_t)(&((ParametersStruct*)0)->emitterType), NULL, 0 }, // emitterType
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->radius), NULL, 0 }, // radius
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->hemisphere), NULL, 0 }, // hemisphere
};


bool EmitterGeomSphereParams::mBuiltFlag = false;
NvParameterized::MutexType EmitterGeomSphereParams::mBuiltFlagMutex;

EmitterGeomSphereParams::EmitterGeomSphereParams(NvParameterized::Traits* traits, void* buf, int32_t* refCount) :
	NvParameters(traits, buf, refCount)
{
	//mParameterizedTraits->registerFactory(className(), &EmitterGeomSphereParamsFactoryInst);

	if (!buf) //Do not init data if it is inplace-deserialized
	{
		initDynamicArrays();
		initStrings();
		initReferences();
		initDefaults();
	}
}

EmitterGeomSphereParams::~EmitterGeomSphereParams()
{
	freeStrings();
	freeReferences();
	freeDynamicArrays();
}

void EmitterGeomSphereParams::destroy()
{
	// We cache these fields here to avoid overwrite in destructor
	bool doDeallocateSelf = mDoDeallocateSelf;
	NvParameterized::Traits* traits = mParameterizedTraits;
	int32_t* refCount = mRefCount;
	void* buf = mBuffer;

	this->~EmitterGeomSphereParams();

	NvParameters::destroy(this, traits, doDeallocateSelf, refCount, buf);
}

const NvParameterized::DefinitionImpl* EmitterGeomSphereParams::getParameterDefinitionTree(void)
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

const NvParameterized::DefinitionImpl* EmitterGeomSphereParams::getParameterDefinitionTree(void) const
{
	EmitterGeomSphereParams* tmpParam = const_cast<EmitterGeomSphereParams*>(this);

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

NvParameterized::ErrorType EmitterGeomSphereParams::getParameterHandle(const char* long_name, Handle& handle) const
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

NvParameterized::ErrorType EmitterGeomSphereParams::getParameterHandle(const char* long_name, Handle& handle)
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

void EmitterGeomSphereParams::getVarPtr(const Handle& handle, void*& ptr, size_t& offset) const
{
	ptr = getVarPtrHelper(&ParamLookupTable[0], const_cast<EmitterGeomSphereParams::ParametersStruct*>(&parameters()), handle, offset);
}


/* Dynamic Handle Indices */

void EmitterGeomSphereParams::freeParameterDefinitionTable(NvParameterized::Traits* traits)
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

void EmitterGeomSphereParams::buildTree(void)
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






	}

	// Initialize DefinitionImpl node: nodeIndex=1, longName="emitterType"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[1];
		ParamDef->init("emitterType", TYPE_ENUM, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("defaultValue", "rate", true);
		ParamDefTable[1].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("defaultValue", "rate", true);
		HintTable[1].init("longDescription", "rate - The emitter will emit at the rate specified by the asset's rateRange\\n\ndensityOnce - The emitter will fill the geometry according to the asset's densityRange\\n\ndensityBrush - As the emitter moves, the emitter will fill the volume that is not already covered by the previous position\\n\nfill - The emitter will fill the volume with particles based on the particle size\\n\n", true);
		HintTable[2].init("shortDescription", "Emitter Type", true);
		ParamDefTable[1].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */

		static const char* const EnumVals[] = { "rate", "densityOnce", "densityBrush", "fill" };
		ParamDefTable[1].setEnumVals((const char**)EnumVals, 4);




	}

	// Initialize DefinitionImpl node: nodeIndex=2, longName="radius"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[2];
		ParamDef->init("radius", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("defaultValue", uint64_t(1), true);
		HintTable[1].init("gameScale", "true", true);
		HintTable[2].init("min", uint64_t(0), true);
		ParamDefTable[2].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#else

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("defaultValue", uint64_t(1), true);
		HintTable[1].init("gameScale", "true", true);
		HintTable[2].init("min", uint64_t(0), true);
		HintTable[3].init("shortDescription", "Sphere Radius", true);
		ParamDefTable[2].setHints((const NvParameterized::Hint**)HintPtrTable, 4);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=3, longName="hemisphere"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[3];
		ParamDef->init("hemisphere", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		HintTable[1].init("gameScale", "false", true);
		HintTable[2].init("max", uint64_t(1), true);
		HintTable[3].init("min", uint64_t(0), true);
		ParamDefTable[3].setHints((const NvParameterized::Hint**)HintPtrTable, 4);

#else

		static HintImpl HintTable[5];
		static Hint* HintPtrTable[5] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], &HintTable[4], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		HintTable[1].init("gameScale", "false", true);
		HintTable[2].init("max", uint64_t(1), true);
		HintTable[3].init("min", uint64_t(0), true);
		HintTable[4].init("shortDescription", "Sphere Hemisphere", true);
		ParamDefTable[3].setHints((const NvParameterized::Hint**)HintPtrTable, 5);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// SetChildren for: nodeIndex=0, longName=""
	{
		static Definition* Children[3];
		Children[0] = PDEF_PTR(1);
		Children[1] = PDEF_PTR(2);
		Children[2] = PDEF_PTR(3);

		ParamDefTable[0].setChildren(Children, 3);
	}

	mBuiltFlag = true;

}
void EmitterGeomSphereParams::initStrings(void)
{
}

void EmitterGeomSphereParams::initDynamicArrays(void)
{
}

void EmitterGeomSphereParams::initDefaults(void)
{

	freeStrings();
	freeReferences();
	freeDynamicArrays();
	emitterType = (const char*)"rate";
	radius = float(1.0f);
	hemisphere = float(0.0f);

	initDynamicArrays();
	initStrings();
	initReferences();
}

void EmitterGeomSphereParams::initReferences(void)
{
}

void EmitterGeomSphereParams::freeDynamicArrays(void)
{
}

void EmitterGeomSphereParams::freeStrings(void)
{
}

void EmitterGeomSphereParams::freeReferences(void)
{
}

} // namespace emitter
} // namespace nvidia
