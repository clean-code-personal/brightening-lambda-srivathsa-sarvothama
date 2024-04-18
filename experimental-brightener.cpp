#include "experimental-brightener.h"

int BrightenWholeImageWithLambda(std::shared_ptr<Image> image) {
	int attenuatedPixelCount = 0;
	image->pixelRunner([&attenuatedPixelCount](uint8_t pixelGrayscale, int x, int y) {
			uint8_t outputGrayscale = pixelGrayscale;
			if (outputGrayscale > (255 - 25)) {
				++attenuatedPixelCount;
				outputGrayscale = 255;
			}
			else {
				outputGrayscale += 25;
			}

			return outputGrayscale;
		});
	return attenuatedPixelCount;
}
