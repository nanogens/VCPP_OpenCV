#include "opencv2\opencv.hpp"

using namespace cv;

int main(int agrv, char** argc)
{
	Mat test = imread("Test_Pattern.jpg", CV_LOAD_IMAGE_UNCHANGED);
	imshow("test", test);
	waitKey();
}