#include"stack.h"
template<typename T>
void Stack<T>::push(T const& elem)
{
	elems.push_back(elem);
}

template<typename T> void Stack<T>::pop()
{
	assert(!elems.empty());

	elems.pop_back();     //remove last element
}//

template<typename T> 
T const& Stack<T>::top()const
{
	assert(!elems.empty());
	return elems.back();  // return copy of last element
}

