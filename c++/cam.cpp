#include <opencv2/core/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>

#include <opencv2/video.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/highgui.hpp>

#include <iostream>
#include <stdio.h>

#define WIDTH	224
#define HEIGHT	224

using namespace cv;
using namespace std;

int main(int, char**)
{
    //--- INITIALIZE VIDEOCAPTURE
    VideoCapture cap(0);
    cap.set(CAP_PROP_FRAME_WIDTH, WIDTH);
    cap.set(CAP_PROP_FRAME_HEIGHT, HEIGHT);

    //--- INITIALIZE MAT
    Mat frame;

    if (!cap.isOpened()) {
        cout << "ERROR! Unable to open camera"<< endl;
        return -1;
    }

   while (true)
    {
        // wait for a new frame from camera and store it into 'frame'
        cap.read(frame);
        // check if we succeeded
        if (frame.empty()) {
            cout << "ERROR! blank frame grabbed\n"<< endl;
            break;
        }

        resize(frame, frame, Size(WIDTH,HEIGHT), 0, 0, INTER_CUBIC);
        namedWindow("Live",WINDOW_AUTOSIZE);
        imshow("Live", frame);
        if (waitKey(27) >= 0)
            break;
    }
    // the camera will be deinitialized automatically in VideoCapture destructor
    return 0;
}
