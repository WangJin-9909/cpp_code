#if 0


#include<iostream>

//����һ����
class Circle
{
#define PI 3.14
public:
	//��Ĺ�����
	Circle();
	//�����������
	~Circle();
	//�����Ա����
	int m_r;
	//�����Ա����
	double calculateZC();
	


private:

};

Circle::Circle()
{
}

Circle::~Circle()
{
}
double Circle::calculateZC()
{
	return 2 * PI * m_r;
}

/*
1.��������ķ�ʽ

*/
int main(int argc, char** argv)
{
	using namespace std;

	//1.����Բ�Ķ���
	Circle circle;
	//2.�޸���ĳ�Ա����
	circle.m_r = 10;
	//3.������ĳ�Ա���� 
	double d = circle.calculateZC();
	cout << "Բ���ܳ��� " << d;



	cin.get();

}

#endif
