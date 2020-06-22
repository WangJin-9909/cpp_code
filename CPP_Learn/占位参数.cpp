#if 0
/*
C++中函数的形参列表可以有占位参数，用来作占位，调用函数时必须传参
*/


#include<iostream>
#include<string>
using namespace std;

void func(int a, int)
{
	cout << "" << endl;
}


int main(int argc, char *argv[])
{
	//调用包含占位参数的函数
	func(10, 10);
	
	return 0;
}




#endif // 0
