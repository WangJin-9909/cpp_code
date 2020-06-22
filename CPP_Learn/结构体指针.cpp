#if 0
#include<iostream>
#include<string>

using namespace std;



//定义一个结构体
struct Student
{
	string name;
	int age;
	int score;

};


int main(int argc, char *argv[])
{
	//1.创建结构体变量
	Student stu;
	//2.通过指针指向结构体变量
	Student *p = &stu;
	//3.通过指针访问结构体变量中的数据
	p->name = "wangJin";
	cout << "name " << p->name;

	cin.get();
	return 0;
}
#endif // 0
