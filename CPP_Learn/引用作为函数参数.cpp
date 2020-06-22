#if 0
/*
通过引用可以达到通过修改形参从而达到修改实参的目的，从而简化了指针
【引用的本质在C++内部实现就是一个指针常量】
*/

#include<iostream>
#include<string>


using namespace std;



//值传递的方式
void myswap_01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
//地址传递的方式
void myswap_02(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void myswap_03(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}



int main(int argc, char *argv[])
{
	int a = 10;
	int b = 20;
	myswap_01(a, b);//值传递，形参不会修改实参
	cout << "a = " << a << "b = " << b << endl;

	myswap_02(&a, &b);//地址传递，形参会改变实参
	cout << "a = " << a << "b = " << b << endl;



	myswap_03(a, b);//地址传递，形参会改变实参
	cout << "a = " << a << "b = " << b << endl;


	cin.get();
}



#endif // 0
