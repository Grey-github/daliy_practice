#include <stdio.h>
int main() 
{
    int a,b,c;
    int abc=a*100+b*10+c;
    scanf("%d %d %d", &a,&b,&c);
    int d = abc/100;
    int e = abc%10;
    int f = abc%100/10;
    printf("%d%d%d", d+e*100+f*10);
    return 0;
}
