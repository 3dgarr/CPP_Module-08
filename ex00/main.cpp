#include "./easyFind.hpp"
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> a;
	for(size_t i = 0; i < 10; i++)
	{
		a.push_back(i);
	}
	std::cout << *easyFind(a, 12) << std::endl;
	
}