#pragma once
#include "image.h"

class ImageBrightener {

public:
	ImageBrightener() = default;
	bool ValidateImage();
    int BrightenWholeImageWithLambda(std::shared_ptr<Image> image);
};
