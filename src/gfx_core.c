/**********************************************************************************************************************
 * \file gfx_core.c
 *
 * \author MarcoAAG
 *
 * \brief This file includes the OLED lib
 *
 ******************************************************************************
 * @attention
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 *********************************************************************************************************************/

/* ============================================================================================== */
/*                                         Include Files                                          */
/* ============================================================================================== */
#include <config.h>
#include <gfx_core.h>

void GFXCORE_SetPixel(uint8_t* p_frameBuffer, uint16_t u_posX, uint16_t u_posY)
{
  p_frameBuffer[u_posX + (u_posY / sizeof(uint8_t)) * DISPLAY_WIDTH] |= 1u << (u_posY % sizeof(uint8_t));
}

void GFXCORE_ClearPixel(uint8_t* p_frameBuffer, uint16_t u_posX, uint16_t u_posY)
{
  p_frameBuffer[u_posX + (u_posY / sizeof(uint8_t)) * DISPLAY_WIDTH] &= ~(1u << (u_posY % sizeof(uint8_t)));
}