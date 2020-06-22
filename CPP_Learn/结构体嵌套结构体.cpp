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
	struct Student stu;//结构体中嵌套了其它结构体变量
};


using namespace std;
int main(int argc, char *argv[])
{
	//定义教师结构变量
	Teacher t1;
	t1.id = 1000;
	t1.name = "wangJin";
	t1.age = 19;
	t1.stu.age = 1;
	t1.stu.name = "zahgnSan";
	t1.stu.score = 100;
	cout << "教师 职工编号： " << t1.id << " 姓名： " << t1.name << " 年龄： " << t1.age << endl;

	cout << "辅导学员 姓名： " << t1.stu.name << " 年龄：" << t1.stu.age << " 考试分数： " << t1.stu.score << endl;

	







	cin.get();
	return 0;
}



#endif // 0
