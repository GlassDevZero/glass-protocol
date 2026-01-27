#ifndef GLASS_CORE_H
#define GLASS_CORE_H

#include <stdint.h>

// "GLAS" Magic Header to identify the protocol
#define GLASS_MAGIC_HEADER 0x474C4153 

struct GLASS_Packet {
    uint32_t timestamp;    // Sync time
    uint16_t sector_id;    // 0 = All, 1+ = Specific stadium sectors
    uint8_t  effect_mode;  // Visual effect ID
    uint8_t  r, g, b, w;   // Color data (RGBW)
    uint8_t  flags;        // Bit 0: 1 = Speed of Light (Instant), 0 = Audio Sync
    uint8_t  intensity;    // Brightness 0-100
    uint8_t  checksum;     // Data integrity check
};

#endif
