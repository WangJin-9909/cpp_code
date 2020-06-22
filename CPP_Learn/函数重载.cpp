/*
函数重载：
函数重载需要满足以下条件：
1、同意作用域下
2、函数名相同
3、函数参数类型不同或个数不同或顺序不同
4、函数返回值不可以作为函数的重载条件
*/
#if 0
#include<iostream>
#include<string>

using namespace std;

void func()
{
	cout << "无参函数调用" << endl;
}

void func(int a)
{
	cout << "a = " << a << endl;
}

void func(double a)
{
	cout << "a = " << a << endl;
}

void func(int a, double b)
{
	cout << "a  = " << a << " b = " << b << endl;
}

void func(double a, int b)
{
	cout << "a  = " << a << " b = " << b << endl;
}

int main(int argc, char *argv[])
{
	func();
	func(2);
	func(1.2);
	func(1, 2.1);
	func(1.1, 4);
	cin.get();
	return 0;
}




#endif // 0
