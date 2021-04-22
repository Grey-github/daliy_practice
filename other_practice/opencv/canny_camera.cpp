#include "opencv2/opencv.hpp"
using namespace cv;

int main()
{
    //从摄像头读入视频
    VideoCapture capture(0);
    Mat edges;

    //循环显示每一帧
    while(1)
    {
        //1.读入图像
        Mat frame;  //定义一个Mat变量，用于存储每一帧的图像
        capture >> frame;   //读取当前帧

        //2.将原图像转换为灰度图像
        cvtColor(frame, edges, CV_BGR2GRAY);    //转换BGR彩色图为灰度图

        //3.使用3x3内核来降噪（2x3+1=7）
        blur(edges, edges, Size(7, 7)); //进行模糊

        //4.进行canny边缘检测并显示
        Canny(edges, edges, 0, 30, 3);
        imshow("被canny后的视频", edges);   //显示经过处理后的当前帧
        if (waitKey(6000) >= 0)
        {
            break;  //延时30ms
        }
    }

    return 0;
}
