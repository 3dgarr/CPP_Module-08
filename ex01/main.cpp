#include "./Span.hpp"
#include <iostream>
#include <vector>

int main()
{
	try
	{	
		
 		srand (time(NULL));
		Span sp = Span(10);
		sp.fillSpan(10);
		sp.printSpan();
		
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';		
	}
	return 0;
}