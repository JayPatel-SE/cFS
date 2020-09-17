/*
 *  NASA Docket No. GSC-18,370-1, and identified as "Operating System Abstraction Layer"
 *
 *  Copyright (c) 2019 United States Government as represented by
 *  the Administrator of the National Aeronautics and Space Administration.
 *  All Rights Reserved.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

/*
 * File:  generic_freertos_bsp_internal.h
 *
 * Purpose:
 *   Header file for internal data to the FREERTOS BSP
 */

#ifndef GENERIC_FREERTOS_BSP_INTERNAL_H_
#define GENERIC_FREERTOS_BSP_INTERNAL_H_

#include "bsp-impl.h"

/*
** BSP types
*/
typedef struct
{
    bool    EnableTermControl;    /**< Will be set "true" when invoked from a TTY device, false otherwise */
} OS_BSP_GenericFreeRTOSGlobalData_t;

/*
 * Global Data object
 */
extern OS_BSP_GenericFreeRTOSGlobalData_t OS_BSP_GenericFreeRTOSGlobal;

#endif /* GENERIC_FREERTOS_BSP_INTERNAL_H_ */