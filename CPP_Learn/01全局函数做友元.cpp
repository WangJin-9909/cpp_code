#include<iostream>
#include<string>
using namespace std;


//创建一个类
class Building 
{
	//声明友元函数
	friend void test_function(Building bud);

public :
	//定义构造器
	Building()
	{
		m_settingRoom = "客厅";
		m_BeddingRoom = "卧室";
		std::cout << "构造函数执行" << std::endl;
	}
	//定义析构函数
	~Building()
	{
		std::cout << "析构函数执行" << std::endl;
	}

//定义public属性
public :
	string m_settingRoom;
//定义private属性
private:
	string m_BeddingRoom;



	


};

//全局函数访问类的私有成员
void test_function(Building bud)
{
	std::cout << "访问bud的public属性    " << bud.m_settingRoom << std::endl;
	//std::cout << "访问bud的private属性 " << bud.m_BeddingRoom << std::endl;  无法直接访问私有成员变量，需要添加友元函数
	std::cout << "访问bud的【private】属性 " << bud.m_BeddingRoom << std::endl;  

}
#if 0
int main(int argc, char ** argv)
{
	//定义类的变量
	Building bud;
	test_function(bud);


	std::cin.get();
	return 0;
}
#endif