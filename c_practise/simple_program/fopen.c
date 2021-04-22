#include <stdio.h>

int main()
{
    /* Example 1
    int ch; // 用int类型的变量储存EOF
    FILE *fp;
    fp = fopen("wacky.txt", "r");
    ch = getc(fp); // 获取初始输入
    while (ch != EOF)
    {
        putchar(ch); // 处理输入
        ch = getc(fp); // 获取下一次输入
    }
    */

   // Simplify design
   int ch;
   FILE* fp;
   fp = fopen("fopen.c", "r");
   while ((ch = getc(fp)) != EOF)
   {
       putchar(ch); // 处理输入
   }

   /*Don't use this design
   int ch;
   FILE* fp;
   fp = fopen("wacky.txt", "r");
   while (ch != EOF) // 首次使用ｃｈ时，它的值尚未确定
   {
       ch = getc(fp); // 获取输入
       putchar(ch); // 处理输入
   }
   */
}
