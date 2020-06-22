/*
C++中利用new操作符在堆区来开辟数据
堆区开辟的数据，由程序员手动开辟，手动释放，利用delete关键字就可以释放

释放变量  delete  变量名
释放数组  delete  数组名[]
*/
#if 0
#include<iostream>
#include<string>
using namespace std;
int *fun()
{
	int *p = new int(10);
	return p;
}

int fun2()
{
	//在堆区中定义数组
	int *arrr = new int[10];
}

int main(int argc, char *argv[])
{
	
	
	int * p = fun();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;


	//需要手动释放堆区
	delete p;
	cout << *p << endl;
	cin.get();
	return 0;
}


#endif // 0



