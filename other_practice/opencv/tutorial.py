#!/usr/bin/env python
# coding=utf-8
#import 所需要的库 python里面需要的就是opencv对应的库就是cv2
import cv2

#加载图像并且打印出它的维度。
#Python里面opencv的图像存储的形式是一个多维NunmPy向量。
#这个向量的格式是：no. rows (heightll) x no. columns (width) x no.  channels (depth)
image = cv2.imread("1.jpg")
(h, w, d) = image.shape
print("width={}, height={}, depth={}".format(w, h, d))

#展示图像，按任意键继续
cv2.imshow("Image", image)
cv2.waitKey(0)
#imshow()要搭配waitkey用，waitkey(0)等待用户按下任意键继续
#waitkey(int)等待xx秒后继续

#注意OpenCV存像素是按照BGR存储即可
(B, G, R) = image[100, 50]
print("R={}, G={}, B={}".format(R, G, B))

#切割图像，使用像素点进行操作（左上角（320,60）右下角（420,160））
roi = image[60:160, 320:420]
cv2.imshow("ROI", roi)
cv2.waitKey(0)

#尺寸缩放
resized = cv2.resize(image, (200, 200))
cv2.imshow("Fixed Resizeing", resized)
cv2.waitKey(0)

#比例缩放
r = 300.0/w
dim = (300, int(h * r))
resized = cv2.resize(image, dim)
cv2.imshow("Aspect Ratio Resize", resized)
cv2.waitKey(0)

#顺时针旋转45度
center = (w // 2, h // 2)
M = cv2.getRotationMatrix2D(center, -45, 1.0)
rotated = cv2.warpAffine(image, M, (w, h))
cv2.imshow("OpenCV Rotation", rotated)
cv2.waitKey(0)

#在图上放文字
output = image.copy()
cv2.putText(output, "OpenCV + Grey！！！", (10, 25),
        cv2.FONT_HERSHEY_SIMPLEX, 0.7, (0, 255, 0), 2)
cv2.imshow("Text", output)
cv2.waitKey(0)
