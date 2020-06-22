#if 0


#include<iostream>

//创建一个类
class Circle
{
#define PI 3.14
public:
	//类的构造器
	Circle();
	//类的析构函数
	~Circle();
	//定义成员变量
	int m_r;
	//定义成员函数
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
1.创建对象的方式

*/
int main(int argc, char** argv)
{
	using namespace std;

	//1.创建圆的对象
	Circle circle;
	//2.修改类的成员变量
	circle.m_r = 10;
	//3.访问类的成员函数 
	double d = circle.calculateZC();
	cout << "圆的周长： " << d;



	cin.get();

}

#endif
