#include "brightener.h"
#include "pixelbrightener.h"

ImageBrightener::ImageBrightener(std::shared_ptr<Image> inputImage) : m_inputImage(inputImage) {
}

int ImageBrightener::BrightenWholeImage() {
	PixelBrightener pixelBrightener;
	m_inputImage->pixelRunner(&pixelBrightener);
	return pixelBrightener.m_attenuatedPixelCount;
}

//bool ImageBrightener::AddBrighteningImage(Image& imageToAdd, int& attenuatedCount) {
//	if (imageToAdd.m_rows != m_inputImage->m_rows || imageToAdd.m_columns != m_inputImage->m_columns) {
//		return false;
//	}
//	attenuatedCount = 0;
//	for (int x = 0; x < m_inputImage->m_rows; x++) {
//		for (int y = 0; y < m_inputImage->m_columns; y++) {
//			int pixelIndex = x * m_inputImage->m_columns + y;
//			if (int(m_inputImage->pixels[pixelIndex]) + imageToAdd.pixels[pixelIndex] > 255) {
//				++attenuatedCount;
//				m_inputImage->pixels[pixelIndex] = 255;
//			}
//			else {
//				imageToAdd.pixels[pixelIndex] += m_inputImage->pixels[pixelIndex];
//			}
//		}
//	}
//	return true;
//}
