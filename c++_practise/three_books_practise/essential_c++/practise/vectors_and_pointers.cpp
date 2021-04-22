//以下内容来自Essential C++一书中，
//部分代码并不完整，书中未给出详细的解决方案,
//程序并不保证能够编译通过,此程序仅跟随书中讲解思路练习并记录

#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main()
{
	vector<int> fibonacci, lucas, pell, triangular, square, pentagonal;
	/*指针通常符合以下形式：
 	type_of_object_pointed_to *name_of_pointer_object;
	欲检验某指针是否为null，我们通常用逻辑运算符NOT,如if(!pi)
	*/
	vector<int> *pv = 0;//初始化为null指针
	const int seq_cnt = 6;
	
	//一个指针菽粟，容量为seq_cnt
	//每个指针都指向vector<int>对象
	vector<int> *seq_addrs[seq_cnt] = {
		&fibonacci, &lucas, &pell, 
		&triangular, &square, &pentagonal
	};

	vector<int> *current_vec = 0;
	//...

	for (int ix=0; ix<seq_cnt; ix++)
	{
		current_vec = seq_addrs[ix];
		//所有欲显示的元素都通过current_vec间接存取而得
	}
	
	srand(seq_cnt);
	seq_index = rand() % seq_cnt;
	current_vec = seq_addrs[seq_index];
	/*使用class object的指针，和使用內建型别的指针略有不同，
	这是因为class object链接到一组我们可以调用(invoke)的
	操作行为(operation),如:
	*/
	if (!fibonacci.empty() && fibonacci[1]==1)
		
	/*上例中的fibonacci和empty()两字之间的逗号,称为dot成员选择符
	(memeber selection operator),用来选择我们想要施行的操作行为，
	如果想通过指针来选择操作行为，必须改用arrow(而非dot)成员选择符
	*/
	!pv->empty()
	//由于指针可能并未指向任何对象，所以我们应先检查pv是否为零值
	pv && !pv->empty()
	/*如果要使用下标运算符(subsript operator),我们必须先提领pv，
	由于下标运算符的优先级较高，因此，pv提领操作的两旁必须加上
	小括号
	*/
	if (pv && !pv->empty() && (*pv)[1]==1);
}
