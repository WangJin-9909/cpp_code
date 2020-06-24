#include<iostream>

namespace first_space
{
	void function()
	{
		std::cout << "first_space中的function()" << std::endl;
	}
}
namespace second_space
{
	void function()
	{
		std::cout << "second_space中的function()" << std::endl;
	}
}

#if 0
int main(int argc, char ** argv)
{
	first_space::function();
	second_space::function();
	



	std::cin.get();
	return 0;
}
#endif