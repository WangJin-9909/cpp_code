#include<iostream>
#include<atlstr.h>//CString
#include<string>//string
using namespace std;
#if 0
int main(int argc, char ** argv)
{

	
	//1.����һ���ַ���
	CString cstr_s = _T("Hello World!!");
	//ֱ��ʹ�������ռ�
	std::cout << "ʹ��CString�����ַ���  " << cstr_s << std::endl;

	CString str1 = CString("ʹ�ù�����ֱ�Ӵ���");
	std::cout << "ʹ�ù�����ֱ�Ӵ���    :" << str1 << std::endl;




	
	//��CStringת��Ϊstring
	string str_s = CT2A(cstr_s.GetBuffer(0));
	std::cout << "��CStringת��Ϊstring  " << str_s << std::endl;


	//��CStringת��Ϊchar *
	const char* p_s = str_s.c_str();
	std::cout << "��CStringת��Ϊchar * " << p_s << std::endl;


	//CStringתchar[]:
	char ac_s[50] = { '\0' };
	strcpy_s(ac_s, str_s.c_str());
	std::cout << "��CStringת��Ϊchar[]  " << ac_s << std::endl;
	std::cout << "CStringת���� char[]����  " << sizeof(ac_s) << std::endl;
	std::cout << "CStringת���� char[]����  " << strlen(ac_s) << std::endl;
	


	for (int i = 0; i < 10000; i++)
	{
		str1 += "CStringת���� ";
	}
	std::cout << "   :" << str1 << std::endl;
	
	std::cin.get();
	return 0;
}
#endif
