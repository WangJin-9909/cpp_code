#include<iostream>
#include<atlstr.h>//CString
#include<string>//string
using namespace std;
#if 0
int main(int argc, char ** argv)
{

	
	//1.创建一个字符串
	CString cstr_s = _T("Hello World!!");
	//直接使用命名空间
	std::cout << "使用CString创建字符串  " << cstr_s << std::endl;

	CString str1 = CString("使用构造器直接创建");
	std::cout << "使用构造器直接创建    :" << str1 << std::endl;




	
	//将CString转换为string
	string str_s = CT2A(cstr_s.GetBuffer(0));
	std::cout << "将CString转换为string  " << str_s << std::endl;


	//将CString转换为char *
	const char* p_s = str_s.c_str();
	std::cout << "将CString转换为char * " << p_s << std::endl;


	//CString转char[]:
	char ac_s[50] = { '\0' };
	strcpy_s(ac_s, str_s.c_str());
	std::cout << "将CString转换为char[]  " << ac_s << std::endl;
	std::cout << "CString转换后 char[]长度  " << sizeof(ac_s) << std::endl;
	std::cout << "CString转换后 char[]长度  " << strlen(ac_s) << std::endl;
	


	for (int i = 0; i < 10000; i++)
	{
		str1 += "CString转换后 ";
	}
	std::cout << "   :" << str1 << std::endl;
	
	std::cin.get();
	return 0;
}
#endif
