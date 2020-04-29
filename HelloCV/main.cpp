#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
int main()
{
    std::string filename = "../Images/road";
    Mat a = imread(filename,IMREAD_COLOR); // BGR
    Mat b = imread(filename,IMREAD_GRAYSCALE);// grayscale

    Mat c(a); // pass by reference?? .... pointer of c points to the same data matrix as a
    Mat d = a; // pass by value??? .... data matrix of c is now same as a, but header is different.

    Mat c1(a,Rect(0,0,20,20)); // copy a certain area of the image a to c

    Mat c2 = a.clone(); // clone a into c2
    Mat mask;
    // clone b with a with a binary mask( in the corresponding white area of the mask clone,
    //otherwise black..
    a.copyTo(b,mask);

    // finding the size of an image
    std:: cout<< a.rows << " " << a.cols;
    // or we can do size()
    std:: cout<< a.size().width << " " << a.size().height;

    //**** Creating new MAT *****

    // CV_<bit-depth>{U|S|F}C<number_of_channels>
    // Where, U, S and F stand for Unsigned, Signed and Floating Point respectively.
    // EXAMPLE: CV_32FC1 ... 32 bit Floating.. single channel
    Mat m(16,9,CV_8UC3,Scalar(0,255,180));

    // Init mat with ones
    Mat m1 = Mat::ones(4,4,CV_64F);
    // Init mat with zero
    Mat m2 = Mat::zeros(4,4,CV_64F);
    // Init mat with identity
    Mat m3 = Mat::eye(4,4,CV_64F);

    return 0;
}
