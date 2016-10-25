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
// Copyright (c) 2008-2016 NVIDIA Corporation. All rights reserved.
#ifndef _SAMPLE_SUBMARINE_INPUT_EVENT_IDS_H
#define _SAMPLE_SUBMARINE_INPUT_EVENT_IDS_H

#include <SampleBaseInputEventIds.h>

// InputEvents used by SampleSubmarine
enum SampleSubmarineInputEventIds
{
	SAMPLE_SUBMARINE_FIRST = NUM_SAMPLE_BASE_INPUT_EVENT_IDS,

	SUBMARINE_FORWARD,
	SUBMARINE_BACKWARD,
	SUBMARINE_FORWARD_BACKWARD,
	SUBMARINE_UP,
	SUBMARINE_DOWN,

	CRAB_FORWARD,
	CRAB_BACKWARD,
	CRAB_LEFT,
	CRAB_RIGHT,
	CRAB_FORWARD_BACKWARD,
	CRAB_LEFT_RIGHT,

	CAMERA_SWITCH ,
	SCENE_RESET ,

	NUM_SAMPLE_SUBMARINE_INPUT_EVENT_IDS,
};

#endif
