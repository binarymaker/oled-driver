/**\cond
  ******************************************************************************
  * ______  _                             ___  ___        _               
  * | ___ \(_)                            |  \/  |       | |              
  * | |_/ / _  _ __    __ _  _ __  _   _  | .  . |  __ _ | | __ ___  _ __ 
  * | ___ \| || '_ \  / _` || '__|| | | | | |\/| | / _` || |/ // _ \| '__|
  * | |_/ /| || | | || (_| || |   | |_| | | |  | || (_| ||   <|  __/| |   
  * \____/ |_||_| |_| \__,_||_|    \__, | \_|  |_/ \__,_||_|\_\\___||_|   
  *                                 __/ |                                 
  *                                |___/                                  
  *                                                                       
  * Copyright (C) 2019 Binary Maker - All Rights Reserved
  *
  * This program and the accompanying materials are made available
  * under the terms described in the LICENSE file which accompanies
  * this distribution.
  * Written by Binary Maker <https://github.com/binarymaker>
  ******************************************************************************
  \endcond*/

#ifndef OLED_DISPLAY_49460442_060b_11ea_92cf_705a0f25cb51
#define OLED_DISPLAY_49460442_060b_11ea_92cf_705a0f25cb51

#ifdef __cplusplus
 extern "C" {
#endif

/**
 * \brief Source file version tag
 *        
 *        version info: [15:8] main [7:0] beta
 */
#define __OLED_DISPLAY_VERSION      (0x0001u)

/* Includes ------------------------------------------------------------------*/
#include "oled-display-cfg.h"
#include "font.h"
   
#if defined(OLED_DISPLAY_PRINTF_REDIRECT)
#include "print.h"
#endif
/* Exported types ------------------------------------------------------------*/
typedef enum
{
  OLED_DISPLAY_COLOUR_BLACK,
  OLED_DISPLAY_COLOUR_WHITE
}OLED_DISPLAY_COLOUR_et;

/* Exported constants --------------------------------------------------------*/
extern const unsigned char Font_6x8[];
extern const unsigned char Segment_25x40[];
/* Exported macro ------------------------------------------------------------*/
#if defined(OLED_DISPLAY_PRINTF_REDIRECT)
#define OLED_DISPLAY_Printf(_F, ...)  {                                        \
                                PRINT_OutFunction(OLED_DISPLAY_Write);         \
                                PRINT_Printf((uint8_t*)(_F), ##__VA_ARGS__);   \
                               }
#else
#define OLED_DISPLAY_Printf(_F, ...)
#warning (Printf not implimeted)            
#endif
/* Exported functions ------------------------------------------------------- */

void
OLED_DISPLAY_Init();

void 
OLED_DISPLAY_FillScreen(uint8_t pattern);

void 
OLED_DISPLAY_SetPointer(uint8_t seg, uint8_t pag);

void
OLED_DISPLAY_FontSelect(const unsigned char* font, 
                       uint8_t width, 
                       uint8_t height,
                       uint8_t startChar,
                       uint8_t endChar
                      );

void 
OLED_DISPLAY_Write(uint8_t ch);

void
OLED_DISPLAY_WriteString(char* str);

void
OLED_DISPLAY_Icon(const unsigned char* img, uint8_t width_px_u8, uint8_t height_px_u8);

void
OLE_DISPLAY_PrintColour(OLED_DISPLAY_COLOUR_et colour);

#ifdef __cplusplus
}
#endif

#endif /* OLED_DISPLAY_49460442_060b_11ea_92cf_705a0f25cb51 */

