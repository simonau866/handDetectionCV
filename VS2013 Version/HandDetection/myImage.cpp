#include "myImage.h"

using namespace cv;

MyImage::MyImage()
{
}

MyImage::MyImage(int webCamera)
{
	cameraSrc = webCamera;
	cap = VideoCapture(webCamera);
}
