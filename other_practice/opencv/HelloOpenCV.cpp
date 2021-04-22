#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;
int main()
{
    //读入一张图片
    Mat img = imread("./1.jpg");
    //在窗口中显示载入的图片
    imshow("紫堂幻", img);
    //等待6000ms后窗口自动关闭
    waitKey(6000);

    return 0;
}
