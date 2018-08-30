//#include <iostream>
#include <highgui.h>

void show(char* path) {
    IplImage *src;
    src = cvLoadImage(path,-1);
    cvNamedWindow(path,0);
    cvShowImage(path,src);

    cvWaitKey(0);
    cvDestroyWindow(path);
    cvReleaseImage(&src);
}

int main() {

    show("../image/1.jpg");

    return 0;
}