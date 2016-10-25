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


#include "ApexEmitterAssetParameters_0p7.h"
#include <string.h>
#include <stdlib.h>

using namespace NvParameterized;

namespace nvidia
{
namespace parameterized
{

using namespace ApexEmitterAssetParameters_0p7NS;

const char* const ApexEmitterAssetParameters_0p7Factory::vptr =
    NvParameterized::getVptr<ApexEmitterAssetParameters_0p7, ApexEmitterAssetParameters_0p7::ClassAlignment>();

const uint32_t NumParamDefs = 26;
static NvParameterized::DefinitionImpl* ParamDefTable; // now allocated in buildTree [NumParamDefs];


static const size_t ParamLookupChildrenTable[] =
{
	1, 2, 3, 4, 5, 6, 7, 8, 16, 17, 18, 19, 20, 21, 22, 9, 10, 11, 12, 13, 14, 15, 23,
	24, 25,
};

#define TENUM(type) nvidia::##type
#define CHILDREN(index) &ParamLookupChildrenTable[index]
static const NvParameterized::ParamLookupNode ParamLookupTable[NumParamDefs] =
{
	{ TYPE_STRUCT, false, 0, CHILDREN(0), 15 },
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->density), NULL, 0 }, // density
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->rate), NULL, 0 }, // rate
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->lifetimeLow), NULL, 0 }, // lifetimeLow
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->lifetimeHigh), NULL, 0 }, // lifetimeHigh
	{ TYPE_VEC3, false, (size_t)(&((ParametersStruct*)0)->velocityLow), NULL, 0 }, // velocityLow
	{ TYPE_VEC3, false, (size_t)(&((ParametersStruct*)0)->velocityHigh), NULL, 0 }, // velocityHigh
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->maxSamples), NULL, 0 }, // maxSamples
	{ TYPE_STRUCT, false, (size_t)(&((ParametersStruct*)0)->lodParamDesc), CHILDREN(15), 7 }, // lodParamDesc
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
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->emitterDuration), NULL, 0 }, // emitterDuration
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->emitterVelocityScale), NULL, 0 }, // emitterVelocityScale
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->minSamplingFPS), NULL, 0 }, // minSamplingFPS
	{ TYPE_ARRAY, true, (size_t)(&((ParametersStruct*)0)->rateVsTimeCurvePoints), CHILDREN(22), 1 }, // rateVsTimeCurvePoints
	{ TYPE_STRUCT, false, 1 * sizeof(rateVsTimeCurvePoint_Type), CHILDREN(23), 2 }, // rateVsTimeCurvePoints[]
	{ TYPE_F32, false, (size_t)(&((rateVsTimeCurvePoint_Type*)0)->x), NULL, 0 }, // rateVsTimeCurvePoints[].x
	{ TYPE_F32, false, (size_t)(&((rateVsTimeCurvePoint_Type*)0)->y), NULL, 0 }, // rateVsTimeCurvePoints[].y
};


bool ApexEmitterAssetParameters_0p7::mBuiltFlag = false;
NvParameterized::MutexType ApexEmitterAssetParameters_0p7::mBuiltFlagMutex;

ApexEmitterAssetParameters_0p7::ApexEmitterAssetParameters_0p7(NvParameterized::Traits* traits, void* buf, int32_t* refCount) :
	NvParameters(traits, buf, refCount)
{
	//mParameterizedTraits->registerFactory(className(), &ApexEmitterAssetParameters_0p7FactoryInst);

	if (!buf) //Do not init data if it is inplace-deserialized
	{
		initDynamicArrays();
		initStrings();
		initReferences();
		initDefaults();
	}
}

ApexEmitterAssetParameters_0p7::~ApexEmitterAssetParameters_0p7()
{
	freeStrings();
	freeReferences();
	freeDynamicArrays();
}

void ApexEmitterAssetParameters_0p7::destroy()
{
	// We cache these fields here to avoid overwrite in destructor
	bool doDeallocateSelf = mDoDeallocateSelf;
	NvParameterized::Traits* traits = mParameterizedTraits;
	int32_t* refCount = mRefCount;
	void* buf = mBuffer;

	this->~ApexEmitterAssetParameters_0p7();

	NvParameters::destroy(this, traits, doDeallocateSelf, refCount, buf);
}

const NvParameterized::DefinitionImpl* ApexEmitterAssetParameters_0p7::getParameterDefinitionTree(void)
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

const NvParameterized::DefinitionImpl* ApexEmitterAssetParameters_0p7::getParameterDefinitionTree(void) const
{
	ApexEmitterAssetParameters_0p7* tmpParam = const_cast<ApexEmitterAssetParameters_0p7*>(this);

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

NvParameterized::ErrorType ApexEmitterAssetParameters_0p7::getParameterHandle(const char* long_name, Handle& handle) const
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

NvParameterized::ErrorType ApexEmitterAssetParameters_0p7::getParameterHandle(const char* long_name, Handle& handle)
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

void ApexEmitterAssetParameters_0p7::getVarPtr(const Handle& handle, void*& ptr, size_t& offset) const
{
	ptr = getVarPtrHelper(&ParamLookupTable[0], const_cast<ApexEmitterAssetParameters_0p7::ParametersStruct*>(&parameters()), handle, offset);
}


/* Dynamic Handle Indices */

void ApexEmitterAssetParameters_0p7::freeParameterDefinitionTable(NvParameterized::Traits* traits)
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

void ApexEmitterAssetParameters_0p7::buildTree(void)
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

	// Initialize DefinitionImpl node: nodeIndex=1, longName="density"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[1];
		ParamDef->init("density", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("tweakable", "true", true);
		ParamDefTable[1].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("longDescription", "For an explicit emitter, the density is actually a spawn probability.  For the shaped emitters, it represents the density of the particles per unit volume.\n", true);
		HintTable[1].init("shortDescription", "Desired density of spawned particles per unit of volume.", true);
		HintTable[2].init("tweakable", "true", true);
		ParamDefTable[1].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=2, longName="rate"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[2];
		ParamDef->init("rate", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("tweakable", "true", true);
		ParamDefTable[2].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("longDescription", "TODO\n", true);
		HintTable[1].init("shortDescription", "TODO", true);
		HintTable[2].init("tweakable", "true", true);
		ParamDefTable[2].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=3, longName="lifetimeLow"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[3];
		ParamDef->init("lifetimeLow", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("tweakable", "true", true);
		ParamDefTable[3].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("longDescription", "The emitter actor will create particles with a random lifetime (in seconds) within the lifetime range.\n", true);
		HintTable[1].init("shortDescription", "Low value of particle lifetime", true);
		HintTable[2].init("tweakable", "true", true);
		ParamDefTable[3].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=4, longName="lifetimeHigh"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[4];
		ParamDef->init("lifetimeHigh", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("tweakable", "true", true);
		ParamDefTable[4].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("longDescription", "The emitter actor will create particles with a random lifetime (in seconds) within the lifetime range.\n", true);
		HintTable[1].init("shortDescription", "High value of particle lifetime", true);
		HintTable[2].init("tweakable", "true", true);
		ParamDefTable[4].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=5, longName="velocityLow"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[5];
		ParamDef->init("velocityLow", TYPE_VEC3, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("gameScale", "true", true);
		HintTable[1].init("tweakable", "true", true);
		ParamDefTable[5].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("gameScale", "true", true);
		HintTable[1].init("longDescription", "The emitter actor will create particles with a random velocity within the velocity range.\n", true);
		HintTable[2].init("shortDescription", "Random velocity given within range", true);
		HintTable[3].init("tweakable", "true", true);
		ParamDefTable[5].setHints((const NvParameterized::Hint**)HintPtrTable, 4);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=6, longName="velocityHigh"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[6];
		ParamDef->init("velocityHigh", TYPE_VEC3, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("gameScale", "true", true);
		HintTable[1].init("tweakable", "true", true);
		ParamDefTable[6].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("gameScale", "true", true);
		HintTable[1].init("longDescription", "The emitter actor will create particles with a random velocity within the velocity range.\n", true);
		HintTable[2].init("shortDescription", "Random velocity given within range", true);
		HintTable[3].init("tweakable", "true", true);
		ParamDefTable[6].setHints((const NvParameterized::Hint**)HintPtrTable, 4);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=7, longName="maxSamples"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[7];
		ParamDef->init("maxSamples", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		HintTable[1].init("min", uint64_t(0), true);
		ParamDefTable[7].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		HintTable[1].init("longDescription", "For an explicit emitter, Max Samples is ignored.  For shaped emitters, it is the maximum number of particles spawned in a step.\n", true);
		HintTable[2].init("min", uint64_t(0), true);
		HintTable[3].init("shortDescription", "Shaped emitter only. Max particles spawned each step.", true);
		ParamDefTable[7].setHints((const NvParameterized::Hint**)HintPtrTable, 4);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=8, longName="lodParamDesc"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[8];
		ParamDef->init("lodParamDesc", TYPE_STRUCT, "emitterLodParamDesc", true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("tweakable", "true", true);
		ParamDefTable[8].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("shortDescription", "Bias given to this emitter when sharing IOS with another emitter", true);
		HintTable[1].init("tweakable", "true", true);
		ParamDefTable[8].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=9, longName="lodParamDesc.version"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[9];
		ParamDef->init("version", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		ParamDefTable[9].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		HintTable[1].init("shortDescription", "Helpful documentation goes here", true);
		ParamDefTable[9].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=10, longName="lodParamDesc.maxDistance"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[10];
		ParamDef->init("maxDistance", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		HintTable[1].init("min", uint64_t(0), true);
		ParamDefTable[10].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		HintTable[1].init("min", uint64_t(0), true);
		HintTable[2].init("shortDescription", "Objects greater than this distance from the player will be culled more aggressively", true);
		ParamDefTable[10].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=11, longName="lodParamDesc.distanceWeight"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[11];
		ParamDef->init("distanceWeight", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("defaultValue", uint64_t(1), true);
		HintTable[1].init("max", uint64_t(1), true);
		HintTable[2].init("min", uint64_t(0), true);
		ParamDefTable[11].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#else

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("defaultValue", uint64_t(1), true);
		HintTable[1].init("max", uint64_t(1), true);
		HintTable[2].init("min", uint64_t(0), true);
		HintTable[3].init("shortDescription", "Weight given to distance parameter in LOD function", true);
		ParamDefTable[11].setHints((const NvParameterized::Hint**)HintPtrTable, 4);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=12, longName="lodParamDesc.speedWeight"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[12];
		ParamDef->init("speedWeight", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		HintTable[1].init("max", uint64_t(1), true);
		HintTable[2].init("min", uint64_t(0), true);
		ParamDefTable[12].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#else

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		HintTable[1].init("max", uint64_t(1), true);
		HintTable[2].init("min", uint64_t(0), true);
		HintTable[3].init("shortDescription", "Weight given to velocity parameter in LOD function", true);
		ParamDefTable[12].setHints((const NvParameterized::Hint**)HintPtrTable, 4);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=13, longName="lodParamDesc.lifeWeight"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[13];
		ParamDef->init("lifeWeight", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		HintTable[1].init("max", uint64_t(1), true);
		HintTable[2].init("min", uint64_t(0), true);
		ParamDefTable[13].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#else

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		HintTable[1].init("max", uint64_t(1), true);
		HintTable[2].init("min", uint64_t(0), true);
		HintTable[3].init("shortDescription", "Weight given to life remain parameter in LOD function", true);
		ParamDefTable[13].setHints((const NvParameterized::Hint**)HintPtrTable, 4);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=14, longName="lodParamDesc.separationWeight"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[14];
		ParamDef->init("separationWeight", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		HintTable[1].init("max", uint64_t(1), true);
		HintTable[2].init("min", uint64_t(0), true);
		ParamDefTable[14].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#else

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		HintTable[1].init("max", uint64_t(1), true);
		HintTable[2].init("min", uint64_t(0), true);
		HintTable[3].init("shortDescription", "Weight given to separation parameter in LOD function", true);
		ParamDefTable[14].setHints((const NvParameterized::Hint**)HintPtrTable, 4);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=15, longName="lodParamDesc.bias"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[15];
		ParamDef->init("bias", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("defaultValue", uint64_t(1), true);
		HintTable[1].init("min", uint64_t(0), true);
		ParamDefTable[15].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("defaultValue", uint64_t(1), true);
		HintTable[1].init("min", uint64_t(0), true);
		HintTable[2].init("shortDescription", "Bias given to objects spawned by this emitter, relative to other emitters in the same IOS", true);
		ParamDefTable[15].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=16, longName="iofxAssetName"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[16];
		ParamDef->init("iofxAssetName", TYPE_REF, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("DISPLAY_NAME", "Graphics Effect (IOFX)", true);
		ParamDefTable[16].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("DISPLAY_NAME", "Graphics Effect (IOFX)", true);
		HintTable[1].init("shortDescription", "The name of the instanced object effects asset that will render particles", true);
		ParamDefTable[16].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */


		static const char* const RefVariantVals[] = { "IOFX" };
		ParamDefTable[16].setRefVariantVals((const char**)RefVariantVals, 1);



	}

	// Initialize DefinitionImpl node: nodeIndex=17, longName="iosAssetName"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[17];
		ParamDef->init("iosAssetName", TYPE_REF, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("DISPLAY_NAME", "Particle Simulation (IOS)", true);
		ParamDefTable[17].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("DISPLAY_NAME", "Particle Simulation (IOS)", true);
		HintTable[1].init("shortDescription", "The asset name of the IOS and the type of IOS that will simulate particles", true);
		ParamDefTable[17].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */


		static const char* const RefVariantVals[] = { "NxBasicIosAsset", "ParticleIosAsset" };
		ParamDefTable[17].setRefVariantVals((const char**)RefVariantVals, 2);



	}

	// Initialize DefinitionImpl node: nodeIndex=18, longName="geometryType"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[18];
		ParamDef->init("geometryType", TYPE_REF, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("INCLUDED", uint64_t(1), true);
		ParamDefTable[18].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("INCLUDED", uint64_t(1), true);
		HintTable[1].init("longDescription", "Specifies the geometry type of the emitter", true);
		HintTable[2].init("shortDescription", "Geometry Type", true);
		ParamDefTable[18].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */


		static const char* const RefVariantVals[] = { "EmitterGeomBoxParams", "EmitterGeomSphereParams", "EmitterGeomSphereShellParams", "EmitterGeomCylinderParams", "EmitterGeomExplicitParams" };
		ParamDefTable[18].setRefVariantVals((const char**)RefVariantVals, 5);



	}

	// Initialize DefinitionImpl node: nodeIndex=19, longName="emitterDuration"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[19];
		ParamDef->init("emitterDuration", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("min", uint64_t(0), true);
		ParamDefTable[19].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("longDescription", "Specifies a duration (in seconds) that the emitter will emit for after being enabled.\nAfter the specified duration, the emitter will turn off, unless it has already been explicitly turned off via an API call.\nThe special value 0.0f means there is no duration, and the emitter will remain on until explicitly turned off.", true);
		HintTable[1].init("min", uint64_t(0), true);
		HintTable[2].init("shortDescription", "Emitter duration time (in seconds)", true);
		ParamDefTable[19].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=20, longName="emitterVelocityScale"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[20];
		ParamDef->init("emitterVelocityScale", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Scaling value to control how much the velocity of the emitter affects the velocity of the particles.\nA value of 0 means no effect (legacy mode). A value of 1 will add the emitter actor velocity to the velocity produced by velocityRange.", true);
		HintTable[1].init("shortDescription", "Scaling value to control how much the velocity of the emitter affects the velocity of the particles.", true);
		ParamDefTable[20].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=21, longName="minSamplingFPS"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[21];
		ParamDef->init("minSamplingFPS", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		HintTable[1].init("min", uint64_t(0), true);
		ParamDefTable[21].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		HintTable[1].init("longDescription", "It is used to reduce discontinuity in case of fast moving Emitters, by limiting particles generation step max. time by inverse of this value.\n", true);
		HintTable[2].init("min", uint64_t(0), true);
		HintTable[3].init("shortDescription", "Defines minimum FPS at which particles are generating (0-value means no limit in FPS)", true);
		ParamDefTable[21].setHints((const NvParameterized::Hint**)HintPtrTable, 4);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=22, longName="rateVsTimeCurvePoints"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[22];
		ParamDef->init("rateVsTimeCurvePoints", TYPE_ARRAY, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("DISPLAY_NAME", "rateVsEmitterDurationCurvePoints", true);
		HintTable[1].init("editorCurve", uint64_t(1), true);
		HintTable[2].init("xAxisLabel", "Emitter Duration", true);
		HintTable[3].init("yAxisLabel", "Rate", true);
		ParamDefTable[22].setHints((const NvParameterized::Hint**)HintPtrTable, 4);

#else

		static HintImpl HintTable[5];
		static Hint* HintPtrTable[5] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], &HintTable[4], };
		HintTable[0].init("DISPLAY_NAME", "rateVsEmitterDurationCurvePoints", true);
		HintTable[1].init("editorCurve", uint64_t(1), true);
		HintTable[2].init("shortDescription", "Control points for rate vs emitter duration curve", true);
		HintTable[3].init("xAxisLabel", "Emitter Duration", true);
		HintTable[4].init("yAxisLabel", "Rate", true);
		ParamDefTable[22].setHints((const NvParameterized::Hint**)HintPtrTable, 5);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */




		ParamDef->setArraySize(-1);
	}

	// Initialize DefinitionImpl node: nodeIndex=23, longName="rateVsTimeCurvePoints[]"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[23];
		ParamDef->init("rateVsTimeCurvePoints", TYPE_STRUCT, "rateVsTimeCurvePoint", true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("DISPLAY_NAME", "rateVsEmitterDurationCurvePoints", true);
		HintTable[1].init("editorCurve", uint64_t(1), true);
		HintTable[2].init("xAxisLabel", "Emitter Duration", true);
		HintTable[3].init("yAxisLabel", "Rate", true);
		ParamDefTable[23].setHints((const NvParameterized::Hint**)HintPtrTable, 4);

#else

		static HintImpl HintTable[5];
		static Hint* HintPtrTable[5] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], &HintTable[4], };
		HintTable[0].init("DISPLAY_NAME", "rateVsEmitterDurationCurvePoints", true);
		HintTable[1].init("editorCurve", uint64_t(1), true);
		HintTable[2].init("shortDescription", "Control points for rate vs emitter duration curve", true);
		HintTable[3].init("xAxisLabel", "Emitter Duration", true);
		HintTable[4].init("yAxisLabel", "Rate", true);
		ParamDefTable[23].setHints((const NvParameterized::Hint**)HintPtrTable, 5);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=24, longName="rateVsTimeCurvePoints[].x"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[24];
		ParamDef->init("x", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("max", uint64_t(1), true);
		HintTable[1].init("min", uint64_t(0), true);
		ParamDefTable[24].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("max", uint64_t(1), true);
		HintTable[1].init("min", uint64_t(0), true);
		HintTable[2].init("shortDescription", "Time", true);
		ParamDefTable[24].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=25, longName="rateVsTimeCurvePoints[].y"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[25];
		ParamDef->init("y", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Rate", true);
		ParamDefTable[25].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// SetChildren for: nodeIndex=0, longName=""
	{
		static Definition* Children[15];
		Children[0] = PDEF_PTR(1);
		Children[1] = PDEF_PTR(2);
		Children[2] = PDEF_PTR(3);
		Children[3] = PDEF_PTR(4);
		Children[4] = PDEF_PTR(5);
		Children[5] = PDEF_PTR(6);
		Children[6] = PDEF_PTR(7);
		Children[7] = PDEF_PTR(8);
		Children[8] = PDEF_PTR(16);
		Children[9] = PDEF_PTR(17);
		Children[10] = PDEF_PTR(18);
		Children[11] = PDEF_PTR(19);
		Children[12] = PDEF_PTR(20);
		Children[13] = PDEF_PTR(21);
		Children[14] = PDEF_PTR(22);

		ParamDefTable[0].setChildren(Children, 15);
	}

	// SetChildren for: nodeIndex=8, longName="lodParamDesc"
	{
		static Definition* Children[7];
		Children[0] = PDEF_PTR(9);
		Children[1] = PDEF_PTR(10);
		Children[2] = PDEF_PTR(11);
		Children[3] = PDEF_PTR(12);
		Children[4] = PDEF_PTR(13);
		Children[5] = PDEF_PTR(14);
		Children[6] = PDEF_PTR(15);

		ParamDefTable[8].setChildren(Children, 7);
	}

	// SetChildren for: nodeIndex=22, longName="rateVsTimeCurvePoints"
	{
		static Definition* Children[1];
		Children[0] = PDEF_PTR(23);

		ParamDefTable[22].setChildren(Children, 1);
	}

	// SetChildren for: nodeIndex=23, longName="rateVsTimeCurvePoints[]"
	{
		static Definition* Children[2];
		Children[0] = PDEF_PTR(24);
		Children[1] = PDEF_PTR(25);

		ParamDefTable[23].setChildren(Children, 2);
	}

	mBuiltFlag = true;

}
void ApexEmitterAssetParameters_0p7::initStrings(void)
{
}

void ApexEmitterAssetParameters_0p7::initDynamicArrays(void)
{
	rateVsTimeCurvePoints.buf = NULL;
	rateVsTimeCurvePoints.isAllocated = true;
	rateVsTimeCurvePoints.elementSize = sizeof(rateVsTimeCurvePoint_Type);
	rateVsTimeCurvePoints.arraySizes[0] = 0;
}

void ApexEmitterAssetParameters_0p7::initDefaults(void)
{

	freeStrings();
	freeReferences();
	freeDynamicArrays();
	density = float(1);
	rate = float(1);
	lifetimeLow = float(1);
	lifetimeHigh = float(1);
	velocityLow = physx::PxVec3(init(0, 0, 0));
	velocityHigh = physx::PxVec3(init(0, 0, 0));
	maxSamples = uint32_t(0);
	lodParamDesc.version = uint32_t(0);
	lodParamDesc.maxDistance = float(0);
	lodParamDesc.distanceWeight = float(1);
	lodParamDesc.speedWeight = float(0);
	lodParamDesc.lifeWeight = float(0);
	lodParamDesc.separationWeight = float(0);
	lodParamDesc.bias = float(1);
	emitterDuration = float(PX_MAX_F32);
	emitterVelocityScale = float(0);
	minSamplingFPS = uint32_t(0);

	initDynamicArrays();
	initStrings();
	initReferences();
}

void ApexEmitterAssetParameters_0p7::initReferences(void)
{
	iofxAssetName = NULL;

	iosAssetName = NULL;

	geometryType = NULL;

}

void ApexEmitterAssetParameters_0p7::freeDynamicArrays(void)
{
	if (rateVsTimeCurvePoints.isAllocated && rateVsTimeCurvePoints.buf)
	{
		mParameterizedTraits->free(rateVsTimeCurvePoints.buf);
	}
}

void ApexEmitterAssetParameters_0p7::freeStrings(void)
{
}

void ApexEmitterAssetParameters_0p7::freeReferences(void)
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
