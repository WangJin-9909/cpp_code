#if 0
#include<iostream>
#include<string>
using namespace std;
//---------------------------------
//����һ���ṹ��,ѧ����������
struct Student
{
	/*�ṹ��ĳ�Ա�б�*/
	string name;
	int age;
};














int main(int argc, char *argv[])
{
	//--------------------------------------------------------------------------------------
	/*��һ�ִ����ṹ��*/
	//1.����ѧ���ṹ�����
	Student stu;
	//2.���ʽṹ�����Ե�ֵ
	stu.name = "wangJin";
	stu.age = 26;
	cout << "name = " << stu.name << endl;
	cout << "age = " << stu.age << endl;
	//--------------------------------------------------------------------------------------
	/*�ڶ��ִ����ṹ��*/
	struct Student stu2 = {"ZhangSan", 11

	};
	cout << "name = " << stu2.name << endl;
	cout << "age = " << stu2.age << endl;

	//--------------------------------------------------------------------------------------
	/*�����ִ����ṹ��*/


	struct StudentA 
	{
		string name;
		int age;
	}stu3;
	stu3.age = 14;
	stu3.name = "LiSi";
	cout << "name = " << stu3.name << endl;
	cout << "age = " << stu3.age << endl;



	cin.get();
	return 0;
}

#endif // 0
