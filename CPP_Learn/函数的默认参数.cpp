#if 0
/*
Ĭ�ϲ�����
1������Ĭ��ֵ�Ĳ���Ӧ��λ���β��б��ĩβ
2�����������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ�������������ʱ�쳣��������ʵ��Ĭ�ϲ���ֻ����һ����

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
	//���ô���Ĭ�ϲ����ĺ���
	int a = func(10);
	cout << "a = " << a << endl;

	int b = func(10, 22);
	cout << "b = " << b<< endl;




	cin.get();
}



#endif // 1
