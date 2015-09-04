/*
 * Copyright (c) 2013, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of Freescale Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "stdint.h"
#include "flash_densities.h"
#include "fsl_device_registers.h"

////////////////////////////////////////////////////////////////////////////////
// Variables
////////////////////////////////////////////////////////////////////////////////

// See flash_densities.h for documentation of this table
//! @note This table only applies to Kinetis L-series.
const uint16_t kFlashDensities[] = {
#if defined(KL03Z4_SERIES)
        2,  // 0 - 8192
        4,  // 1 - 16384
        0,  // 2 - reserved
        8,  // 3 - 32768
        0,  // 4 - reserved
        16, // 5 - 65536
        0,  // 6 - reserved
        32, // 7 - 131072
        0,  // 8 - reserved
        64, // 9 - 262144
        0,  // 0xa - reserved
        0,  // 0xb - reserved
        0,  // 0xc - reserved
        0,  // 0xd - reserved
        0,  // 0xe - reserved
        8,  // 0x0f - 32768
#elif defined(KL27Z4_SERIES)
        2,      // 0 - 8192
        4,      // 1 - 16384
        0,      // 2 - reserved
        8,      // 3 - 32768
        0,      // 4 - reserved
        16,     // 5 - 65536
        0,      // 6 - reserved
        32,     // 7 - 131072
        0,      // 8 - reserved
        64,     // 9 - 262144
        0,      // 0xa - reserved
        0,      // 0xb - reserved
        0,      // 0xc - reserved
        0,      // 0xd - reserved
        0,      // 0xe - reserved
        16,     // 0x0f - 65536    
#elif defined(KL28Z7_SERIES)
        0,  // 0 - reserved
        0,  // 1 - reserved
        0,  // 2 - reserved
        0,  // 3 - reserved
        0,  // 4 - reserved
        16, // 5 - 65536
        0,  // 6 - reserved
        32, // 7 - 131072
        0,  // 8 - reserved
        64, // 9 - 262144
        0,  // 0xa - reserved
        128,// 0xb - 524288
        0,  // 0xc - reserved
        0,  // 0xd - reserved
        0,  // 0xe - reserved
        128,// 0x0f - 524288, which is the maximum flash size supported by KL28						
#elif defined(KL43Z4_SERIES)
        2,  // 0 - 8192
        4,  // 1 - 16384
        0,  // 2 - reserved
        8,  // 3 - 32768
        0,  // 4 - reserved
        16, // 5 - 65536
        0,  // 6 - reserved
        32, // 7 - 131072
        0,  // 8 - reserved
        64, // 9 - 262144
        0,  // 0xa - reserved
        0,  // 0xb - reserved
        0,  // 0xc - reserved
        0,  // 0xd - reserved
        0,  // 0xe - reserved
        64, // 0x0f - 262144, which is the maximum flash size supported by KL43
#elif defined(KL81Z7_SERIES)
        0,  // 0 - reserved
        0,  // 1 - reserved
        0,  // 2 - reserved
        8,  // 3 - 32kB
        0,  // 4 - reserved
        16, // 5 - 64kB
        0,  // 6 - reserved
        32, // 7 - 128kB
        0,  // 8 - reserved
        64, // 9 - 256kB
        0,  // 0xa - reserved
        128,// 0xb - 512kB
        0,  // 0xc - reserved
        256,// 0xd - 1MB
        0,  // 0xe - reserved
        32, // 0xf - 128kB
#elif defined(KW40Z4_SERIES)
        0,  // 0 - reserved
        0,  // 1 - reserved
        0,  // 2 - reserved
        0,  // 3 - reserved
        0,  // 4 - reserved
        0,  // 5 - reserved
        0,  // 6 - reserved
        0,  // 7 - reserved
        0,  // 8 - reserved
        0,  // 9 - reserved
        0,  // 0xa - reserved
        0,  // 0xb - reserved
        0,  // 0xc - reserved
        0,  // 0xd - reserved
        0,  // 0xe - reserved
        40, // 0x0f - 160kB 
#else
        2,  // 0 - 8192
        4,  // 1 - 16384
        0,  // 2 - reserved
        8,  // 3 - 32768
        0,  // 4 - reserved
        16, // 5 - 65536
        0,  // 6 - reserved
        32, // 7 - 131072
        0,  // 8 - reserved
        64, // 9 - 262144
        0,  // 0xa - reserved
        0,  // 0xb - reserved
        0,  // 0xc - reserved
        0,  // 0xd - reserved
        0,  // 0xe - reserved
        32, // 0xf - 131072
#endif
    };

////////////////////////////////////////////////////////////////////////////////
// EOF
////////////////////////////////////////////////////////////////////////////////

