/*
C++������new�������ڶ�������������
�������ٵ����ݣ��ɳ���Ա�ֶ����٣��ֶ��ͷţ�����delete�ؼ��־Ϳ����ͷ�

�ͷű���  delete  ������
�ͷ�����  delete  ������[]
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
	//�ڶ����ж�������
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


	//��Ҫ�ֶ��ͷŶ���
	delete p;
	cout << *p << endl;
	cin.get();
	return 0;
}


#endif // 0



