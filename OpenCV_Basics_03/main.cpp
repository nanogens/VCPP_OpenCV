#include "opencv2\opencv.hpp"

using namespace cv;

int main(int agrv, char** argc)
{
	//Mat testColor = imread("Test_Pattern2.jpg", CV_LOAD_IMAGE_COLOR);
	//Mat testGray = imread("Test_Pattern2.jpg", CV_LOAD_IMAGE_GRAYSCALE);
	//imshow("color", testColor);
	//imshow("gray", testGray);
	float gtf = (float)getTickFrequency();
	int64 e1 = getTickCount();
	int64 e2 = getTickCount();
	float e3 = (float)(e2 - e1) / (float)getTickFrequency();
	waitKey();
}