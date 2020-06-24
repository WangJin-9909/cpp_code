#include<stdio.h>
#include<string.h>
#include<iostream>
#if 0



int main()
{
	char str[80000];
	strcpy_s(str, "abc");
	for (int i = 0; i < 20000; i++)
	{
		strcat_s(str, "def");
	}
	
	
	std::cout << str << std::endl;
	std::cout << "×Ö·û´®³¤¶È   " << strlen(str) << std::endl;



	std::cin.get();

	return 0;
}
#endif // 0