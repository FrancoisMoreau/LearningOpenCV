//
// Created by brayden on 2019-10-01.
//

#include "Example2_1.h"

int display_img() {
    cv::Mat img = cv::imread("../satomi.jpg",-1);
    if( img.empty() ) return -1;
    cv::namedWindow( "Example1", cv::WINDOW_AUTOSIZE );
    cv::imshow( "Example1", img );
    cv::waitKey( 0 );
    cv::destroyWindow( "Example1" );
    return 0;
}