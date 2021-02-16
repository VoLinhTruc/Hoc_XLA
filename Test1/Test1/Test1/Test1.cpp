#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;


/////////////////  Images  //////////////////////

//int main() {
//
//    string path = "Resources/cards.jpg";
//    Mat img = imread(path);
//    imshow("Image", img);
//
//    while (true)
//    {
//        waitKey(1);
//    }
//    
//    return 0;
//}




/////////////////  Video  //////////////////////

//int main() {
//
//    string path = "Resources/test_video.mp4";
//    Mat img;
//    VideoCapture cap(path);
//
//    while (true)
//    {
//        cap.read(img);
//        if (!img.empty())
//        {
//            imshow("Image", img);
//            waitKey(2);
//        }
//        else
//        {
//            break;
//        }
//
//    }
//
//    return 0;
//}




/////////////////  Camera  //////////////////////

int main() {

    Mat img;
    VideoCapture cap(0);

    while (true)
    {
        cap.read(img);

        imshow("Image", img);
        waitKey(1);

    }

    return 0;
}