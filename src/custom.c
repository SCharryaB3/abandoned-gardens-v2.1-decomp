#include "custom.h"

/*
 * AGV2.1 custom functions.
 *
 * Keep implementations here and their public prototypes in custom.h.
 */

/* RAM: 0x807E7CCC
 * The original routine stores a0 to 0(sp), then returns 13 in v0.
 * This C reconstruction preserves the return behavior. The caller-stack
 * store is not represented here; revisit it if matching that side effect
 * becomes necessary.
 */
s32 func_807E7CCC(s32 arg0) {
    (void)arg0;
    return 13;
}
