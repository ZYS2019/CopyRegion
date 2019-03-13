#include<opencv.hpp>

using namespace cv;
int main()
{
	Mat src = imread("C:/Users/SZJ/Desktop/1.jpg");
	Mat dst = Mat::zeros(src.size(), src.type());
	Mat mask = Mat::zeros(src.size(), CV_8U);
	Mat dst2;
	Point circleCenter(mask.cols / 2, src.rows / 2);
	int radius = min(mask.cols, mask.rows) / 2;

	//»­Ô²
	circle(mask, circleCenter, 200, Scalar(255), -1);
	Rect rect(0, 0, 100, 200);
	dst2 = src(rect);
	src.copyTo(dst, mask);
	imshow("mask", mask);
	imshow("src", src);
	imshow("dst", dst);
	imshow("dst2", dst2);
	waitKey(0);
	return 0;

}