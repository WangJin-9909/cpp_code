/*
�������أ�
����������Ҫ��������������
1��ͬ����������
2����������ͬ
3�������������Ͳ�ͬ�������ͬ��˳��ͬ
4����������ֵ��������Ϊ��������������
*/
#if 0
#include<iostream>
#include<string>

using namespace std;

void func()
{
	cout << "�޲κ�������" << endl;
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
