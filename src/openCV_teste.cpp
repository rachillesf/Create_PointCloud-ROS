#include "opencv2/opencv.hpp"


using namespace cv;
int main(int, char**)
{
    VideoCapture cap(1); // open the default camera
    if(!cap.isOpened())  // check if we succeeded
        return -1;
    
    
    namedWindow("edges",1);
    
    for(int i=0; i < 2; i++)
    {    
        Mat resized;
        Mat frame;
        cap >> frame; // get a new frame from camera
        resize(frame, resized, Size(140,140), 0, 0, INTER_LINEAR);
        imshow("edges", resized);
    }
    waitKey(0);
    // the camera will be deinitialized automatically in VideoCapture destructor
    return 0;
}
