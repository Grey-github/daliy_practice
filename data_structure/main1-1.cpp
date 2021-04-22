//main1-1.c检验基本操作bo1-1.c的主函数
#include"c1.h"			  //要将程序中所有#include命令所包含的文件拷贝到当前目录下
typedef int ElemType;	  //定义抽象数据类型ElemType在本程序中为整形
//typedef double ElemType;//定义抽象数据类型Elemtype在本程序中为双精度型
#include "c1-1.h"		  //在此命令之前要定义Elemtype的类型
#include "bo1-1.cpp"	  //在此命令之前要包括c1-1.h文件(因为其中定义了Triplet)
int main()
{
	Triplet T;
	ElemType m;
	Status i;

	i = InitTriplet(T, 5, 7, 9);
	printf("调用初始化函数后，i=%d(1:成功) T的三个值为:%d %d %d\n", 
			T[0], T[1], T[2]);//当ElemType发生变化时，要改变printf的格式符

	i = Get(T, 2, m);
	if (i == OK)
	{
		printf("T的第2个值为: %d\n", m);
	}

	i = Put(T, 2, 6);
	if(i == OK)
	{
		printf("将T的第2个值改为6后，T的三个值为: %d %d %d\n", T[0], T[1], T[3]);
	}

	i = IsAscending(T);
	printf("调用测试升序的函数后，i = %d(0:否 1:是)\n", i);
	i = IsDescending(T);
	printf("调用测试降序的函数后，i = %d(0:否 1:是)\n", i);

	if ((i=Max(T, m)) == OK)
	{
		printf("T中的最大值为: %d\n", m);
	}
	if ((i=Min(T, m)) == OK)
	{
		printf("T中的最小值为: %d\n", m);
	}

	DestroyTriplet(T);
	printf("销毁T后， T=%u(NULL)\n");

	return 0;
}

