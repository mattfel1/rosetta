/*===============================================================*/
/*                                                               */
/*                         rendering.h                           */
/*                                                               */
/*                 C++ kernel for 3D Rendering                   */
/*                                                               */
/*===============================================================*/

#ifndef __RENDERING_H__
#define __RENDERING_H__

#include "typedefs.h"

void rendering(bit32 input[3 * MAX_NUM_TRIS], bit32 output[NUM_FB], int num_3d_triangles);

#endif

