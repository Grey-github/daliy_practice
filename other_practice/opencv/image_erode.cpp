#include <opencv2/highgui/highgui.hpp>//OpenCV highgui模块头文件
#include <opencv2/imgproc/imgproc.hpp>//OpenCV 图像处理头文件
using namespace cv; //包含cv命名空间

int main()//控制台应用程序的入口函数，我们的程序从这里开始
{
    //载入原图
    Mat srcImage = imread("1.jpg");
    //显示原图
    imshow("【原图】腐蚀操作", srcImage);
    //进行腐蚀操作
    Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
    Mat dstImage;
    erode(srcImage, dstImage, element);
    //显示效果图
    imshow("【效果图】腐蚀操作", dstImage);
    waitKey(0);

    return 0;
}
