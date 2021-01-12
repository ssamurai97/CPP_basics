#include<iostream>
#include<string>
#include<boost/regex.hpp>

using std::cout;
using std::string;

int main(){
	boost::regex expr( R"(J.*\d[0-35-9]-\d{2}-\d{2})");

	string str1 = "Jane's Birthday is 05-12-75\n"
		"Dave's Birthday is 11-04-68\n"
		"John's Birthday is 04-28-73\n"
        "Joe's Birthday is 12-17-77";


	boost::smatch match;

	while(boost::regex_search(str1, match, expr,
				boost::match_not_dot_newline))
	{
		cout<< match <<'\n';
		str1 = match.suffix();

	}

	return 0;


}

