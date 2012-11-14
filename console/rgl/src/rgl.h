/*  RetroArch - A frontend for libretro.
 *  RGL - An OpenGL subset wrapper library.
 *  Copyright (C) 2012 - Hans-Kristian Arntzen
 *  Copyright (C) 2012 - Daniel De Matteis
 * 
 *  RetroArch is free software: you can redistribute it and/or modify it under the terms
 *  of the GNU General Public License as published by the Free Software Found-
 *  ation, either version 3 of the License, or (at your option) any later version.
 *
 *  RetroArch is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *  PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with RetroArch.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _RGL_H
#define _RGL_H

#include "../include/export/RGL/rgl.h"
#include "../include/RGL/Types.h"
#include "../include/RGL/TypeUtils.h"
#include "../include/RGL/private.h"
#include "../include/RGL/Utils.h"
#include <string.h>
#include <math.h>
#include <limits.h>

#include <Cg/CgCommon.h>

void rglPsglPlatformInit( RGLinitOptions* options );
void rglPsglPlatformExit(void);

RGL_EXPORT RGLdevice*	rglPlatformCreateDeviceAuto( GLenum colorFormat, GLenum depthFormat, GLenum multisamplingMode );
RGL_EXPORT RGLdevice*	rglPlatformCreateDeviceExtended( const RGLdeviceParameters *parameters );
RGL_EXPORT GLfloat rglPlatformGetDeviceAspectRatio( const RGLdevice * device );

#endif