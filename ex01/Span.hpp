# ifndef SPAN_HPP
	# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <exception>

class Span
{
	public:
		void	addNumber(const int);
		int		shortestSpan() const;
		int		longestSpan() const;
		void	fillSpan(size_t);
		void	printSpan(void) const;


	public:
		Span(size_t);
		Span(const Span&);
		Span&	operator=(const Span&);
		~Span();

	public:
		class NoSpanFoundException : public std::exception
		{
			public:
				virtual	const char *what() const throw();
		};
		class LimitException : public std::exception
		{
			public:
				virtual	const char *what() const throw();
		};

	private:
		std::vector<int>	container;
		size_t				maxSize;
	

};

# endif// SPAN_HPP