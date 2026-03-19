/**********************************************************************************************************************
 * \file gfx_core.h
 *
 * \author MarcoAAG
 *
 * \brief This file includes the
 *
 ******************************************************************************
 * @attention
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 *********************************************************************************************************************/

#ifndef GFX_CORE_H
#define GFX_CORE_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void GFXCORE_SetPixel(uint8_t* p_frameBuffer, uint16_t u_posX, uint16_t u_posY);
void GFXCORE_ClearPixel(uint8_t* p_frameBuffer, uint16_t u_posX, uint16_t u_posY);

#ifdef __cplusplus
}
#endif

#endif /* GFX_CORE_H */