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


#include "ParticleIosAssetParam_0p0.h"
#include <string.h>
#include <stdlib.h>

using namespace NvParameterized;

namespace nvidia
{
namespace parameterized
{

using namespace ParticleIosAssetParam_0p0NS;

const char* const ParticleIosAssetParam_0p0Factory::vptr =
    NvParameterized::getVptr<ParticleIosAssetParam_0p0, ParticleIosAssetParam_0p0::ClassAlignment>();

const uint32_t NumParamDefs = 31;
static NvParameterized::DefinitionImpl* ParamDefTable; // now allocated in buildTree [NumParamDefs];


static const size_t ParamLookupChildrenTable[] =
{
	1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23,
	24, 25, 26, 27, 28, 29, 30,
};

#define TENUM(type) nvidia::##type
#define CHILDREN(index) &ParamLookupChildrenTable[index]
static const NvParameterized::ParamLookupNode ParamLookupTable[NumParamDefs] =
{
	{ TYPE_STRUCT, false, 0, CHILDREN(0), 30 },
	{ TYPE_REF, false, (size_t)(&((ParametersStruct*)0)->particleType), NULL, 0 }, // particleType
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->maxParticleCount), NULL, 0 }, // maxParticleCount
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->particleRadius), NULL, 0 }, // particleRadius
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->maxInjectedParticleCount), NULL, 0 }, // maxInjectedParticleCount
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->maxMotionDistance), NULL, 0 }, // maxMotionDistance
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->contactOffset), NULL, 0 }, // contactOffset
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->restOffset), NULL, 0 }, // restOffset
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->gridSize), NULL, 0 }, // gridSize
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->damping), NULL, 0 }, // damping
	{ TYPE_VEC3, false, (size_t)(&((ParametersStruct*)0)->externalAcceleration), NULL, 0 }, // externalAcceleration
	{ TYPE_VEC3, false, (size_t)(&((ParametersStruct*)0)->projectionPlaneNormal), NULL, 0 }, // projectionPlaneNormal
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->projectionPlaneDistance), NULL, 0 }, // projectionPlaneDistance
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->particleMass), NULL, 0 }, // particleMass
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->restitution), NULL, 0 }, // restitution
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->dynamicFriction), NULL, 0 }, // dynamicFriction
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->staticFriction), NULL, 0 }, // staticFriction
	{ TYPE_STRING, false, (size_t)(&((ParametersStruct*)0)->simulationFilterData), NULL, 0 }, // simulationFilterData
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->CollisionTwoway), NULL, 0 }, // CollisionTwoway
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->CollisionWithDynamicActors), NULL, 0 }, // CollisionWithDynamicActors
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->Enable), NULL, 0 }, // Enable
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->ProjectToPlane), NULL, 0 }, // ProjectToPlane
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->PerParticleRestOffset), NULL, 0 }, // PerParticleRestOffset
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->PerParticleCollisionCacheHint), NULL, 0 }, // PerParticleCollisionCacheHint
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->useGPU), NULL, 0 }, // useGPU
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->PositionBuffer), NULL, 0 }, // PositionBuffer
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->VelocityBuffer), NULL, 0 }, // VelocityBuffer
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->RestOffsetBuffer), NULL, 0 }, // RestOffsetBuffer
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->FlagsBuffer), NULL, 0 }, // FlagsBuffer
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->CollisionNormalBuffer), NULL, 0 }, // CollisionNormalBuffer
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->DensityBuffer), NULL, 0 }, // DensityBuffer
};


bool ParticleIosAssetParam_0p0::mBuiltFlag = false;
NvParameterized::MutexType ParticleIosAssetParam_0p0::mBuiltFlagMutex;

ParticleIosAssetParam_0p0::ParticleIosAssetParam_0p0(NvParameterized::Traits* traits, void* buf, int32_t* refCount) :
	NvParameters(traits, buf, refCount)
{
	//mParameterizedTraits->registerFactory(className(), &ParticleIosAssetParam_0p0FactoryInst);

	if (!buf) //Do not init data if it is inplace-deserialized
	{
		initDynamicArrays();
		initStrings();
		initReferences();
		initDefaults();
	}
}

ParticleIosAssetParam_0p0::~ParticleIosAssetParam_0p0()
{
	freeStrings();
	freeReferences();
	freeDynamicArrays();
}

void ParticleIosAssetParam_0p0::destroy()
{
	// We cache these fields here to avoid overwrite in destructor
	bool doDeallocateSelf = mDoDeallocateSelf;
	NvParameterized::Traits* traits = mParameterizedTraits;
	int32_t* refCount = mRefCount;
	void* buf = mBuffer;

	this->~ParticleIosAssetParam_0p0();

	NvParameters::destroy(this, traits, doDeallocateSelf, refCount, buf);
}

const NvParameterized::DefinitionImpl* ParticleIosAssetParam_0p0::getParameterDefinitionTree(void)
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

const NvParameterized::DefinitionImpl* ParticleIosAssetParam_0p0::getParameterDefinitionTree(void) const
{
	ParticleIosAssetParam_0p0* tmpParam = const_cast<ParticleIosAssetParam_0p0*>(this);

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

NvParameterized::ErrorType ParticleIosAssetParam_0p0::getParameterHandle(const char* long_name, Handle& handle) const
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

NvParameterized::ErrorType ParticleIosAssetParam_0p0::getParameterHandle(const char* long_name, Handle& handle)
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

void ParticleIosAssetParam_0p0::getVarPtr(const Handle& handle, void*& ptr, size_t& offset) const
{
	ptr = getVarPtrHelper(&ParamLookupTable[0], const_cast<ParticleIosAssetParam_0p0::ParametersStruct*>(&parameters()), handle, offset);
}


/* Dynamic Handle Indices */

void ParticleIosAssetParam_0p0::freeParameterDefinitionTable(NvParameterized::Traits* traits)
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

void ParticleIosAssetParam_0p0::buildTree(void)
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

	// Initialize DefinitionImpl node: nodeIndex=1, longName="particleType"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[1];
		ParamDef->init("particleType", TYPE_REF, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("INCLUDED", uint64_t(1), true);
		ParamDefTable[1].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("INCLUDED", uint64_t(1), true);
		HintTable[1].init("longDescription", "ParticleSystem: generic particle system; ParticleFluid: SPH fluid particle system. \n\nThe generic particle system provides basic particle motion and collision with rigid actors. \nIt can be used for objects that require collisions against the environment but for whom inter-object \ninteration may be neglected. Examples might include items of small debris, sparks or leaves. \n\nThe SPH fluid particle system can be used for fluid effects that require approximate incompressibility\n and flowing behavior, such as liquids or fog and smoke filling up a volume\n", true);
		HintTable[2].init("shortDescription", "Particle system types", true);
		ParamDefTable[1].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */


		static const char* const RefVariantVals[] = { "SimpleParticleSystemParams", "FluidParticleSystemParams" };
		ParamDefTable[1].setRefVariantVals((const char**)RefVariantVals, 2);



	}

	// Initialize DefinitionImpl node: nodeIndex=2, longName="maxParticleCount"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[2];
		ParamDef->init("maxParticleCount", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("min", uint64_t(0), true);
		ParamDefTable[2].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("min", uint64_t(0), true);
		HintTable[1].init("shortDescription", "Maximum particle count", true);
		ParamDefTable[2].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=3, longName="particleRadius"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[3];
		ParamDef->init("particleRadius", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("gameScale", "true", true);
		HintTable[1].init("min", uint64_t(0), true);
		ParamDefTable[3].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("gameScale", "true", true);
		HintTable[1].init("longDescription", "Query the authored radius of the instanced objects simulated by this IOS.  Emitters need this\nvalue for volume fill effects and an IOFX may need it for rendering purposes\n", true);
		HintTable[2].init("min", uint64_t(0), true);
		HintTable[3].init("shortDescription", "Particle radius", true);
		ParamDefTable[3].setHints((const NvParameterized::Hint**)HintPtrTable, 4);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=4, longName="maxInjectedParticleCount"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[4];
		ParamDef->init("maxInjectedParticleCount", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("min", uint64_t(0), true);
		ParamDefTable[4].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("longDescription", "The maximum number of new particles to be spawned on each frame. Use values >1 to provide the absolute value,\nor 0 <= x <= 1 to provide the percentage rate to overall number of particles. \n", true);
		HintTable[1].init("min", uint64_t(0), true);
		HintTable[2].init("shortDescription", "Maximum number of newly created objects on each frame", true);
		ParamDefTable[4].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=5, longName="maxMotionDistance"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[5];
		ParamDef->init("maxMotionDistance", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Max distance a particle can travel in a single simulation step\n", true);
		HintTable[1].init("shortDescription", "Max motion distance", true);
		ParamDefTable[5].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=6, longName="contactOffset"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[6];
		ParamDef->init("contactOffset", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Specifies a skin around the particles within which contacts will be generated\n\nObjects that come within contactOffset distance of the particles will count as being in contact (the contactOffset\nof the other object has no influence). The contactOffset has to be greater than zero and also be greater than the\nparticle systems restOffset. Having a contactOffset bigger than the restOffset is important to avoid jittering and sticking.\nThe contactOffset needs to be positive and the sum maxMotionDistance + contactOffset must not be higher than gridSize.\n\n", true);
		HintTable[1].init("shortDescription", "Contact offset", true);
		ParamDefTable[6].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=7, longName="restOffset"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[7];
		ParamDef->init("restOffset", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Specifies an offset at which particles will come to rest relative to an objects surface\n\nParticles will maintain a distance equal to the restOffset to rigid bodies (the restOffset of the rigid body has no influence). \nIf the restOffset is zero the particles should rest exactly on the object surface. \n\nThe restOffset can alternatively be specified per particle. However the per particle restOffset needs to be smaller or equal \nto the PxParticleBaseDesc.restOffset.\n", true);
		HintTable[1].init("shortDescription", "Rest offset", true);
		ParamDefTable[7].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=8, longName="gridSize"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[8];
		ParamDef->init("gridSize", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "This parameter controls the parallelization of the particle system.\n\nThe spatial domain is divided into equal sized cubes, aligned in a grid.\n\nThe parameter given defines the scale of the grid. The sdk may internally choose\na different, larger value which can be queried with PxParticleBase.getGridSize(). Therefore the parameter \nhas to be considered as a hint only. \n	\nLarge values will have a negative effect on performance, while too small values are problematic\ndue to spatial data structure buffer limits. Balancing this value is important to achieve a good effect\nwhile maintaining good performance.\n", true);
		HintTable[1].init("shortDescription", "Grid size", true);
		ParamDefTable[8].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=9, longName="damping"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[9];
		ParamDef->init("damping", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "It generally reduces the velocity of the particles. Setting the damping to 0 will leave the \nparticles unaffected.\n", true);
		HintTable[1].init("shortDescription", "Velocity damping constant", true);
		ParamDefTable[9].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=10, longName="externalAcceleration"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[10];
		ParamDef->init("externalAcceleration", TYPE_VEC3, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Acceleration (m/s^2) applied to all particles at all time steps.\n\nUseful to simulate smoke or fire.\nThis acceleration is additive to the scene gravity. The scene gravity can be turned off \nfor the particle system, using the flag PxActorFlag::eDISABLE_GRAVITY.\n", true);
		HintTable[1].init("shortDescription", "External acceleration", true);
		ParamDefTable[10].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=11, longName="projectionPlaneNormal"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[11];
		ParamDef->init("projectionPlaneNormal", TYPE_VEC3, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "This parameter is only used if\nPxParticleBaseFlag::ePROJECT_TO_PLANE is set.\n\nTogether with the parameter #projectionPlaneDistance a plane is formed. For each point p on the\nplane the following equation has to hold:\n	(projectionPlaneNormal.x * p.x)  +  (projectionPlaneNormal.y * p.y)  +  (projectionPlaneNormal.z * p.z)  +  projectionPlaneDistance = 0\n", true);
		HintTable[1].init("shortDescription", "The normal of the plane the particles are projected to", true);
		ParamDefTable[11].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=12, longName="projectionPlaneDistance"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[12];
		ParamDef->init("projectionPlaneDistance", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "This parameter is only used if\nPxParticleBaseFlag::ePROJECT_TO_PLANE is set.\n\nTogether with the parameter #projectionPlaneNormal a plane is formed. For each point p on the\nplane the following equation has to hold:\n	(projectionPlaneNormal.x * p.x)  +  (projectionPlaneNormal.y * p.y)  +  (projectionPlaneNormal.z * p.z)  +  projectionPlaneDistance = 0\n", true);
		HintTable[1].init("shortDescription", "Constant term of the plane the particles are projected to", true);
		ParamDefTable[12].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=13, longName="particleMass"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[13];
		ParamDef->init("particleMass", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "The mass is used to translate force or impulses to velocities for collisions \n(in case PxParticleBaseFlag::eCOLLISION_TWOWAY is set) or for particle updates.\n", true);
		HintTable[1].init("shortDescription", "Mass of a particle", true);
		ParamDefTable[13].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=14, longName="restitution"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[14];
		ParamDef->init("restitution", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("max", uint64_t(1), true);
		HintTable[1].init("min", uint64_t(0), true);
		ParamDefTable[14].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("longDescription", "A value of 0 causes the colliding particle to get a zero velocity component in the\ndirection of the surface normal of the shape at the collision location; i.e.\nit will not bounce.\n\nA value of 1 causes a particle's velocity component in the direction of the surface normal to invert;\ni.e. the particle bounces off the surface with the same velocity magnitude as it had before collision. \n(Caution: values near 1 may have a negative impact on stability)\n", true);
		HintTable[1].init("max", uint64_t(1), true);
		HintTable[2].init("min", uint64_t(0), true);
		HintTable[3].init("shortDescription", "Restitution coefficient", true);
		ParamDefTable[14].setHints((const NvParameterized::Hint**)HintPtrTable, 4);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=15, longName="dynamicFriction"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[15];
		ParamDef->init("dynamicFriction", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("max", uint64_t(1), true);
		HintTable[1].init("min", uint64_t(0), true);
		ParamDefTable[15].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("longDescription", "A value of 1 will cause the particle to lose its velocity tangential to\nthe surface normal of the shape at the collision location; i.e. it will not slide\nalong the surface.\n\nA value of 0 will preserve the particle's velocity in the tangential surface\ndirection; i.e. it will slide without resistance on the surface.\n", true);
		HintTable[1].init("max", uint64_t(1), true);
		HintTable[2].init("min", uint64_t(0), true);
		HintTable[3].init("shortDescription", "Dynamic friction", true);
		ParamDefTable[15].setHints((const NvParameterized::Hint**)HintPtrTable, 4);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=16, longName="staticFriction"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[16];
		ParamDef->init("staticFriction", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "The value defines a limit at which a particle starts to slide along a surface depending on\nrelative tangential and normal velocity components of the particle.  \n\nA value of 0 will turn off static friction.\n", true);
		HintTable[1].init("shortDescription", "Static friction", true);
		ParamDefTable[16].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=17, longName="simulationFilterData"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[17];
		ParamDef->init("simulationFilterData", TYPE_STRING, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Data for collision filtering", true);
		ParamDefTable[17].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=18, longName="CollisionTwoway"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[18];
		ParamDef->init("CollisionTwoway", TYPE_BOOL, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "In either case, particles are influenced by colliding rigid bodies.\nIf eCOLLISION_TWOWAY is not set, rigid bodies are not influenced by \ncolliding particles. Use PxParticleBaseDesc.particleMass to\ncontrol the strength of the feedback force on rigid bodies.\n		\nSwitching this flag while the particle system is part of a scene will fail.\n", true);
		HintTable[1].init("shortDescription", "Enable/disable two way collision of particles with the rigid body scene", true);
		ParamDefTable[18].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=19, longName="CollisionWithDynamicActors"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[19];
		ParamDef->init("CollisionWithDynamicActors", TYPE_BOOL, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "The flag can be turned off as a hint to the sdk to save memory space and \nexecution time. In principle any collisions can be turned off using filters\nbut without or reduced memory and performance benefits.\n\nSwitching this flag while the particle system is part of a scene might have a negative impact on performance.\n", true);
		HintTable[1].init("shortDescription", "Enable/disable collision of particles with dynamic actors", true);
		ParamDefTable[19].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=20, longName="Enable"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[20];
		ParamDef->init("Enable", TYPE_BOOL, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Enables collision with static shapes", true);
		ParamDefTable[20].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=21, longName="ProjectToPlane"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[21];
		ParamDef->init("ProjectToPlane", TYPE_BOOL, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "This can be used to build 2D applications, for instance. The projection\nplane is defined by the parameter PxParticleBaseDesc.projectionPlaneNormal and PxParticleBaseDesc.projectionPlaneDistance.\n", true);
		HintTable[1].init("shortDescription", "Whether the particles of this particle system should be projected to a plane", true);
		ParamDefTable[21].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=22, longName="PerParticleRestOffset"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[22];
		ParamDef->init("PerParticleRestOffset", TYPE_BOOL, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Per particle rest offsets can be used to support particles having different sizes with \nrespect to collision.\n		\nThis configuration cannot be changed after the particle system was created.\n", true);
		HintTable[1].init("shortDescription", "Enable/disable per particle rest offsets", true);
		ParamDefTable[22].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=23, longName="PerParticleCollisionCacheHint"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[23];
		ParamDef->init("PerParticleCollisionCacheHint", TYPE_BOOL, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Per particle collision caches improve collision detection performance at the cost of increased memory usage.\n\nSwitching this flag while the particle system is part of a scene might have a negative impact on performance.\n", true);
		HintTable[1].init("shortDescription", "Ename/disable per particle collision caches", true);
		ParamDefTable[23].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=24, longName="useGPU"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[24];
		ParamDef->init("useGPU", TYPE_BOOL, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "This configuration cannot be changed while the particle system is part of a scene.\nSwitching this flag while the particle system is part of a scene will fail. \n", true);
		HintTable[1].init("shortDescription", "Enable/disable GPU acceleration", true);
		ParamDefTable[24].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=25, longName="PositionBuffer"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[25];
		ParamDef->init("PositionBuffer", TYPE_BOOL, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Enables reading particle positions from the SDK", true);
		ParamDefTable[25].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=26, longName="VelocityBuffer"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[26];
		ParamDef->init("VelocityBuffer", TYPE_BOOL, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Enables reading particle velocities from the SDK", true);
		ParamDefTable[26].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=27, longName="RestOffsetBuffer"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[27];
		ParamDef->init("RestOffsetBuffer", TYPE_BOOL, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Per particle rest offsets are never changed by the simulation.				\n", true);
		HintTable[1].init("shortDescription", "Enables reading per particle rest offsets from the SDK", true);
		ParamDefTable[27].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=28, longName="FlagsBuffer"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[28];
		ParamDef->init("FlagsBuffer", TYPE_BOOL, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Enables reading particle flags from the SDK", true);
		ParamDefTable[28].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=29, longName="CollisionNormalBuffer"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[29];
		ParamDef->init("CollisionNormalBuffer", TYPE_BOOL, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Enables reading particle collision normals from the SDK", true);
		ParamDefTable[29].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=30, longName="DensityBuffer"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[30];
		ParamDef->init("DensityBuffer", TYPE_BOOL, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Enables reading particle densities from the SDK. (PxParticleFluid only)", true);
		ParamDefTable[30].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// SetChildren for: nodeIndex=0, longName=""
	{
		static Definition* Children[30];
		Children[0] = PDEF_PTR(1);
		Children[1] = PDEF_PTR(2);
		Children[2] = PDEF_PTR(3);
		Children[3] = PDEF_PTR(4);
		Children[4] = PDEF_PTR(5);
		Children[5] = PDEF_PTR(6);
		Children[6] = PDEF_PTR(7);
		Children[7] = PDEF_PTR(8);
		Children[8] = PDEF_PTR(9);
		Children[9] = PDEF_PTR(10);
		Children[10] = PDEF_PTR(11);
		Children[11] = PDEF_PTR(12);
		Children[12] = PDEF_PTR(13);
		Children[13] = PDEF_PTR(14);
		Children[14] = PDEF_PTR(15);
		Children[15] = PDEF_PTR(16);
		Children[16] = PDEF_PTR(17);
		Children[17] = PDEF_PTR(18);
		Children[18] = PDEF_PTR(19);
		Children[19] = PDEF_PTR(20);
		Children[20] = PDEF_PTR(21);
		Children[21] = PDEF_PTR(22);
		Children[22] = PDEF_PTR(23);
		Children[23] = PDEF_PTR(24);
		Children[24] = PDEF_PTR(25);
		Children[25] = PDEF_PTR(26);
		Children[26] = PDEF_PTR(27);
		Children[27] = PDEF_PTR(28);
		Children[28] = PDEF_PTR(29);
		Children[29] = PDEF_PTR(30);

		ParamDefTable[0].setChildren(Children, 30);
	}

	mBuiltFlag = true;

}
void ParticleIosAssetParam_0p0::initStrings(void)
{
	simulationFilterData.isAllocated = true;
	simulationFilterData.buf = NULL;
}

void ParticleIosAssetParam_0p0::initDynamicArrays(void)
{
}

void ParticleIosAssetParam_0p0::initDefaults(void)
{

	freeStrings();
	freeReferences();
	freeDynamicArrays();
	maxParticleCount = uint32_t(32767);
	particleRadius = float(1.0f);
	maxInjectedParticleCount = float(0.1);
	maxMotionDistance = float(0.06);
	contactOffset = float(0.008);
	restOffset = float(0.004);
	gridSize = float(0.6);
	damping = float(0);
	externalAcceleration = physx::PxVec3(init(0, 0, 0));
	projectionPlaneNormal = physx::PxVec3(init(0, 0, 1));
	projectionPlaneDistance = float(0);
	particleMass = float(0.001);
	restitution = float(0.5);
	dynamicFriction = float(0.05);
	staticFriction = float(0);
	CollisionTwoway = bool(0);
	CollisionWithDynamicActors = bool(1);
	Enable = bool(1);
	ProjectToPlane = bool(0);
	PerParticleRestOffset = bool(0);
	PerParticleCollisionCacheHint = bool(1);
	useGPU = bool(0);
	PositionBuffer = bool(1);
	VelocityBuffer = bool(0);
	RestOffsetBuffer = bool(0);
	FlagsBuffer = bool(1);
	CollisionNormalBuffer = bool(0);
	DensityBuffer = bool(0);

	initDynamicArrays();
	initStrings();
	initReferences();
}

void ParticleIosAssetParam_0p0::initReferences(void)
{
	particleType = NULL;

}

void ParticleIosAssetParam_0p0::freeDynamicArrays(void)
{
}

void ParticleIosAssetParam_0p0::freeStrings(void)
{

	if (simulationFilterData.isAllocated && simulationFilterData.buf)
	{
		mParameterizedTraits->strfree((char*)simulationFilterData.buf);
	}
}

void ParticleIosAssetParam_0p0::freeReferences(void)
{
	if (particleType)
	{
		particleType->destroy();
	}

}

} // namespace parameterized
} // namespace nvidia
