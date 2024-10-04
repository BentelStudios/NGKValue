/*
=========================================
	QCAMERA.H TYPE
=========================================
*/
#pragma once

#ifndef QCAMERA_H
#define QCAMERA_H

#endif

class QCamera {
public:

	enum camera_projection_mode {
		cpm_normal = 0,
		cpm_wireframe = 1,
		cpm_cull
	};

	#define GL_DRAW_MODE 000x100
	#define GL_CAMERA 000x200
	#define GL_NORMAL_PROJECTION 000x300
	#define GL_WIREFRAME_PROJECTION 000x400
	#define GL_CULL_PROJECTION 000x500

	/*---set----*/
	int Q__CameraId = 0;
	float QCameraFrames = 000;
	float QCameraFNear = 45.0f;

};
