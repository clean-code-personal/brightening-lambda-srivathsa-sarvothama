#include "pixelbrightener.h"

uint8_t PixelBrightener::processPixel(uint8_t pixelGrayscale, int x, int y)
{
	uint8_t outputGrayscale = pixelGrayscale;
	if (outputGrayscale > (255 - 25)) {
		++m_attenuatedPixelCount;
		outputGrayscale = 255;
	}
	else {
		outputGrayscale += 25;
	}

	return outputGrayscale;
}
