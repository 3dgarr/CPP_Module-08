#include "Span.hpp"

Span::Span(size_t	N)
{
	maxSize = N;
}

Span::Span(const Span& rhs)
{
	maxSize = rhs.maxSize;
	container = rhs.container;
}

Span& Span::operator=(const Span& rhs)
{
	if (this != &rhs)
	{
		maxSize = rhs.maxSize;
		container = rhs.container;
	}
	return (*this);
}

Span::~Span()
{}

void Span::addNumber(int number)
{
	if (container.size() == maxSize)
		throw LimitException();
	container.push_back(number);
	std::sort(container.begin(), container.end());
}

void Span::fillSpan(size_t	size)
{
	std::srand(std::time(NULL));
	for(size_t	i = 0; i < size; i++)
	{
		addNumber(std::rand() % 100000);
	}
}

void Span::printSpan(void) const
{
	for(size_t	i = 0; i < container.size(); i++)
	{
		std::cout << container[i] << " " ;
	}
	std::cout << std::endl;
}


int Span::longestSpan() const
{
	if (container.size() < 2)
		throw NoSpanFoundException();
	int first = *container.begin();
	int last = *std::prev(container.end());
	return (last - first);
}
int Span::shortestSpan() const
{
	if (container.size() < 2)
		throw NoSpanFoundException();
	int	tempSpan = std::numeric_limits<int>::max();

	for (size_t i = 0; i < container.size() - 1; i++)
	{
		int	curDif = container[i + 1] - container[i];
		tempSpan = curDif < tempSpan ? curDif : tempSpan ;
	}
	return (tempSpan);
}

const char*	Span::LimitException::what() const throw()
{
	return ("You reached limit, ara\n");
}

const char*	Span::NoSpanFoundException::what() const throw()
{
	return ("No span found, ara\n");
}