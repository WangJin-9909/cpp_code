#if 0
/*
ͨ�����ÿ��Դﵽͨ���޸��βδӶ��ﵽ�޸�ʵ�ε�Ŀ�ģ��Ӷ�����ָ��
�����õı�����C++�ڲ�ʵ�־���һ��ָ�볣����
*/

#include<iostream>
#include<string>


using namespace std;



//ֵ���ݵķ�ʽ
void myswap_01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
//��ַ���ݵķ�ʽ
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
	myswap_01(a, b);//ֵ���ݣ��ββ����޸�ʵ��
	cout << "a = " << a << "b = " << b << endl;

	myswap_02(&a, &b);//��ַ���ݣ��βλ�ı�ʵ��
	cout << "a = " << a << "b = " << b << endl;



	myswap_03(a, b);//��ַ���ݣ��βλ�ı�ʵ��
	cout << "a = " << a << "b = " << b << endl;


	cin.get();
}



#endif // 0
