#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<cstdlib>

using namespace std;

void writeCharsetToFile (const string& filename);
void outputFile (const string& filename);
auto main()->int
{
	writeCharsetToFile("charset.out");
	outputFile("charset.out");

	return 0;
}

void writeCharsetToFile(const string& filename)
{
	ofstream file(filename);

	if(!file){
		cerr<< "cant't open output file \""
			<< filename << "\""
			<<'\n';
		exit(EXIT_FAILURE);
	}

	for(auto i =32; i < 255; ++i){
		file<< "value: " <<setw(3) << i << " "
			<<"char: "<< static_cast<char>(i) <<'\n';
	}
}


void outputFile(const string& filename)
{
	ifstream file(filename);

	if(!file){
		cerr << "cant open input file \""
			<<filename << "\""<<'\n';
		exit(EXIT_FAILURE);
	}
	char c;
	while(file.get(c)){
		cout.put(c);
	}
}

