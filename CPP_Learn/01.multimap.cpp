#include<stdio.h>
#include<iostream>
#include<atlstr.h>//CString
//multimap��ͷ�ļ�
#include<map>
//pair��ͷ�ļ�
#include<utility>
#include<atlctl.h>


typedef std::pair<CString, CString> CStringPair;

#if 0
int main(int argc, char ** argv)
{
	//1.����һ��multimap
	std::multimap<CString, CString> map;
	//2.��map�в�������
	map.insert(CStringPair("name", "wangJin"));

	//3.ѭ������
	for (int i = 0; i < 1000; i++)
	{
		map.insert(CStringPair("name " + i, "wangJin " + i));
	}

	//4.��ȡ����
	std::cout << "map����С : " << map.max_size() << std::endl;
	std::cout << "map�����ݸ��� : " << map.size() <<std::endl;

	int i = 0;
	//5.����
	for (std::multimap<CString, CString>::const_iterator m = map.begin(); m != map.end(); m++)
	{
		//std::cout << m->first << std::endl;
		i++;
	}
	printf("���ݸ��� %d\n", i);
	std::cin.get();
	return 0;
}
#endif // 0
