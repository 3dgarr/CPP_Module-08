# ifndef	MUTANT_STACK_IMPL_HPP
#	define	MUTANT_STACK_IMPL_HPP

#include "./MutantStack.hpp"
template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return(this->c.begin());
}

template <typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rbegin()
{
	return(this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return(this->c.end());
}

template <typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rend()
{
	return(this->c.rend());
}

template <typename T>
MutantStack<T>::MutantStack()
{}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& rhs)
{
	this->c = rhs.c;
}

template <typename T>
MutantStack<T>&	MutantStack<T>::operator=(const MutantStack& rhs)
{
	if (this != &rhs)
	{
		this->c = rhs.c;
	}
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack()
{}

#endif//	MUTANT_STACK_IMPL_HPP