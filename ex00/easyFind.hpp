#ifndef EASY_FIND_HPP
#	define EASY_FIND_HPP

#include <algorithm>

template<typename	T>
typename T::iterator	easyFind(T& container, int target)
{
	typename T::iterator	result = std::find(container.begin(), container.end(), target);

	return	(result);	
}




#endif// EASY_FIND_HPP