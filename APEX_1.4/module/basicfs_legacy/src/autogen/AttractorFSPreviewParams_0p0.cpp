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


#include "AttractorFSPreviewParams_0p0.h"
#include <string.h>
#include <stdlib.h>

using namespace NvParameterized;

namespace nvidia
{
namespace parameterized
{

using namespace AttractorFSPreviewParams_0p0NS;

const char* const AttractorFSPreviewParams_0p0Factory::vptr =
    NvParameterized::getVptr<AttractorFSPreviewParams_0p0, AttractorFSPreviewParams_0p0::ClassAlignment>();

const uint32_t NumParamDefs = 5;
static NvParameterized::DefinitionImpl* ParamDefTable; // now allocated in buildTree [NumParamDefs];


static const size_t ParamLookupChildrenTable[] =
{
	1, 2, 3, 4,
};

#define TENUM(type) nvidia::##type
#define CHILDREN(index) &ParamLookupChildrenTable[index]
static const NvParameterized::ParamLookupNode ParamLookupTable[NumParamDefs] =
{
	{ TYPE_STRUCT, false, 0, CHILDREN(0), 4 },
	{ TYPE_MAT44, false, (size_t)(&((ParametersStruct*)0)->globalPose), NULL, 0 }, // globalPose
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->drawShape), NULL, 0 }, // drawShape
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->drawAssetInfo), NULL, 0 }, // drawAssetInfo
	{ TYPE_U64, false, (size_t)(&((ParametersStruct*)0)->userData), NULL, 0 }, // userData
};


bool AttractorFSPreviewParams_0p0::mBuiltFlag = false;
NvParameterized::MutexType AttractorFSPreviewParams_0p0::mBuiltFlagMutex;

AttractorFSPreviewParams_0p0::AttractorFSPreviewParams_0p0(NvParameterized::Traits* traits, void* buf, int32_t* refCount) :
	NvParameters(traits, buf, refCount)
{
	//mParameterizedTraits->registerFactory(className(), &AttractorFSPreviewParams_0p0FactoryInst);

	if (!buf) //Do not init data if it is inplace-deserialized
	{
		initDynamicArrays();
		initStrings();
		initReferences();
		initDefaults();
	}
}

AttractorFSPreviewParams_0p0::~AttractorFSPreviewParams_0p0()
{
	freeStrings();
	freeReferences();
	freeDynamicArrays();
}

void AttractorFSPreviewParams_0p0::destroy()
{
	// We cache these fields here to avoid overwrite in destructor
	bool doDeallocateSelf = mDoDeallocateSelf;
	NvParameterized::Traits* traits = mParameterizedTraits;
	int32_t* refCount = mRefCount;
	void* buf = mBuffer;

	this->~AttractorFSPreviewParams_0p0();

	NvParameters::destroy(this, traits, doDeallocateSelf, refCount, buf);
}

const NvParameterized::DefinitionImpl* AttractorFSPreviewParams_0p0::getParameterDefinitionTree(void)
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

const NvParameterized::DefinitionImpl* AttractorFSPreviewParams_0p0::getParameterDefinitionTree(void) const
{
	AttractorFSPreviewParams_0p0* tmpParam = const_cast<AttractorFSPreviewParams_0p0*>(this);

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

NvParameterized::ErrorType AttractorFSPreviewParams_0p0::getParameterHandle(const char* long_name, Handle& handle) const
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

NvParameterized::ErrorType AttractorFSPreviewParams_0p0::getParameterHandle(const char* long_name, Handle& handle)
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

void AttractorFSPreviewParams_0p0::getVarPtr(const Handle& handle, void*& ptr, size_t& offset) const
{
	ptr = getVarPtrHelper(&ParamLookupTable[0], const_cast<AttractorFSPreviewParams_0p0::ParametersStruct*>(&parameters()), handle, offset);
}


/* Dynamic Handle Indices */

void AttractorFSPreviewParams_0p0::freeParameterDefinitionTable(NvParameterized::Traits* traits)
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

void AttractorFSPreviewParams_0p0::buildTree(void)
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

	// Initialize DefinitionImpl node: nodeIndex=1, longName="globalPose"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[1];
		ParamDef->init("globalPose", TYPE_MAT44, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("editorDisplay", "false", true);
		ParamDefTable[1].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("editorDisplay", "false", true);
		HintTable[1].init("shortDescription", "The pose that translates from turbulence preview coordinates to world coordinates", true);
		ParamDefTable[1].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=2, longName="drawShape"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[2];
		ParamDef->init("drawShape", TYPE_BOOL, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("editorDisplay", "false", true);
		ParamDefTable[2].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("editorDisplay", "false", true);
		HintTable[1].init("shortDescription", "Draw the box", true);
		ParamDefTable[2].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=3, longName="drawAssetInfo"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[3];
		ParamDef->init("drawAssetInfo", TYPE_BOOL, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("editorDisplay", "false", true);
		ParamDefTable[3].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("editorDisplay", "false", true);
		HintTable[1].init("shortDescription", "Display asset info", true);
		ParamDefTable[3].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=4, longName="userData"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[4];
		ParamDef->init("userData", TYPE_U64, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("editorDisplay", "false", true);
		ParamDefTable[4].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("editorDisplay", "false", true);
		HintTable[1].init("shortDescription", "Optional user data pointer associated with the attractor actor", true);
		ParamDefTable[4].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// SetChildren for: nodeIndex=0, longName=""
	{
		static Definition* Children[4];
		Children[0] = PDEF_PTR(1);
		Children[1] = PDEF_PTR(2);
		Children[2] = PDEF_PTR(3);
		Children[3] = PDEF_PTR(4);

		ParamDefTable[0].setChildren(Children, 4);
	}

	mBuiltFlag = true;

}
void AttractorFSPreviewParams_0p0::initStrings(void)
{
}

void AttractorFSPreviewParams_0p0::initDynamicArrays(void)
{
}

void AttractorFSPreviewParams_0p0::initDefaults(void)
{

	freeStrings();
	freeReferences();
	freeDynamicArrays();
	globalPose = physx::PxMat44(physx::PxVec4(1.0f));
	drawShape = bool(0);
	drawAssetInfo = bool(0);
	userData = uint64_t(0);

	initDynamicArrays();
	initStrings();
	initReferences();
}

void AttractorFSPreviewParams_0p0::initReferences(void)
{
}

void AttractorFSPreviewParams_0p0::freeDynamicArrays(void)
{
}

void AttractorFSPreviewParams_0p0::freeStrings(void)
{
}

void AttractorFSPreviewParams_0p0::freeReferences(void)
{
}

} // namespace parameterized
} // namespace nvidia
