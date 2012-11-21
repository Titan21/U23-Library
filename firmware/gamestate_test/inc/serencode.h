#ifndef _SERENCODE_H_
#define _SERENCODE_H_

#include <inttypes.h>

void se_start_frame(uint8_t n);
void se_putchr(uint8_t c);
void se_puti16(uint16_t x);
void se_puti32(uint32_t x);
void se_putdata(const char* c, int n);

#endif