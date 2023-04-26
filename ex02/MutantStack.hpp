#ifndef	MUTANT_STACK_HPP
#	define	MUTANT_STACK_HPP

#include <stack>
#include <iostream>
#include <iterator>


template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack&);
		MutantStack&	operator=(const MutantStack&);
		~MutantStack();
	
	public:
		typedef	typename	std::stack<T>::container_type::iterator				iterator;
		typedef	typename	std::stack<T>::container_type::reverse_iterator		reverse_iterator;
	
	public:
		iterator			begin();
		reverse_iterator	rbegin();
		iterator			end();
		reverse_iterator	rend();
};

#include "./MutantStack_impl.hpp"

#endif	//MUTANT_STACK_HPP