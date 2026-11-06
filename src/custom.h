#ifndef AGV2_CUSTOM_H
#define AGV2_CUSTOM_H

#include <ultra64.h>

/*
 * AGV2.1 custom function declarations.
 *
 * Add a prototype here whenever a custom function is implemented in
 * custom.c and called from another source file.
 */

/* RAM: 0x807E7CCC
 * Recovered behavior: returns 13 unconditionally.
 */
s32 func_807E7CCC(s32 arg0);

#endif /* AGV2_CUSTOM_H */
