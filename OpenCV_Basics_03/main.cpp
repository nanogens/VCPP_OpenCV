#include "opencv2\opencv.hpp"
#include <chrono>
#include <thread>

using namespace cv;

int main(int agrv, char** argc)
{
	auto start = std::chrono::steady_clock::now();
	std::this_thread::sleep_for(std::chrono::milliseconds(2));
	auto end = std::chrono::steady_clock::now();

	auto delta = end - start;

	std::cout << std::chrono::duration_cast < std::chrono::microseconds > (delta).count() << std::endl;

	

	// ---------
	double gtf = getTickFrequency();
	int64 e1 = getTickCount();

	// code block

	int64 e2 = getTickCount();
	double e3 = (e2 - e1) / gtf;
	waitKey();
}