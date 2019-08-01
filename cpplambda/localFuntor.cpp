#include<iostream>
#include<vector>
#include<algorithm>


int main()
{
	struct PrintFunctor{
		void operator()(int x)const {
			std::cout<< x << '\n';
		}
	};

	std::vector<int> v;
	v.push_back(9);
	v.push_back(7);
	v.push_back(55);
	std::for_each(begin(v), end(v), PrintFunctor());

}
