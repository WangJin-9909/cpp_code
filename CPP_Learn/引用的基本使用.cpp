/*
ӡ�õ����ã������������
�﷨����������  &���� = ԭ��

��ע�⡿
1.���������ͱ�����ʱ������ʼ��
2.�����ͱ���һ����ʼ�����Ͳ����޸�
*/


#if 0
#include<iostream>
#include<string>

using namespace std;

int main(int argc, char *argv)
{
	//�������a
	int a = 10;
	//�������a��ӡ��
	int &b = a;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	//ͨ�������ͱ��������޸�����ָ��ı���
	b = 100;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	

	cin.get();
	return 0;
}




#endif // 0
