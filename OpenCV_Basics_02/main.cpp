#include "opencv2\opencv.hpp"

using namespace cv;

int main(int agrv, char** argc)
{
	Mat testColor = imread("Test_Pattern2.jpg", CV_LOAD_IMAGE_COLOR);
	Mat testGray = imread("Test_Pattern2.jpg", CV_LOAD_IMAGE_GRAYSCALE);
	imshow("color", testColor);
	imshow("gray", testGray);
	imwrite("outputgray.jpg", testGray);
	waitKey();
}