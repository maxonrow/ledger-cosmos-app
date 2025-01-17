/*******************************************************************************
*   (c) 2020 Zondax GmbH
*
*  Licensed under the Apache License, Version 2.0 (the "License");
*  you may not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS,
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
********************************************************************************/

#pragma once
#include "zxerror.h"

#ifdef __cplusplus
extern "C" {
#endif

/// Return the number of items in the address view
zxerr_t addr_getNumItems(uint8_t *num_items);

/**
#define BIP44_0_DEFAULT     (0x80000000 | 0x2c)
#define BIP44_1_DEFAULT     (0x80000000 | 0x178)     // FIXME: Change derivation path
#define BIP44_2_DEFAULT     (0x80000000 | 0)
#define BIP44_3_DEFAULT     (0)
#define BIP44_4_DEFAULT     (0)
*/
/// Gets an specific item from the address view (including paging)
zxerr_t addr_getItem(int8_t displayIdx,
                     char *outKey, uint16_t outKeyLen,
                     char *outValue, uint16_t outValueLen,
                     uint8_t pageIdx, uint8_t *pageCount);

#ifdef __cplusplus
}
#endif
