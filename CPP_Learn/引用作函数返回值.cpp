/*
��������������ֵ��
1.��Ҫ���ؾֲ�����������
2.�������ÿ�����Ϊ��ֵ
*/


#if 0
#include<iostream>
#include<string>
using namespace std;

int & test_01()
{
	int a = 10;//�ֲ��������洢��ջ�У���������ʱ����������
	return a;
}

int & test_02()
{
	static int a = 10;//��̬�����������ȫ�������������ڳ�
	return a;
}

int main(int argc, char *argv[])
{
	//��ε��û������쳣Ŷ
	int &a = test_01();
	cout << "a = " << a << endl;
	cout << "a = " << a << endl;
	cout << "a = " << a << endl;

	//�������ÿ�����Ϊ��ֵ
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


