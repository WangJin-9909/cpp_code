#include "swap.h"
//����ʵ��
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	std::cout << "a = " << a << " b = " << b << std::endl;

}