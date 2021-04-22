#include <iostream>

using namespace std;

int main()
{
#ifdef WWW1
	cout << "hello world1" << endl;
#endif

#ifdef WWW2
	cout << "hello world2" << endl;
#endif

	return 0;
}
