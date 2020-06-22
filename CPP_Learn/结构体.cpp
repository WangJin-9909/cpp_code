#if 0
#include<iostream>
#include<string>
using namespace std;
//---------------------------------
//创建一个结构体,学生数据类型
struct Student
{
	/*结构体的成员列表*/
	string name;
	int age;
};














int main(int argc, char *argv[])
{
	//--------------------------------------------------------------------------------------
	/*第一种创建结构体*/
	//1.定义学生结构体变量
	Student stu;
	//2.访问结构体属性的值
	stu.name = "wangJin";
	stu.age = 26;
	cout << "name = " << stu.name << endl;
	cout << "age = " << stu.age << endl;
	//--------------------------------------------------------------------------------------
	/*第二种创建结构体*/
	struct Student stu2 = {"ZhangSan", 11

	};
	cout << "name = " << stu2.name << endl;
	cout << "age = " << stu2.age << endl;

	//--------------------------------------------------------------------------------------
	/*第三种创建结构体*/


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
