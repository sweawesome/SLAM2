#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/calib3d.hpp>

int main(int, char**) {
    cv::Mat a(3,3,CV_64F);

    a.at<double>(0,0) = 2.0f;


    std::cout << "a at 0,0 is = " << a.at<double>(0,0) <<  std::endl;
    return 0;
}
