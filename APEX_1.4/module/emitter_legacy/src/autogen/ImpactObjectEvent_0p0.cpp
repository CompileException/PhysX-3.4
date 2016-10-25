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


#include "ImpactObjectEvent_0p0.h"
#include <string.h>
#include <stdlib.h>

using namespace NvParameterized;

namespace nvidia
{
namespace parameterized
{

using namespace ImpactObjectEvent_0p0NS;

const char* const ImpactObjectEvent_0p0Factory::vptr =
    NvParameterized::getVptr<ImpactObjectEvent_0p0, ImpactObjectEvent_0p0::ClassAlignment>();

const uint32_t NumParamDefs = 24;
static NvParameterized::DefinitionImpl* ParamDefTable; // now allocated in buildTree [NumParamDefs];


static const size_t ParamLookupChildrenTable[] =
{
	1, 2, 3, 4, 7, 10, 13, 14, 15, 16, 5, 6, 8, 9, 11, 12, 17, 18, 19, 20, 21, 22, 23,
};

#define TENUM(type) nvidia::##type
#define CHILDREN(index) &ParamLookupChildrenTable[index]
static const NvParameterized::ParamLookupNode ParamLookupTable[NumParamDefs] =
{
	{ TYPE_STRUCT, false, 0, CHILDREN(0), 10 },
	{ TYPE_STRING, false, (size_t)(&((ParametersStruct*)0)->eventSetName), NULL, 0 }, // eventSetName
	{ TYPE_REF, false, (size_t)(&((ParametersStruct*)0)->iofxAssetName), NULL, 0 }, // iofxAssetName
	{ TYPE_REF, false, (size_t)(&((ParametersStruct*)0)->iosAssetName), NULL, 0 }, // iosAssetName
	{ TYPE_STRUCT, false, (size_t)(&((ParametersStruct*)0)->angleRange), CHILDREN(10), 2 }, // angleRange
	{ TYPE_F32, false, (size_t)(&((rangeStructF32_Type*)0)->min), NULL, 0 }, // angleRange.min
	{ TYPE_F32, false, (size_t)(&((rangeStructF32_Type*)0)->max), NULL, 0 }, // angleRange.max
	{ TYPE_STRUCT, false, (size_t)(&((ParametersStruct*)0)->speedRange), CHILDREN(12), 2 }, // speedRange
	{ TYPE_F32, false, (size_t)(&((rangeStructF32_Type*)0)->min), NULL, 0 }, // speedRange.min
	{ TYPE_F32, false, (size_t)(&((rangeStructF32_Type*)0)->max), NULL, 0 }, // speedRange.max
	{ TYPE_STRUCT, false, (size_t)(&((ParametersStruct*)0)->lifeRange), CHILDREN(14), 2 }, // lifeRange
	{ TYPE_F32, false, (size_t)(&((rangeStructF32_Type*)0)->min), NULL, 0 }, // lifeRange.min
	{ TYPE_F32, false, (size_t)(&((rangeStructF32_Type*)0)->max), NULL, 0 }, // lifeRange.max
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->delay), NULL, 0 }, // delay
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->particleSpawnCount), NULL, 0 }, // particleSpawnCount
	{ TYPE_ENUM, false, (size_t)(&((ParametersStruct*)0)->impactAxis), NULL, 0 }, // impactAxis
	{ TYPE_STRUCT, false, (size_t)(&((ParametersStruct*)0)->lodParamDesc), CHILDREN(16), 7 }, // lodParamDesc
	{ TYPE_U32, false, (size_t)(&((emitterLodParamDesc_Type*)0)->version), NULL, 0 }, // lodParamDesc.version
	{ TYPE_F32, false, (size_t)(&((emitterLodParamDesc_Type*)0)->maxDistance), NULL, 0 }, // lodParamDesc.maxDistance
	{ TYPE_F32, false, (size_t)(&((emitterLodParamDesc_Type*)0)->distanceWeight), NULL, 0 }, // lodParamDesc.distanceWeight
	{ TYPE_F32, false, (size_t)(&((emitterLodParamDesc_Type*)0)->speedWeight), NULL, 0 }, // lodParamDesc.speedWeight
	{ TYPE_F32, false, (size_t)(&((emitterLodParamDesc_Type*)0)->lifeWeight), NULL, 0 }, // lodParamDesc.lifeWeight
	{ TYPE_F32, false, (size_t)(&((emitterLodParamDesc_Type*)0)->separationWeight), NULL, 0 }, // lodParamDesc.separationWeight
	{ TYPE_F32, false, (size_t)(&((emitterLodParamDesc_Type*)0)->bias), NULL, 0 }, // lodParamDesc.bias
};


bool ImpactObjectEvent_0p0::mBuiltFlag = false;
NvParameterized::MutexType ImpactObjectEvent_0p0::mBuiltFlagMutex;

ImpactObjectEvent_0p0::ImpactObjectEvent_0p0(NvParameterized::Traits* traits, void* buf, int32_t* refCount) :
	NvParameters(traits, buf, refCount)
{
	//mParameterizedTraits->registerFactory(className(), &ImpactObjectEvent_0p0FactoryInst);

	if (!buf) //Do not init data if it is inplace-deserialized
	{
		initDynamicArrays();
		initStrings();
		initReferences();
		initDefaults();
	}
}

ImpactObjectEvent_0p0::~ImpactObjectEvent_0p0()
{
	freeStrings();
	freeReferences();
	freeDynamicArrays();
}

void ImpactObjectEvent_0p0::destroy()
{
	// We cache these fields here to avoid overwrite in destructor
	bool doDeallocateSelf = mDoDeallocateSelf;
	NvParameterized::Traits* traits = mParameterizedTraits;
	int32_t* refCount = mRefCount;
	void* buf = mBuffer;

	this->~ImpactObjectEvent_0p0();

	NvParameters::destroy(this, traits, doDeallocateSelf, refCount, buf);
}

const NvParameterized::DefinitionImpl* ImpactObjectEvent_0p0::getParameterDefinitionTree(void)
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

const NvParameterized::DefinitionImpl* ImpactObjectEvent_0p0::getParameterDefinitionTree(void) const
{
	ImpactObjectEvent_0p0* tmpParam = const_cast<ImpactObjectEvent_0p0*>(this);

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

NvParameterized::ErrorType ImpactObjectEvent_0p0::getParameterHandle(const char* long_name, Handle& handle) const
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

NvParameterized::ErrorType ImpactObjectEvent_0p0::getParameterHandle(const char* long_name, Handle& handle)
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

void ImpactObjectEvent_0p0::getVarPtr(const Handle& handle, void*& ptr, size_t& offset) const
{
	ptr = getVarPtrHelper(&ParamLookupTable[0], const_cast<ImpactObjectEvent_0p0::ParametersStruct*>(&parameters()), handle, offset);
}


/* Dynamic Handle Indices */

void ImpactObjectEvent_0p0::freeParameterDefinitionTable(NvParameterized::Traits* traits)
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

void ImpactObjectEvent_0p0::buildTree(void)
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

	// Initialize DefinitionImpl node: nodeIndex=1, longName="eventSetName"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[1];
		ParamDef->init("eventSetName", TYPE_STRING, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The name of the event set (you can put multiple events in an event set)", true);
		ParamDefTable[1].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=2, longName="iofxAssetName"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[2];
		ParamDef->init("iofxAssetName", TYPE_REF, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The name of the instanced object effects asset that will render the particles", true);
		ParamDefTable[2].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */


		static const char* const RefVariantVals[] = { "IOFX" };
		ParamDefTable[2].setRefVariantVals((const char**)RefVariantVals, 1);



	}

	// Initialize DefinitionImpl node: nodeIndex=3, longName="iosAssetName"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[3];
		ParamDef->init("iosAssetName", TYPE_REF, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The asset name of the particle system that will simulate the particles", true);
		ParamDefTable[3].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */


		static const char* const RefVariantVals[] = { "NxBasicIosAsset", "ParticleIosAsset" };
		ParamDefTable[3].setRefVariantVals((const char**)RefVariantVals, 2);



	}

	// Initialize DefinitionImpl node: nodeIndex=4, longName="angleRange"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[4];
		ParamDef->init("angleRange", TYPE_STRUCT, "rangeStructF32", true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The particle emission angle range in degrees", true);
		ParamDefTable[4].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=5, longName="angleRange.min"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[5];
		ParamDef->init("min", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Helpful documentation goes here", true);
		ParamDefTable[5].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=6, longName="angleRange.max"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[6];
		ParamDef->init("max", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Helpful documentation goes here", true);
		ParamDefTable[6].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=7, longName="speedRange"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[7];
		ParamDef->init("speedRange", TYPE_STRUCT, "rangeStructF32", true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The particle emission speed range", true);
		ParamDefTable[7].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=8, longName="speedRange.min"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[8];
		ParamDef->init("min", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Helpful documentation goes here", true);
		ParamDefTable[8].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=9, longName="speedRange.max"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[9];
		ParamDef->init("max", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Helpful documentation goes here", true);
		ParamDefTable[9].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=10, longName="lifeRange"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[10];
		ParamDef->init("lifeRange", TYPE_STRUCT, "rangeStructF32", true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The particle life range in seconds", true);
		ParamDefTable[10].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=11, longName="lifeRange.min"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[11];
		ParamDef->init("min", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Helpful documentation goes here", true);
		ParamDefTable[11].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=12, longName="lifeRange.max"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[12];
		ParamDef->init("max", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Helpful documentation goes here", true);
		ParamDefTable[12].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=13, longName="delay"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[13];
		ParamDef->init("delay", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		HintTable[1].init("min", uint64_t(0), true);
		ParamDefTable[13].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		HintTable[1].init("min", uint64_t(0), true);
		HintTable[2].init("shortDescription", "The delay (in seconds) after impact to wait before triggering", true);
		ParamDefTable[13].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=14, longName="particleSpawnCount"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[14];
		ParamDef->init("particleSpawnCount", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("defaultValue", uint64_t(10), true);
		HintTable[1].init("min", uint64_t(0), true);
		ParamDefTable[14].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("defaultValue", uint64_t(10), true);
		HintTable[1].init("min", uint64_t(0), true);
		HintTable[2].init("shortDescription", "The number of particles emitted per impact", true);
		ParamDefTable[14].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=15, longName="impactAxis"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[15];
		ParamDef->init("impactAxis", TYPE_ENUM, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("defaultValue", "reflection", true);
		ParamDefTable[15].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("defaultValue", "reflection", true);
		HintTable[1].init("shortDescription", "The method used to emit particles at the point of impact", true);
		ParamDefTable[15].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */

		static const char* const EnumVals[] = { "incident", "normal", "reflection" };
		ParamDefTable[15].setEnumVals((const char**)EnumVals, 3);




	}

	// Initialize DefinitionImpl node: nodeIndex=16, longName="lodParamDesc"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[16];
		ParamDef->init("lodParamDesc", TYPE_STRUCT, "emitterLodParamDesc", true);






	}

	// Initialize DefinitionImpl node: nodeIndex=17, longName="lodParamDesc.version"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[17];
		ParamDef->init("version", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		ParamDefTable[17].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		HintTable[1].init("shortDescription", "Helpful documentation goes here", true);
		ParamDefTable[17].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=18, longName="lodParamDesc.maxDistance"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[18];
		ParamDef->init("maxDistance", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		HintTable[1].init("min", uint64_t(0), true);
		ParamDefTable[18].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		HintTable[1].init("min", uint64_t(0), true);
		HintTable[2].init("shortDescription", "Objects greater than this distance from the player will be culled more aggressively", true);
		ParamDefTable[18].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=19, longName="lodParamDesc.distanceWeight"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[19];
		ParamDef->init("distanceWeight", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("defaultValue", uint64_t(1), true);
		HintTable[1].init("max", uint64_t(1), true);
		HintTable[2].init("min", uint64_t(0), true);
		ParamDefTable[19].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#else

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("defaultValue", uint64_t(1), true);
		HintTable[1].init("max", uint64_t(1), true);
		HintTable[2].init("min", uint64_t(0), true);
		HintTable[3].init("shortDescription", "Weight given to distance parameter in LOD function", true);
		ParamDefTable[19].setHints((const NvParameterized::Hint**)HintPtrTable, 4);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=20, longName="lodParamDesc.speedWeight"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[20];
		ParamDef->init("speedWeight", TYPE_F32, NULL, true);

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
		HintTable[3].init("shortDescription", "Weight given to velocity parameter in LOD function", true);
		ParamDefTable[20].setHints((const NvParameterized::Hint**)HintPtrTable, 4);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=21, longName="lodParamDesc.lifeWeight"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[21];
		ParamDef->init("lifeWeight", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		HintTable[1].init("max", uint64_t(1), true);
		HintTable[2].init("min", uint64_t(0), true);
		ParamDefTable[21].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#else

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		HintTable[1].init("max", uint64_t(1), true);
		HintTable[2].init("min", uint64_t(0), true);
		HintTable[3].init("shortDescription", "Weight given to life remain parameter in LOD function", true);
		ParamDefTable[21].setHints((const NvParameterized::Hint**)HintPtrTable, 4);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=22, longName="lodParamDesc.separationWeight"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[22];
		ParamDef->init("separationWeight", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		HintTable[1].init("max", uint64_t(1), true);
		HintTable[2].init("min", uint64_t(0), true);
		ParamDefTable[22].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#else

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("defaultValue", uint64_t(0), true);
		HintTable[1].init("max", uint64_t(1), true);
		HintTable[2].init("min", uint64_t(0), true);
		HintTable[3].init("shortDescription", "Weight given to separation parameter in LOD function", true);
		ParamDefTable[22].setHints((const NvParameterized::Hint**)HintPtrTable, 4);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=23, longName="lodParamDesc.bias"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[23];
		ParamDef->init("bias", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("defaultValue", uint64_t(1), true);
		HintTable[1].init("min", uint64_t(0), true);
		ParamDefTable[23].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("defaultValue", uint64_t(1), true);
		HintTable[1].init("min", uint64_t(0), true);
		HintTable[2].init("shortDescription", "Bias given to objects spawned by this emitter, relative to other emitters in the same IOS", true);
		ParamDefTable[23].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// SetChildren for: nodeIndex=0, longName=""
	{
		static Definition* Children[10];
		Children[0] = PDEF_PTR(1);
		Children[1] = PDEF_PTR(2);
		Children[2] = PDEF_PTR(3);
		Children[3] = PDEF_PTR(4);
		Children[4] = PDEF_PTR(7);
		Children[5] = PDEF_PTR(10);
		Children[6] = PDEF_PTR(13);
		Children[7] = PDEF_PTR(14);
		Children[8] = PDEF_PTR(15);
		Children[9] = PDEF_PTR(16);

		ParamDefTable[0].setChildren(Children, 10);
	}

	// SetChildren for: nodeIndex=4, longName="angleRange"
	{
		static Definition* Children[2];
		Children[0] = PDEF_PTR(5);
		Children[1] = PDEF_PTR(6);

		ParamDefTable[4].setChildren(Children, 2);
	}

	// SetChildren for: nodeIndex=7, longName="speedRange"
	{
		static Definition* Children[2];
		Children[0] = PDEF_PTR(8);
		Children[1] = PDEF_PTR(9);

		ParamDefTable[7].setChildren(Children, 2);
	}

	// SetChildren for: nodeIndex=10, longName="lifeRange"
	{
		static Definition* Children[2];
		Children[0] = PDEF_PTR(11);
		Children[1] = PDEF_PTR(12);

		ParamDefTable[10].setChildren(Children, 2);
	}

	// SetChildren for: nodeIndex=16, longName="lodParamDesc"
	{
		static Definition* Children[7];
		Children[0] = PDEF_PTR(17);
		Children[1] = PDEF_PTR(18);
		Children[2] = PDEF_PTR(19);
		Children[3] = PDEF_PTR(20);
		Children[4] = PDEF_PTR(21);
		Children[5] = PDEF_PTR(22);
		Children[6] = PDEF_PTR(23);

		ParamDefTable[16].setChildren(Children, 7);
	}

	mBuiltFlag = true;

}
void ImpactObjectEvent_0p0::initStrings(void)
{
	eventSetName.isAllocated = true;
	eventSetName.buf = NULL;
}

void ImpactObjectEvent_0p0::initDynamicArrays(void)
{
}

void ImpactObjectEvent_0p0::initDefaults(void)
{

	freeStrings();
	freeReferences();
	freeDynamicArrays();

	angleRange.min = 0.0f;
	angleRange.max = 90.0f;


	speedRange.min = 0.0f;
	speedRange.max = 1.0f;


	lifeRange.min = 5.0f;
	lifeRange.max = 10.0f;

	delay = float(0);
	particleSpawnCount = uint32_t(10);
	impactAxis = (const char*)"reflection";
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

void ImpactObjectEvent_0p0::initReferences(void)
{
	iofxAssetName = NULL;

	iosAssetName = NULL;

}

void ImpactObjectEvent_0p0::freeDynamicArrays(void)
{
}

void ImpactObjectEvent_0p0::freeStrings(void)
{

	if (eventSetName.isAllocated && eventSetName.buf)
	{
		mParameterizedTraits->strfree((char*)eventSetName.buf);
	}
}

void ImpactObjectEvent_0p0::freeReferences(void)
{
	if (iofxAssetName)
	{
		iofxAssetName->destroy();
	}

	if (iosAssetName)
	{
		iosAssetName->destroy();
	}

}

} // namespace parameterized
} // namespace nvidia
