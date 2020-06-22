#if 0
/*
值传递：形参改变，实参也改变
地址传递：形参改变，实参不改变
*/




#include <iostream>
#include<string>
using namespace std;
//定义学生结构体
struct Student{
	string name;
	int age;
	int score;
};



/*地址传递*/
void print_stu_p(Student *stu)
{
	cout << "学生姓名  ：  " << stu->name << "学生年龄  :  " << stu->age << "学生成绩  :  " << stu->score << endl;
}
/*值传递*/
void print_stu(Student stu)
{
	cout << "学生姓名  ：  " << stu.name << "学生年龄  :  " << stu.age << "学生成绩  :  " << stu.score << endl;
}


int main(int argc, char *argv[])
{
	//创建结构体变量
	
	Student stu1;
	stu1.name = "ZhangSan";
	stu1.age = 20;
	stu1.score = 87;
	

	//1.值传递得方式使用
	print_stu(stu1);

	//2.使用地址传递得方式
	print_stu_p(&stu1);



	cin.get();

	return 0;
}

#endif // 0
