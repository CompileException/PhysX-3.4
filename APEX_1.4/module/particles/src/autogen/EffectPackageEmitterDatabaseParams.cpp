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


#include "EffectPackageEmitterDatabaseParams.h"
#include <string.h>
#include <stdlib.h>

using namespace NvParameterized;

namespace nvidia
{
namespace particles
{

using namespace EffectPackageEmitterDatabaseParamsNS;

const char* const EffectPackageEmitterDatabaseParamsFactory::vptr =
    NvParameterized::getVptr<EffectPackageEmitterDatabaseParams, EffectPackageEmitterDatabaseParams::ClassAlignment>();

const uint32_t NumParamDefs = 3;
static NvParameterized::DefinitionImpl* ParamDefTable; // now allocated in buildTree [NumParamDefs];


static const size_t ParamLookupChildrenTable[] =
{
	1, 2,
};

#define TENUM(type) nvidia::##type
#define CHILDREN(index) &ParamLookupChildrenTable[index]
static const NvParameterized::ParamLookupNode ParamLookupTable[NumParamDefs] =
{
	{ TYPE_STRUCT, false, 0, CHILDREN(0), 1 },
	{ TYPE_ARRAY, true, (size_t)(&((ParametersStruct*)0)->Emitters), CHILDREN(1), 1 }, // Emitters
	{ TYPE_REF, false, 1 * sizeof(NvParameterized::Interface*), NULL, 0 }, // Emitters[]
};


bool EffectPackageEmitterDatabaseParams::mBuiltFlag = false;
NvParameterized::MutexType EffectPackageEmitterDatabaseParams::mBuiltFlagMutex;

EffectPackageEmitterDatabaseParams::EffectPackageEmitterDatabaseParams(NvParameterized::Traits* traits, void* buf, int32_t* refCount) :
	NvParameters(traits, buf, refCount)
{
	//mParameterizedTraits->registerFactory(className(), &EffectPackageEmitterDatabaseParamsFactoryInst);

	if (!buf) //Do not init data if it is inplace-deserialized
	{
		initDynamicArrays();
		initStrings();
		initReferences();
		initDefaults();
	}
}

EffectPackageEmitterDatabaseParams::~EffectPackageEmitterDatabaseParams()
{
	freeStrings();
	freeReferences();
	freeDynamicArrays();
}

void EffectPackageEmitterDatabaseParams::destroy()
{
	// We cache these fields here to avoid overwrite in destructor
	bool doDeallocateSelf = mDoDeallocateSelf;
	NvParameterized::Traits* traits = mParameterizedTraits;
	int32_t* refCount = mRefCount;
	void* buf = mBuffer;

	this->~EffectPackageEmitterDatabaseParams();

	NvParameters::destroy(this, traits, doDeallocateSelf, refCount, buf);
}

const NvParameterized::DefinitionImpl* EffectPackageEmitterDatabaseParams::getParameterDefinitionTree(void)
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

const NvParameterized::DefinitionImpl* EffectPackageEmitterDatabaseParams::getParameterDefinitionTree(void) const
{
	EffectPackageEmitterDatabaseParams* tmpParam = const_cast<EffectPackageEmitterDatabaseParams*>(this);

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

NvParameterized::ErrorType EffectPackageEmitterDatabaseParams::getParameterHandle(const char* long_name, Handle& handle) const
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

NvParameterized::ErrorType EffectPackageEmitterDatabaseParams::getParameterHandle(const char* long_name, Handle& handle)
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

void EffectPackageEmitterDatabaseParams::getVarPtr(const Handle& handle, void*& ptr, size_t& offset) const
{
	ptr = getVarPtrHelper(&ParamLookupTable[0], const_cast<EffectPackageEmitterDatabaseParams::ParametersStruct*>(&parameters()), handle, offset);
}


/* Dynamic Handle Indices */
/* [0] - Emitters (not an array of structs) */

void EffectPackageEmitterDatabaseParams::freeParameterDefinitionTable(NvParameterized::Traits* traits)
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

void EffectPackageEmitterDatabaseParams::buildTree(void)
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
		HintTable[0].init("shortDescription", "The collection of all emitter assets", true);
		ParamDefTable[0].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=1, longName="Emitters"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[1];
		ParamDef->init("Emitters", TYPE_ARRAY, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[5];
		static Hint* HintPtrTable[5] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], &HintTable[4], };
		HintTable[0].init("DISABLE_SINGLE_CLICK_COLLAPSE", uint64_t(1), true);
		HintTable[1].init("DISABLE_SINGLE_CLICK_EXPAND", uint64_t(1), true);
		HintTable[2].init("INCLUDED", uint64_t(1), true);
		HintTable[3].init("READONLY", uint64_t(0), true);
		HintTable[4].init("RIGHT_CLICK", "COPY_EMITTER_PROPERTIES PASTE_EMITTER_PROPERTIES", true);
		ParamDefTable[1].setHints((const NvParameterized::Hint**)HintPtrTable, 5);

#else

		static HintImpl HintTable[6];
		static Hint* HintPtrTable[6] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], &HintTable[4], &HintTable[5], };
		HintTable[0].init("DISABLE_SINGLE_CLICK_COLLAPSE", uint64_t(1), true);
		HintTable[1].init("DISABLE_SINGLE_CLICK_EXPAND", uint64_t(1), true);
		HintTable[2].init("INCLUDED", uint64_t(1), true);
		HintTable[3].init("READONLY", uint64_t(0), true);
		HintTable[4].init("RIGHT_CLICK", "COPY_EMITTER_PROPERTIES PASTE_EMITTER_PROPERTIES", true);
		HintTable[5].init("shortDescription", "The array of emitters", true);
		ParamDefTable[1].setHints((const NvParameterized::Hint**)HintPtrTable, 6);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */


		static const char* const RefVariantVals[] = { "EmitterData" };
		ParamDefTable[1].setRefVariantVals((const char**)RefVariantVals, 1);


		ParamDef->setArraySize(-1);
		static const uint8_t dynHandleIndices[1] = { 0, };
		ParamDef->setDynamicHandleIndicesMap(dynHandleIndices, 1);

	}

	// Initialize DefinitionImpl node: nodeIndex=2, longName="Emitters[]"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[2];
		ParamDef->init("Emitters", TYPE_REF, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[5];
		static Hint* HintPtrTable[5] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], &HintTable[4], };
		HintTable[0].init("DISABLE_SINGLE_CLICK_COLLAPSE", uint64_t(1), true);
		HintTable[1].init("DISABLE_SINGLE_CLICK_EXPAND", uint64_t(1), true);
		HintTable[2].init("INCLUDED", uint64_t(1), true);
		HintTable[3].init("READONLY", uint64_t(0), true);
		HintTable[4].init("RIGHT_CLICK", "COPY_EMITTER_PROPERTIES PASTE_EMITTER_PROPERTIES", true);
		ParamDefTable[2].setHints((const NvParameterized::Hint**)HintPtrTable, 5);

#else

		static HintImpl HintTable[6];
		static Hint* HintPtrTable[6] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], &HintTable[4], &HintTable[5], };
		HintTable[0].init("DISABLE_SINGLE_CLICK_COLLAPSE", uint64_t(1), true);
		HintTable[1].init("DISABLE_SINGLE_CLICK_EXPAND", uint64_t(1), true);
		HintTable[2].init("INCLUDED", uint64_t(1), true);
		HintTable[3].init("READONLY", uint64_t(0), true);
		HintTable[4].init("RIGHT_CLICK", "COPY_EMITTER_PROPERTIES PASTE_EMITTER_PROPERTIES", true);
		HintTable[5].init("shortDescription", "The array of emitters", true);
		ParamDefTable[2].setHints((const NvParameterized::Hint**)HintPtrTable, 6);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */


		static const char* const RefVariantVals[] = { "EmitterData" };
		ParamDefTable[2].setRefVariantVals((const char**)RefVariantVals, 1);



	}

	// SetChildren for: nodeIndex=0, longName=""
	{
		static Definition* Children[1];
		Children[0] = PDEF_PTR(1);

		ParamDefTable[0].setChildren(Children, 1);
	}

	// SetChildren for: nodeIndex=1, longName="Emitters"
	{
		static Definition* Children[1];
		Children[0] = PDEF_PTR(2);

		ParamDefTable[1].setChildren(Children, 1);
	}

	mBuiltFlag = true;

}
void EffectPackageEmitterDatabaseParams::initStrings(void)
{
}

void EffectPackageEmitterDatabaseParams::initDynamicArrays(void)
{
	Emitters.buf = NULL;
	Emitters.isAllocated = true;
	Emitters.elementSize = sizeof(NvParameterized::Interface*);
	Emitters.arraySizes[0] = 0;
}

void EffectPackageEmitterDatabaseParams::initDefaults(void)
{

	freeStrings();
	freeReferences();
	freeDynamicArrays();

	initDynamicArrays();
	initStrings();
	initReferences();
}

void EffectPackageEmitterDatabaseParams::initReferences(void)
{
}

void EffectPackageEmitterDatabaseParams::freeDynamicArrays(void)
{
	if (Emitters.isAllocated && Emitters.buf)
	{
		mParameterizedTraits->free(Emitters.buf);
	}
}

void EffectPackageEmitterDatabaseParams::freeStrings(void)
{
}

void EffectPackageEmitterDatabaseParams::freeReferences(void)
{

	for (int i = 0; i < Emitters.arraySizes[0]; ++i)
	{
		if (Emitters.buf[i])
		{
			Emitters.buf[i]->destroy();
		}
	}
}

} // namespace particles
} // namespace nvidia
