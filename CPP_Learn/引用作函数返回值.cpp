/*
引用作函数返回值：
1.不要返回局部变量的引用
2.函数调用可以作为左值
*/


#if 0
#include<iostream>
#include<string>
using namespace std;

int & test_01()
{
	int a = 10;//局部变量，存储于栈中，函数结束时，变量销毁
	return a;
}

int & test_02()
{
	static int a = 10;//静态变量，存放在全局区，生命周期长
	return a;
}

int main(int argc, char *argv[])
{
	//多次调用会引发异常哦
	int &a = test_01();
	cout << "a = " << a << endl;
	cout << "a = " << a << endl;
	cout << "a = " << a << endl;

	//函数调用可以作为左值
	int &b = test_02();
	cout << "b = " << b << endl;
	cout << "b = " << b << endl;
	cout << "b = " << b << endl;
	test_02() = 10000;
	cout << "b = " << b << endl;
	cout << "b = " << b << endl;
	cout << "b = " << b << endl;



	cin.get();
}


#endif // 0


