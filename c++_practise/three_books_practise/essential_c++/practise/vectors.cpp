//以下内容来自Essential C++一书中，
//部分代码并不完整，书中未给出详细的解决方案,
//程序并不保证能够编译通过,此程序仅跟随书中讲解思路练习并记录

/*
总结一下:
vector的定义形式为：vector<type> name(size)
type:vector的元素数据类型
name:vector的名字
size:vector中数据元素的个数

访问形式:与数组相同，访问单个数据元素为:name[index]

初始化形式:1.逐个为单个数据元素赋值, 如name[index] = value;
			 2.利用已初始化的array作为vector的初值:
vector<type> name(array_begin_address, array_begin_address+array_size)
name.size()即为vector中元素的个数
*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	const int seq_size = 18;
	int pell_seq[seq_size];
	vector<int> pell_seq(seq_size);
	pell_seq[0] = 1;
	pell_seq[1] = 2;

	for (int ix=2; ix<seq_size; ++ix)
	{
		pell_seq[ix] = pell_seq[ix-2] + 2*pell_seq[ix-1];
	}

	cout<<"The first"<<seq_size
		<<"elements of the Pell Series:\n\t";

	for (int ix=0; ix<seq_size; ++ix)
	{
		cout<<pell_seq[ix]<<' ';
	}

	cout<<'\n';

	int elem_seq[seq_size] = {
		1, 3, 3,	//Fibonacci
		3, 4, 7,	//Lucas
		2, 5, 12,	//Pell
		3, 6, 10,	//Triangular
		4, 9, 16,	//Sqare
		5, 12, 22,	//Pentagonal
	};
	/*编译器会算出此array包含了18个元素
	int elem_seq[] = {
		1, 2, 3,  3, 4, 7,  2, 5, 12,
		3, 6, 10,  4, 9, 16,  5, 12, 22
	};
	*/
	//vector不支持上述这种初始化序列，有个冗长的写法可以为每个元素指定其值
	vector<int> elem_seq(seq_size);
	elem_seq[0] = 1;
	elem_seq[1] = 2;
	// ... 
	elem_seq[17] = 22;
	
	int elem_vals[seq_size] = {
		1, 2, 3,  3, 4, 7,  2, 5, 12,
		3, 6, 10,  4, 9, 16,  5, 12, 22
	};

	//以elem_vals的值来初始化elem_seq
	vector<int> elem_seq(elem_vals, elem_vals+seq_size);
	//elem_seq.size()会返回elem_seq这个vector所包含的元素个数
	cout<<"The first"<<elem_seq.size()
		<<"elements of the Pell Series:\n\t";
	for (int ix=0; ix<elem_seq.size(); ix++)
	{
		cout<<pell_seq[ix]<<' ';
	}

	//cur_tuple表示欲显示元素的索引值，每次累加3
	int cur_tuple = 0;
	while(next_seq==true &&
		cur_tuple<seq_size)
	{
		cout<<"The first two elements of the sequence are: "
			<<elem_seq[cur_tuple]<<', '
			<<elem_seq[cru_tuple + 1]
			<<"\nWhat is the next element?";
		//...
		if (usr_guess == elem_seq[cur_tuple + 2])
		{
			//correct!
		}
		//...
		if (usr_rsp=='N' || usr_rsp=='n')
		{
			next_seq = false;
		}
		else
		{
			cur_tuple += 3;
		}
	}
	//将每个数列的名称都用string储存起来
	const int max_seq = 6;
	string seq_names[max_seq] = {
		"Fibonacci",
		"Lucas",
		"Pell",
		"Triangular",
		"Square",
		"Pentagonal"
	};
	//我们可以采用以下做法来运用seq_names
	if (usr_guess == elem_seq[cur_tuple+2])
	{
		++num_cur;
		cout<<"Very good, Yes, "
			<<elem_seq[cur_tuple+2]
			<<"is the next element in the "
			<<seq_names[cur_tuple/3]
			<<"sequence.\n";
	}
}
