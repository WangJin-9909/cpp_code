#include<iostream>

namespace first_space
{
	void function()
	{
		std::cout << "first_space�е�function()" << std::endl;
	}
}
namespace second_space
{
	void function()
	{
		std::cout << "second_space�е�function()" << std::endl;
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