/*
印用的作用：给变量起别名
语法：数据类型  &别名 = 原名

【注意】
1.定义引用型变量的时候必须初始化
2.引用型变量一旦初始化，就不能修改
*/


#if 0
#include<iostream>
#include<string>

using namespace std;

int main(int argc, char *argv)
{
	//定义变量a
	int a = 10;
	//定义变量a的印用
	int &b = a;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	//通过引用型变量可以修改引用指向的变量
	b = 100;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	

	cin.get();
	return 0;
}




#endif // 0
