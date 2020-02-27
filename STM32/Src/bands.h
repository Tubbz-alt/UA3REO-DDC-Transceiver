#ifndef BANDS_H
#define BANDS_H

#include "stm32h7xx_hal.h"
#include <stdio.h>
#include <stdbool.h>

#define BANDS_COUNT 13

typedef struct
{
	const uint32_t startFreq;
	const uint32_t endFreq;
	const uint_fast8_t mode;
} REGION_MAP;

typedef struct
{
	const char *name;
	const uint32_t startFreq;
	const uint32_t endFreq;
	const REGION_MAP *regions;
	const uint_fast8_t regionsCount;
} BAND_MAP;

extern const BAND_MAP BANDS[];
extern uint_fast8_t getModeFromFreq(uint32_t freq);
extern int8_t getBandFromFreq(uint32_t freq, bool nearest);

#endif
