#if 0
#include<iostream>
#include<string>

using namespace std;



//����һ���ṹ��
struct Student
{
	string name;
	int age;
	int score;

};


int main(int argc, char *argv[])
{
	//1.�����ṹ�����
	Student stu;
	//2.ͨ��ָ��ָ��ṹ�����
	Student *p = &stu;
	//3.ͨ��ָ����ʽṹ������е�����
	p->name = "wangJin";
	cout << "name " << p->name;

	cin.get();
	return 0;
}
#endif // 0
