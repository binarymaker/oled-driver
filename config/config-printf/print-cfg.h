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

#ifndef PRINT_12ad8161_fc71_11e9_b910_74dfbf0d835a
#define PRINT_12ad8161_fc71_11e9_b910_74dfbf0d835a

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "print.h"
/* Exported types ------------------------------------------------------------*/
typedef enum
{
    PRINT_CHANNEL_BUFFER,
    PRINT_CHANNEL_USART,
    NUM_PRINT_CHANNEL       
} PrintChannel_et;
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

void
PRINT_ChannelSelect(PrintChannel_et channel);

void
PRINT_PutChar(char ch);

#ifdef __cplusplus
}
#endif

#endif /* PRINT_12ad8161_fc71_11e9_b910_74dfbf0d835a */

