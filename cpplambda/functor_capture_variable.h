// functor with a captured variable
#pragma once

#include<iostream>
#include<algorithm>
#include<vector>

struct PrintFunctor {
	PrintFunctor(const std::string& str):
		strText{str},numCalls{0}{}
	void operator()(int x) const {
		std::cout<< strText << x <<'\n';
		++numCalls;
	}

	const std::string strText;
	mutable int numCalls{};

};
