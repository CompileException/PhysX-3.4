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
// Copyright (c) 2008-2014 NVIDIA Corporation. All rights reserved.
// Copyright (c) 2004-2008 AGEIA Technologies, Inc. All rights reserved.
// Copyright (c) 2001-2004 NovodeX AG. All rights reserved.  

#include "PxPhysicsAPI.h"
#include "extensions/PxExtensionsAPI.h"
#include "SceneCrab.h"
#include "SimScene.h"
#include "CompoundCreator.h"
#include <GL/glut.h>

#include "PxTkStream.h"
#include "PxTkFile.h"
using namespace PxToolkit;
// if enabled: runs the crab AI in sync, not as a parallel task to physx.
#define DEBUG_RENDERING 0

bool mSpawnActive = false;


SceneCrab::SceneCrab(PxPhysics* pxPhysics, PxCooking *pxCooking, bool isGrb,
	Shader *defaultShader, const char *resourcePath, float slowMotionFactor) :
	SceneKapla(pxPhysics, pxCooking, isGrb, defaultShader, resourcePath, slowMotionFactor)
{
	
	mNbCrabsX = 20;
	mNbCrabsZ = 20;
	mNbSuperCrabs = 2;
}

void SceneCrab::onInit(PxScene* pxScene)
{
	SceneKapla::onInit(pxScene);

	mCrabManager.setSceneCrab(this);
	mCrabManager.initialize(mNbCrabsX*mNbCrabsZ + mNbSuperCrabs);
	createTerrain("terrain_ll2.bmp", "", 60.f, true);
	const PxVec3 dims(0.08f, 0.25f, 1.0f);
	PxMaterial* towerMaterial = mPxPhysics->createMaterial(0.5f, 0.25f, 0.1f);
	ShaderMaterial mat;
	mat.init();

	PxFilterData queryData;
	queryData.word0 = 128;

	createCrabs();

	createCylindricalTower(48, 3.6f, 3.6f, 15, dims, PxVec3(-25.f, -30.5f, -85.f), towerMaterial, mat, PxFilterData(), queryData, 0.2f);
	createCylindricalTower(48, 3.6f, 3.6f, 15, dims, PxVec3(-5.f, -30.5f, -85.f), towerMaterial, mat, PxFilterData(), queryData, 0.2f);
	createCylindricalTower(48, 3.6f, 3.6f, 15, dims, PxVec3(15.f, -30.5f, -85.f), towerMaterial, mat, PxFilterData(), queryData, 0.2f);
	createCylindricalTower(48, 3.6f, 3.6f, 15, dims, PxVec3(35.f, -30.5f, -85.f), towerMaterial, mat, PxFilterData(), queryData, 0.2f);
	createCylindricalTower(48, 3.6f, 3.6f, 15, dims, PxVec3(55.f, -30.5f, -85.f), towerMaterial, mat, PxFilterData(), queryData, 0.2f);
	//createCylindricalTower(64, 3.6f, 3.6f, 15, dims, PxVec3(-75.f, -30.65f, -95.f), towerMaterial, mat, PxFilterData(), queryData, 0.2f);
	//createCylindricalTower(64, 3.6f, 3.6f, 15, dims, PxVec3(-55.f, -30.65f, -95.f), towerMaterial, mat, PxFilterData(), queryData, 0.2f);
	//createCylindricalTower(64, 3.6f, 3.6f, 15, dims, PxVec3(-35.f, -30.65f, -95.f), towerMaterial, mat, PxFilterData(), queryData, 0.2f);
	/*createCylindricalTower(64, 3.6f, 3.6f, 15, dims, PxVec3(55.f, -1.10f, 55.f), towerMaterial, mat, PxFilterData(), queryData, 0.2f);*/
	
}

SceneCrab::~SceneCrab()
{
	
}

void SceneCrab::setScene(PxScene* scene)
{
	SceneKapla::setScene(scene);
	mCrabManager.setScene(scene);
}

void SceneCrab::createCrabs()
{
	PxVec3 startCrabPos(-75.f, 1.f, -75.f);

	PxReal scale = 0.8f;
	PxReal crabDepth = 2.0f;
	PxReal legMass = 0.03f;

	for (PxU32 i = 0; i < mNbCrabsX; ++i)
	{
		PxVec3 crabPos = startCrabPos + PxVec3(10.f*i, 0, 0);
		for (PxU32 j = 0; j < mNbCrabsZ; ++j)
		{
			//const PxU32 index = i*mNbCrabsX + j;
			crabPos.z += 10.f;
			mCrabManager.createCrab(crabPos, crabDepth, scale, legMass, 4);
		}
		
	}

	startCrabPos = PxVec3(-20.f, 1.f, -20.f);
	crabDepth = 8.f;
	legMass = 0.3f;
	scale = 2.f;
	for (PxU32 i = 0; i < mNbSuperCrabs; ++i)
	{
		PxVec3 crabPos = startCrabPos + PxVec3(-20.f*i, 0, -20.f*i);
		//super crabs
		mCrabManager.createCrab(crabPos, crabDepth, scale, legMass, 8);
	}
}

// ----------------------------------------------------------------------------------------------
void SceneCrab::duringSim(float dt) 
{
	PxSceneWriteLock scopedLock(getScene());
	mCrabManager.update(dt);
}

void SceneCrab::syncAsynchronousWork()
{
	mCrabManager.syncWork();
}

void SceneCrab::handleKeyDown(unsigned char key, int x, int y)
{

	if (key == 'k' || key == 'K')
	{

		if (!mSpawnActive)
		{
			mSpawnActive = true;
			PxReal scale = 0.8f;
			PxReal crabDepth = 2.0f;
			PxReal legMass = 0.03f;

			//Raycast against the static world to get a spawn position....

			PxRaycastBuffer hit;

			PxQueryFilterData fd; fd.flags |= PxQueryFlag::eSTATIC;

			PxVec3 orig, dir;
			getMouseRay(mMouseX, mMouseY, orig, dir);

			if (mSimScene->getScene()->raycast(mCameraPos, dir, 1000.f, hit, PxHitFlags(PxHitFlag::eDEFAULT), fd))
			{
				//Spawn a walker...
				for (PxU32 a = 0; a < 1; ++a)
				{
					for (PxU32 b = 0; b < 1; ++b)
					{
						mCrabManager.createCrab(hit.block.position + PxVec3(a*10.f, 0.f, b * 10.f), crabDepth, scale, legMass, 4);
					}
				}

			}
		}
	}

	SceneKapla::handleKeyDown(key, x, y);
}

void SceneCrab::handleKeyUp(unsigned char key, int x, int y)
{
	if (key == 'k' || key == 'K')
	{
		mSpawnActive = false;
	}


	SceneKapla::handleKeyUp(key, x, y);
}
