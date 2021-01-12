#include<iostream>
#include<string>

using std::cout;
using std::string;
using std::cin;


#include<boost/regex.hpp>

bool validate(const string&, const string& );//validate prototype
string inputData(const string& , const string&);


int main()
{
	string lastName = inputData("last name", "[A-Z][a-zA-Z]*");


	string firstName = inputData( "first name", "[A-Z][a-zA-Z]*");


    string address = inputData("address", 
	            	R"([0-9]+\s+([a-zA-Z]+|[a-zA-Z]+\s[a-zA-Z]+))");



	  string state =inputData("state",
	         	R"([a-zA-Z]+|[a-zA-Z]+\s[a-zA-Z]+)");


    string city=inputData("city",
	         	R"([a-zA-Z]+|[a-zA-Z]+\s[a-zA-Z]+)");


     
	string zipCode = inputData("zip code", R"(\d{5})");

	string phoneNumber = inputData( "phone number",
			R"([1-9]\d{2}-[1-9]\d{2}-\d{4})");


	 cout << "\nValidated Data\n\n"
       << "Last name: " << lastName <<'\n'
        << "First name: " << firstName << '\n'
        << "Address: " << address << '\n'
        << "City: " << city << '\n'
        << "State: " << state << '\n'
       << "Zip code: " << zipCode <<'\n'
        << "Phone number: "<<phoneNumber<<'\n';


	 return 0;

}


bool validate(const string& data, const string &expr){
	boost::regex valid = boost::regex(expr);

	return boost::regex_match(data, valid);
}


string inputData(const string& field, const string& expr)
{
	string data;

	cout<< "Enter "<< field <<": ";
	getline(cin, data);

	while(!(validate(data, expr)))
	{
		cout<<"invalid "<< field << ".\n";
		cout<< "Enter " << field<< ": ";
		getline(cin, data);
	}

	return data;
}


