#if 0
#include<iostream>
#include<string>
using namespace std;
struct Student
{
	string name;
	int age;
	int score;
};

struct Teacher
{
	int id;
	string name;
	int age;
	struct Student stu;//�ṹ����Ƕ���������ṹ�����
};


using namespace std;
int main(int argc, char *argv[])
{
	//�����ʦ�ṹ����
	Teacher t1;
	t1.id = 1000;
	t1.name = "wangJin";
	t1.age = 19;
	t1.stu.age = 1;
	t1.stu.name = "zahgnSan";
	t1.stu.score = 100;
	cout << "��ʦ ְ����ţ� " << t1.id << " ������ " << t1.name << " ���䣺 " << t1.age << endl;

	cout << "����ѧԱ ������ " << t1.stu.name << " ���䣺" << t1.stu.age << " ���Է����� " << t1.stu.score << endl;

	







	cin.get();
	return 0;
}



#endif // 0
