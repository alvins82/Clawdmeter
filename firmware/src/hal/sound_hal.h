#pragma once

// Optional audio output. ES8311-equipped boards play a short PCM chime through
// the onboard speaker; boards without confirmed audio support provide no-op
// implementations.
//
// Playback is non-blocking: sound_hal_play_reset() only *queues* the chime and
// returns immediately; sound_hal_tick() (called every loop) advances the notes
// so the LVGL render loop never stalls.

void sound_hal_init(void);
void sound_hal_tick(void);
void sound_hal_play_reset(void);
