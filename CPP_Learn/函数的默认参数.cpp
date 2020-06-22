#if 0
/*
默认参数：
1、具有默认值的参数应该位于形参列表的末尾
2、如果函数声明具有默认参数，函数实现就不能有默认参数，否则运行时异常【声明和实现默认参数只能有一个】

*/

#include<iostream>
#include<string>
using namespace std;

int func(int a, int b = 20, int c = 30)
{
	return a + b + c;
}


int main(int argc, char* argv[])
{
	//调用带有默认参数的函数
	int a = func(10);
	cout << "a = " << a << endl;

	int b = func(10, 22);
	cout << "b = " << b<< endl;




	cin.get();
}



#endif // 1
