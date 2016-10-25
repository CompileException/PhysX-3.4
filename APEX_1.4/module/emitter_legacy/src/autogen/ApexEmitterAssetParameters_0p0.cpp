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


#include "ApexEmitterAssetParameters_0p0.h"
#include <string.h>
#include <stdlib.h>

using namespace NvParameterized;

namespace nvidia
{
namespace parameterized
{

using namespace ApexEmitterAssetParameters_0p0NS;

const char* const ApexEmitterAssetParameters_0p0Factory::vptr =
    NvParameterized::getVptr<ApexEmitterAssetParameters_0p0, ApexEmitterAssetParameters_0p0::ClassAlignment>();

const uint32_t NumParamDefs = 25;
static NvParameterized::DefinitionImpl* ParamDefTable; // now allocated in buildTree [NumParamDefs];


static const size_t ParamLookupChildrenTable[] =
{
	1, 4, 7, 10, 13, 14, 22, 23, 24, 2, 3, 5, 6, 8, 9, 11, 12, 15, 16, 17, 18, 19, 20,
	21,
};

#define TENUM(type) nvidia::##type
#define CHILDREN(index) &ParamLookupChildrenTable[index]
static const NvParameterized::ParamLookupNode ParamLookupTable[NumParamDefs] =
{
	{ TYPE_STRUCT, false, 0, CHILDREN(0), 9 },
	{ TYPE_STRUCT, false, (size_t)(&((ParametersStruct*)0)->densityRange), CHILDREN(9), 2 }, // densityRange
	{ TYPE_F32, false, (size_t)(&((rangeStructF32_Type*)0)->min), NULL, 0 }, // densityRange.min
	{ TYPE_F32, false, (size_t)(&((rangeStructF32_Type*)0)->max), NULL, 0 }, // densityRange.max
	{ TYPE_STRUCT, false, (size_t)(&((ParametersStruct*)0)->rateRange), CHILDREN(11), 2 }, // rateRange
	{ TYPE_F32, false, (size_t)(&((rangeStructF32_Type*)0)->min), NULL, 0 }, // rateRange.min
	{ TYPE_F32, false, (size_t)(&((rangeStructF32_Type*)0)->max), NULL, 0 }, // rateRange.max
	{ TYPE_STRUCT, false, (size_t)(&((ParametersStruct*)0)->lifetimeRange), CHILDREN(13), 2 }, // lifetimeRange
	{ TYPE_F32, false, (size_t)(&((rangeStructF32_Type*)0)->min), NULL, 0 }, // lifetimeRange.min
	{ TYPE_F32, false, (size_t)(&((rangeStructF32_Type*)0)->max), NULL, 0 }, // lifetimeRange.max
	{ TYPE_STRUCT, false, (size_t)(&((ParametersStruct*)0)->velocityRange), CHILDREN(15), 2 }, // velocityRange
	{ TYPE_VEC3, false, (size_t)(&((rangeStructVec3_Type*)0)->min), NULL, 0 }, // velocityRange.min
	{ TYPE_VEC3, false, (size_t)(&((rangeStructVec3_Type*)0)->max), NULL, 0 }, // velocityRange.max
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->maxSamples), NULL, 0 }, // maxSamples
	{ TYPE_STRUCT, false, (size_t)(&((ParametersStruct*)0)->lodParamDesc), CHILDREN(17), 7 }, // lodParamDesc
	{ TYPE_U32, false, (size_t)(&((emitterLodParamDesc_Type*)0)->version), NULL, 0 }, // lodParamDesc.version
	{ TYPE_F32, false, (size_t)(&((emitterLodParamDesc_Type*)0)->maxDistance), NULL, 0 }, // lodParamDesc.maxDistance
	{ TYPE_F32, false, (size_t)(&((emitterLodParamDesc_Type*)0)->distanceWeight), NULL, 0 }, // lodParamDesc.distanceWeight
	{ TYPE_F32, false, (size_t)(&((emitterLodParamDesc_Type*)0)->speedWeight), NULL, 0 }, // lodParamDesc.speedWeight
	{ TYPE_F32, false, (size_t)(&((emitterLodParamDesc_Type*)0)->lifeWeight), NULL, 0 }, // lodParamDesc.lifeWeight
	{ TYPE_F32, false, (size_t)(&((emitterLodParamDesc_Type*)0)->separationWeight), NULL, 0 }, // lodParamDesc.separationWeight
	{ TYPE_F32, false, (size_t)(&((emitterLodParamDesc_Type*)0)->bias), NULL, 0 }, // lodParamDesc.bias
	{ TYPE_REF, false, (size_t)(&((ParametersStruct*)0)->iofxAssetName), NULL, 0 }, // iofxAssetName
	{ TYPE_REF, false, (size_t)(&((ParametersStruct*)0)->iosAssetName), NULL, 0 }, // iosAssetName
	{ TYPE_REF, false, (size_t)(&((ParametersStruct*)0)->geometryType), NULL, 0 }, // geometryType
};


bool ApexEmitterAssetParameters_0p0::mBuiltFlag = false;
NvParameterized::MutexType ApexEmitterAssetParameters_0p0::mBuiltFlagMutex;

ApexEmitterAssetParameters_0p0::ApexEmitterAssetParameters_0p0(NvParameterized::Traits* traits, void* buf, int32_t* refCount) :
	NvParameters(traits, buf, refCount)
{
	//mParameterizedTraits->registerFactory(className(), &ApexEmitterAssetParameters_0p0FactoryInst);

	if (!buf) //Do not init data if it is inplace-deserialized
	{
		initDynamicArrays();
		initStrings();
		initReferences();
		initDefaults();
	}
}

ApexEmitterAssetParameters_0p0::~ApexEmitterAssetParameters_0p0()
{
	freeStrings();
	freeReferences();
	freeDynamicArrays();
}

void ApexEmitterAssetParameters_0p0::destroy()
{
	// We cache these fields here to avoid overwrite in destructor
	bool doDeallocateSelf = mDoDeallocateSelf;
	NvParameterized::Traits* traits = mParameterizedTraits;
	int32_t* refCount = mRefCount;
	void* buf = mBuffer;

	this->~ApexEmitterAssetParameters_0p0();

	NvParameters::destroy(this, traits, doDeallocateSelf, refCount, buf);
}

const NvParameterized::DefinitionImpl* ApexEmitterAssetParameters_0p0::getParameterDefinitionTree(void)
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

const NvParameterized::DefinitionImpl* ApexEmitterAssetParameters_0p0::getParameterDefinitionTree(void) const
{
	ApexEmitterAssetParameters_0p0* tmpParam = const_cast<ApexEmitterAssetParameters_0p0*>(this);

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

NvParameterized::ErrorType ApexEmitterAssetParameters_0p0::getParameterHandle(const char* long_name, Handle& handle) const
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

NvParameterized::ErrorType ApexEmitterAssetParameters_0p0::getParameterHandle(const char* long_name, Handle& handle)
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

void ApexEmitterAssetParameters_0p0::getVarPtr(const Handle& handle, void*& ptr, size_t& offset) const
{
	ptr = getVarPtrHelper(&ParamLookupTable[0], const_cast<ApexEmitterAssetParameters_0p0::ParametersStruct*>(&parameters()), handle, offset);
}


/* Dynamic Handle Indices */

void ApexEmitterAssetParameters_0p0::freeParameterDefinitionTable(NvParameterized::Traits* traits)
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

void ApexEmitterAssetParameters_0p0::buildTree(void)
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

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "This class contains the parameters for the APEX Emitter asset.  The APEX Emitter is sometimes described\nas a shaped APEX Emitter because it contains the box, sphere, and sphere shell shapes.  It also\nincludes an explicit shape that allows for preauthored particles positions and velocities and runtime\nparticle injections.\n", true);
		HintTable[1].init("shortDescription", "APEX Emitter Asset Parameters", true);
		ParamDefTable[0].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=1, longName="densityRange"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[1];
		ParamDef->init("densityRange", TYPE_STRUCT, "rangeStructF32", true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "For an explicit emitter, the density is actually a spawn probability.  For the shaped emitters, it represents the density of the particles per unit volume.\n", true);
		HintTable[1].init("shortDescription", "Density Range", true);
		ParamDefTable[1].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=2, longName="densityRange.min"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[2];
		ParamDef->init("min", TYPE_F32, NULL, true);






	}

	// Initialize DefinitionImpl node: nodeIndex=3, longName="densityRange.max"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[3];
		ParamDef->init("max", TYPE_F32, NULL, true);






	}

	// Initialize DefinitionImpl node: nodeIndex=4, longName="rateRange"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[4];
		ParamDef->init("rateRange", TYPE_STRUCT, "rangeStructF32", true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "The emitter actor will use the maximum rate in the range if it is a rate-based shape, but it will back off to the minimum density if the actor is LOD resource limited.\n", true);
		HintTable[1].init("shortDescription", "Rate Range", true);
		ParamDefTable[4].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=5, longName="rateRange.min"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[5];
		ParamDef->init("min", TYPE_F32, NULL, true);






	}

	// Initialize DefinitionImpl node: nodeIndex=6, longName="rateRange.max"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[6];
		ParamDef->init("max", TYPE_F32, NULL, true);






	}

	// Initialize DefinitionImpl node: nodeIndex=7, longName="lifetimeRange"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[7];
		ParamDef->init("lifetimeRange", TYPE_STRUCT, "rangeStructF32", true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "The emitter actor will create objects with a random lifetime (in seconds) within the lifetime range.\n", true);
		HintTable[1].init("shortDescription", "Lifetime Range", true);
		ParamDefTable[7].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=8, longName="lifetimeRange.min"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[8];
		ParamDef->init("min", TYPE_F32, NULL, true);






	}

	// Initialize DefinitionImpl node: nodeIndex=9, longName="lifetimeRange.max"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[9];
		ParamDef->init("max", TYPE_F32, NULL, true);






	}

	// Initialize DefinitionImpl node: nodeIndex=10, longName="velocityRange"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[10];
		ParamDef->init("velocityRange", TYPE_STRUCT, "rangeStructVec3", true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "The emitter actor will create objects with a random velocity within the velocity range.\n", true);
		HintTable[1].init("shortDescription", "Velocity Range", true);
		ParamDefTable[10].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=11, longName="velocityRange.min"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[11];
		ParamDef->init("min", TYPE_VEC3, NULL, true);






	}

	// Initialize DefinitionImpl node: nodeIndex=12, longName="velocityRange.max"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[12];
		ParamDef->init("max", TYPE_VEC3, NULL, true);






	}

	// Initialize DefinitionImpl node: nodeIndex=13, longName="maxSamples"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[13];
		ParamDef->init("maxSamples", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		ParamDefTable[13].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		HintTable[1].init("longDescription", "For an explicit emitter, Max Samples is ignored.  For shaped emitters, it is the maximum number of objects spawned in a step.\n", true);
		HintTable[2].init("shortDescription", "Maximum Samples", true);
		ParamDefTable[13].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=14, longName="lodParamDesc"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[14];
		ParamDef->init("lodParamDesc", TYPE_STRUCT, "emitterLodParamDesc", true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("tweakable", "true", true);
		ParamDefTable[14].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("tweakable", "true", true);
		ParamDefTable[14].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=15, longName="lodParamDesc.version"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[15];
		ParamDef->init("version", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		ParamDefTable[15].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		ParamDefTable[15].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=16, longName="lodParamDesc.maxDistance"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[16];
		ParamDef->init("maxDistance", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		HintTable[1].init("min", uint64_t(0), true);
		ParamDefTable[16].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		HintTable[1].init("min", uint64_t(0), true);
		HintTable[2].init("shortDescription", "Objects greater than this distance from the player will be culled more aggressively", true);
		ParamDefTable[16].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=17, longName="lodParamDesc.distanceWeight"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[17];
		ParamDef->init("distanceWeight", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("defaultValue", uint64_t(1), true);
		HintTable[1].init("max", uint64_t(1), true);
		HintTable[2].init("min", uint64_t(0), true);
		ParamDefTable[17].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#else

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("defaultValue", uint64_t(1), true);
		HintTable[1].init("max", uint64_t(1), true);
		HintTable[2].init("min", uint64_t(0), true);
		HintTable[3].init("shortDescription", "Weight given to distance parameter in LOD function", true);
		ParamDefTable[17].setHints((const NvParameterized::Hint**)HintPtrTable, 4);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=18, longName="lodParamDesc.speedWeight"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[18];
		ParamDef->init("speedWeight", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		HintTable[1].init("max", uint64_t(1), true);
		HintTable[2].init("min", uint64_t(0), true);
		ParamDefTable[18].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#else

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		HintTable[1].init("max", uint64_t(1), true);
		HintTable[2].init("min", uint64_t(0), true);
		HintTable[3].init("shortDescription", "Weight given to velocity parameter in LOD function", true);
		ParamDefTable[18].setHints((const NvParameterized::Hint**)HintPtrTable, 4);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=19, longName="lodParamDesc.lifeWeight"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[19];
		ParamDef->init("lifeWeight", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		HintTable[1].init("max", uint64_t(1), true);
		HintTable[2].init("min", uint64_t(0), true);
		ParamDefTable[19].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#else

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		HintTable[1].init("max", uint64_t(1), true);
		HintTable[2].init("min", uint64_t(0), true);
		HintTable[3].init("shortDescription", "Weight given to life remain parameter in LOD function", true);
		ParamDefTable[19].setHints((const NvParameterized::Hint**)HintPtrTable, 4);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=20, longName="lodParamDesc.separationWeight"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[20];
		ParamDef->init("separationWeight", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		HintTable[1].init("max", uint64_t(1), true);
		HintTable[2].init("min", uint64_t(0), true);
		ParamDefTable[20].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#else

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		HintTable[1].init("max", uint64_t(1), true);
		HintTable[2].init("min", uint64_t(0), true);
		HintTable[3].init("shortDescription", "Weight given to separation parameter in LOD function", true);
		ParamDefTable[20].setHints((const NvParameterized::Hint**)HintPtrTable, 4);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=21, longName="lodParamDesc.bias"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[21];
		ParamDef->init("bias", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("defaultValue", uint64_t(1), true);
		HintTable[1].init("min", uint64_t(0), true);
		ParamDefTable[21].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("defaultValue", uint64_t(1), true);
		HintTable[1].init("min", uint64_t(0), true);
		HintTable[2].init("shortDescription", "Bias given to objects spawned by this emitter, relative to other emitters in the same IOS", true);
		ParamDefTable[21].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=22, longName="iofxAssetName"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[22];
		ParamDef->init("iofxAssetName", TYPE_REF, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The name of the instanced object effects asset that will render particles", true);
		ParamDefTable[22].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */


		static const char* const RefVariantVals[] = { "IOFX" };
		ParamDefTable[22].setRefVariantVals((const char**)RefVariantVals, 1);



	}

	// Initialize DefinitionImpl node: nodeIndex=23, longName="iosAssetName"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[23];
		ParamDef->init("iosAssetName", TYPE_REF, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The asset name of the IOS and the type of IOS that will simulate particles", true);
		ParamDefTable[23].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */


		static const char* const RefVariantVals[] = { "NxFluidIosAsset", "NxBasicIosAsset" };
		ParamDefTable[23].setRefVariantVals((const char**)RefVariantVals, 2);



	}

	// Initialize DefinitionImpl node: nodeIndex=24, longName="geometryType"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[24];
		ParamDef->init("geometryType", TYPE_REF, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("INCLUDED", uint64_t(1), true);
		ParamDefTable[24].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("INCLUDED", uint64_t(1), true);
		HintTable[1].init("longDescription", "Specifies the geometry type of the emitter", true);
		HintTable[2].init("shortDescription", "Geometry Type", true);
		ParamDefTable[24].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */


		static const char* const RefVariantVals[] = { "EmitterGeomBoxParams", "EmitterGeomSphereParams", "EmitterGeomSphereShellParams", "EmitterGeomCylinderParams", "EmitterGeomExplicitParams" };
		ParamDefTable[24].setRefVariantVals((const char**)RefVariantVals, 5);



	}

	// SetChildren for: nodeIndex=0, longName=""
	{
		static Definition* Children[9];
		Children[0] = PDEF_PTR(1);
		Children[1] = PDEF_PTR(4);
		Children[2] = PDEF_PTR(7);
		Children[3] = PDEF_PTR(10);
		Children[4] = PDEF_PTR(13);
		Children[5] = PDEF_PTR(14);
		Children[6] = PDEF_PTR(22);
		Children[7] = PDEF_PTR(23);
		Children[8] = PDEF_PTR(24);

		ParamDefTable[0].setChildren(Children, 9);
	}

	// SetChildren for: nodeIndex=1, longName="densityRange"
	{
		static Definition* Children[2];
		Children[0] = PDEF_PTR(2);
		Children[1] = PDEF_PTR(3);

		ParamDefTable[1].setChildren(Children, 2);
	}

	// SetChildren for: nodeIndex=4, longName="rateRange"
	{
		static Definition* Children[2];
		Children[0] = PDEF_PTR(5);
		Children[1] = PDEF_PTR(6);

		ParamDefTable[4].setChildren(Children, 2);
	}

	// SetChildren for: nodeIndex=7, longName="lifetimeRange"
	{
		static Definition* Children[2];
		Children[0] = PDEF_PTR(8);
		Children[1] = PDEF_PTR(9);

		ParamDefTable[7].setChildren(Children, 2);
	}

	// SetChildren for: nodeIndex=10, longName="velocityRange"
	{
		static Definition* Children[2];
		Children[0] = PDEF_PTR(11);
		Children[1] = PDEF_PTR(12);

		ParamDefTable[10].setChildren(Children, 2);
	}

	// SetChildren for: nodeIndex=14, longName="lodParamDesc"
	{
		static Definition* Children[7];
		Children[0] = PDEF_PTR(15);
		Children[1] = PDEF_PTR(16);
		Children[2] = PDEF_PTR(17);
		Children[3] = PDEF_PTR(18);
		Children[4] = PDEF_PTR(19);
		Children[5] = PDEF_PTR(20);
		Children[6] = PDEF_PTR(21);

		ParamDefTable[14].setChildren(Children, 7);
	}

	mBuiltFlag = true;

}
void ApexEmitterAssetParameters_0p0::initStrings(void)
{
}

void ApexEmitterAssetParameters_0p0::initDynamicArrays(void)
{
}

void ApexEmitterAssetParameters_0p0::initDefaults(void)
{

	freeStrings();
	freeReferences();
	freeDynamicArrays();

	densityRange.min = 1.0f;
	densityRange.max = 1.0f;


	rateRange.min = 1.0f;
	rateRange.max = 1.0f;


	lifetimeRange.min = 1.0f;
	lifetimeRange.max = 1.0f;


	velocityRange.max.y = 0.0f;
	velocityRange.min.x = 0.0f;
	velocityRange.min.y = 0.0f;
	velocityRange.max.z = 0.0f;
	velocityRange.max.x = 0.0f;
	velocityRange.min.z = 0.0f;

	maxSamples = uint32_t(0.0f);
	lodParamDesc.version = uint32_t(0);
	lodParamDesc.maxDistance = float(0);
	lodParamDesc.distanceWeight = float(1);
	lodParamDesc.speedWeight = float(0);
	lodParamDesc.lifeWeight = float(0);
	lodParamDesc.separationWeight = float(0);
	lodParamDesc.bias = float(1);

	initDynamicArrays();
	initStrings();
	initReferences();
}

void ApexEmitterAssetParameters_0p0::initReferences(void)
{
	iofxAssetName = NULL;

	iosAssetName = NULL;

	geometryType = NULL;

}

void ApexEmitterAssetParameters_0p0::freeDynamicArrays(void)
{
}

void ApexEmitterAssetParameters_0p0::freeStrings(void)
{
}

void ApexEmitterAssetParameters_0p0::freeReferences(void)
{
	if (iofxAssetName)
	{
		iofxAssetName->destroy();
	}

	if (iosAssetName)
	{
		iosAssetName->destroy();
	}

	if (geometryType)
	{
		geometryType->destroy();
	}

}

} // namespace parameterized
} // namespace nvidia
