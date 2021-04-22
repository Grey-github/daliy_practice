/// @file exam_1_2.c
/// @brief 用程序设置控制台输出的代码页
 
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
 
int main(int argc, char** argv)
{
    char* pcLocale = NULL;
 
    pcLocale = setlocale(LC_ALL, NULL);
    if (NULL != pcLocale)
    {
        printf("\n%s\n", pcLocale);
    }
 
    /// 默认的本地代码页为 C
 
    // People’s Republic of China "china", "chn", "pr china", or "pr-china" 
    // "Chinese_People's Republic of China.936" ok
    // ".936" ok
    // "chs" ok
 
    // "china" err
    // "chn" err
    // "pr china" err
    pcLocale = setlocale(LC_ALL, "chs");
    if (NULL != pcLocale)
    {
        printf("\n%s\n", pcLocale);
    }
 
    // Chinese_People's Republic of China.936
 
    pcLocale = setlocale(LC_ALL, NULL);
    if (NULL != pcLocale)
    {
        printf("\n%s\n", pcLocale);
    }
 
    printf("END, press any key to quit\n");
    _getch();
    return 0;
}
 
