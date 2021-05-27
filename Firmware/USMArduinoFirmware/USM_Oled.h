
#ifndef USM_OLED_H
#define USM_OLED_H

#include "Arduino.h"
#include "SSD1306Ascii.h"             // For OLED display
#include "SSD1306AsciiWire.h"         // For OLED display

#define PATTERN_WIDTH 10

// function declaration
void USM_Oled_draw_ports (uint8_t mcps_found);
void USM_Oled_animate (uint32_t port_changed, uint16_t g_mcp_io_values[]);
void USM_Oled_draw_logo(char * firmware_version);


// user defined grapic elements in 10x8 pixel
static const uint8_t PROGMEM pattern_table[][PATTERN_WIDTH] =
{
0xff,0x8f,0x8f,0x8f,0x8f,0x81,0x81,0x81, 0x81,0xff,  // 0 tl
0xff,0xf1,0xf1,0xf1,0xf1,0x81,0x81,0x81, 0x81,0xff,  // 1 bl
0xff,0x81,0x81,0x81,0x81,0x8f,0x8f,0x8f, 0x8f,0xff,  // 2 tr
0xff,0x81,0x81,0x81,0x81,0xf1,0xf1,0xf1, 0xf1,0xff,  // 3 br
0xff,0x81,0x81,0x81,0x81,0x81,0x81,0x81, 0x81,0xff,  // 4 outer frame solid
0xdb,0x81,0x00,0x00,0x81,0x81,0x00,0x00, 0x81,0xdb,  // 5 outer frame dashed

0xc0,0x70,0x1c,0x04,0x46,0xe2,0x73,0x79, 0x00,0x00, // 06 sh logo tl
0x71,0xe3,0x52,0x06,0x04,0x1c,0xf0,0x00, 0x00,0x00, // 07 sh logo tr
0x03,0x0e,0x38,0x20,0x67,0x45,0xc4,0x80, 0x00,0x00, // 08 sh logo bl
0x87,0xcd,0x48,0x6c,0x24,0x07,0x01,0x00, 0x00,0x00  // 19 sh logo br
};


#define FRAME_SOLID 4
#define FRAME_DASHED 5
#define INP_TOP_LEFT 0
#define INP_BOTTOM_LEFT 1
#define INP_TOP_RIGHT 2
#define INP_BOTTOM_RIGHT 3


#endif
