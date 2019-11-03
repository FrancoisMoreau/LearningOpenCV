#include <iostream>

#include "Example2_1.h"
#include "Example2_3.h"
#include "PyrDown.h"
#include "CannyEdge.h"
#include "opencv2/opencv.hpp"


const int Img_Size = 600;

int main() {
//    display_img();

//    display_video();


//    PyrDown();

//    cannyedge();

    cv::namedWindow("chap4", cv::WINDOW_AUTOSIZE);

//    cv::Mat img = cv::imread("../satomi.jpg", -1);
//    cv::imshow("chap4", img);
//    cv::waitKey(0);

    cv::Scalar color_B = cv::Scalar(255, 0, 0);
    cv::Scalar color_G = cv::Scalar(0, 255, 0);
    cv::Scalar color_R = cv::Scalar(0, 0, 255);


    cv::Mat drawimg(400, 800, CV_8UC3, cv::Scalar(255, 255, 255));
    cv::line(drawimg, cv::Point(200, 200), cv::Point(400, 400), cv::Scalar(0, 0, 255), 4,8);
    cv::circle(drawimg, cv::Point(200, 200), 100, color_B, 1, 4);
    cv::circle(drawimg, cv::Point(400, 200), 100, color_B, 1, 8);
    cv::circle(drawimg, cv::Point(600, 200), 100, color_B, -1, cv::LINE_AA);


    cv::circle(drawimg, cv::Point(300, 300), 3, cv::Scalar(0, 0, 0), -1, cv::LINE_AA);
    cv::circle(drawimg, cv::Point(400, 300), 3, cv::Scalar(0, 0, 0), -1);

    cv::imshow("chap4", drawimg);
    cv::waitKey(0);


    cv::namedWindow("test", cv::WINDOW_AUTOSIZE);
    int x = 0, y = 0;
    for (;;) {
        x++;
        y++;
        cv::Point p(x, y);
        cv::Mat img(Img_Size, Img_Size, CV_8UC3, cv::Scalar(255, 255, 255));

        cv::circle(img, p, 3, cv::Scalar(0, 0, 0), -1, cv::LINE_AA);
//        cv::circle(img, p, 3, cv::Scalar(0, 0, 0), -1, cv::LINE_AA);
        cv::imshow("test", img);
        char c = (char) cv::waitKey(1);
        if (x >= Img_Size || y >= Img_Size) {
            cv::waitKey(0);
            break;
        }
        if( c == 27 )
            break;
    }
    return 0;
}