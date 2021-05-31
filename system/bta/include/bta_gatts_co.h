/******************************************************************************
 *
 *  Copyright 2010-2012 Broadcom Corporation
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at:
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 ******************************************************************************/

/******************************************************************************
 *
 *  This is the interface file for BTA GATT server call-out functions.
 *
 ******************************************************************************/
#ifndef BTA_GATTS_CO_H
#define BTA_GATTS_CO_H

#include "bta/include/bta_gatt_api.h"

/*******************************************************************************
 *
 * Function         bta_gatts_co_update_handle_range
 *
 * Description      This callout function is executed by GATTS when a GATT
 *                  server handle range ios to be added or removed.
 *
 * Parameter        is_add: true is to add a handle range; otherwise is to
 *                          delete.
 *                  p_hndl_range: handle range.
 *
 * Returns          void.
 *
 ******************************************************************************/
extern void bta_gatts_co_update_handle_range(
    bool is_add, tBTA_GATTS_HNDL_RANGE* p_hndl_range);
#endif /* BTA_GATTS_CO_H */
