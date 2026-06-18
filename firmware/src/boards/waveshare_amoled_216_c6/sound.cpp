#include "../../hal/sound_hal.h"

// C6 AMOLED-2.16 audio amp enable is routed through an expander path that is
// not confirmed here, so keep audio silent for this board.

void sound_hal_init(void) {}
void sound_hal_tick(void) {}
void sound_hal_play_reset(void) {}
