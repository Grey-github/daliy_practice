#include<iostream>
#include<iomanip>
using namespace std;
const int M = 3, P = 3, N = 2;
int a[M][P], b[P][N], c[M][N] = { 0 };
bool multimatrix ( const int *a , int arow , int acol , int * b , int brow , int bcol ,
int * c , int crow , int ccol );
int main()
{ 
	int i, j;
	cout << "Please input A:\n"; //输入矩阵A 元素
	for(i = 0; i<M; i++)
	for(j = 0; j<P; j++)
	cin >> a[i][j];
	cout << "\nPlease input B:\n"; //输入矩阵B 元素
	for(i = 0; i<P; i++)
	for(j = 0; j<N; j++)
	cin >> b[i][j];
	if(multimatrix ( *a , M, P , *b , P, N , *c , M, N ))//调用函数计算矩阵乘积
	for(i = 0; i<M; i++)
	{ for(j = 0; j<N; j++)
	cout << setw(5) << c[i][j];
	cout << endl;
}
	else
	cout << "illegal matrix multiply.\n";
}
bool multimatrix ( const int *a , int arow , int acol , int * b , int brow , int bcol ,
int * c , int crow , int ccol ) 
{ 
	if (acol!=brow) return false; //判断参数合法性
	if (crow!=arow) return false;
	if (ccol!=bcol) return false;
	for (int i = 0; i<crow; i++) //计算矩阵相乘
	for (int j = 0; j<ccol; j++)
	{   
		for(int k = 0; k<acol; k++)
		{
			*(c+j) += *(a+k)**(b+j);
			c = c + i;
			a = a + i;
			b = b + k;
		}
	}
	return true;
}
