#include<iostream>
#include<map>
#include<string>

struct Mystruct{
	int i = 0;

	std::string s;

};


Mystruct getStruct() {
	return Mystruct{43, "Hello"};
}


int main()
{



	auto [id, val] = getStruct();

	std::cout<<"id: "<<id<<" "<<"val: "<<val<<'\n';

	const std::map<std::string, int >
		mapCityPopulation{
			{"Beijing",21'707'000},
				{"London", 8'787'892},
				{"New York",8'622'698}
		};

	for (auto&[city,population] :
			mapCityPopulation)
		std::cout<<city<<": "<<
			population<<'\n';
}


