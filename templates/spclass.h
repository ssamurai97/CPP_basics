#pragma once
#include"stack.h"
#include<deque>
#include<cassert>



template<>
class Stack<std::string>{
	private:
		std::deque<std::string> elmes;
	public:
		void push(std::string const&);

		void pop();
		std::string const& top();
		bool empty()const{
			return elems.empty();
		}

};



void Stack<std::string>::push(std::string const& elem)
{
	elems.push_back(elem);
}
