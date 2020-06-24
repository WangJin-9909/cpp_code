#include<stdio.h>
#include<iostream>
#include<atlstr.h>//CString
//multimap的头文件
#include<map>
//pair的头文件
#include<utility>
#include<atlctl.h>


typedef std::pair<CString, CString> CStringPair;

#if 0
int main(int argc, char ** argv)
{
	//1.定义一个multimap
	std::multimap<CString, CString> map;
	//2.向map中插入数据
	map.insert(CStringPair("name", "wangJin"));

	//3.循环插入
	for (int i = 0; i < 1000; i++)
	{
		map.insert(CStringPair("name " + i, "wangJin " + i));
	}

	//4.获取数量
	std::cout << "map最大大小 : " << map.max_size() << std::endl;
	std::cout << "map中数据个数 : " << map.size() <<std::endl;

	int i = 0;
	//5.遍历
	for (std::multimap<CString, CString>::const_iterator m = map.begin(); m != map.end(); m++)
	{
		//std::cout << m->first << std::endl;
		i++;
	}
	printf("数据个数 %d\n", i);
	std::cin.get();
	return 0;
}
#endif // 0
