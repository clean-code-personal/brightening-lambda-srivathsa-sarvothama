#pragma once
#include <cstdint>

class IPixelProcessor {
public:
	virtual uint8_t processPixel(uint8_t pixelGrayscale, int x, int y) = 0;
};
