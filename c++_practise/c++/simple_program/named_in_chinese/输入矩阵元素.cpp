#include<iostream>
#include<iomanip>
using namespace std;
const int N = 5;
int main()
{ int a[N][N]={ 0 }, i, j, k;
for( k=1, i=0; i<N; i++ )
for( j=i; j>= 0; j--, k++ )
a[j][i - j ] = k;
for( i=0; i<N; i++ )
{ for( j=0; j<N; j++ )
cout << setw( 3 ) << a[i][j];
cout << endl;
}
}
