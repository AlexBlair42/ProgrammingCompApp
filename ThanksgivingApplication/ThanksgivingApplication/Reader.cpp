#include <iostream>
#include "Reader.hpp"
#include <locale>
#include <algorithm>
#include <iterator>
#include <cstring>
#include <string>
#include <fStream>
#include <cstdlib>
#include <vector>
#include <sstream>
using namespace std;
/*using std::cout;
using std::cin;
using std::endl;*/
// Function to read from a text file and store the data that is read.


void readFile()
{
	cout << "We will now read from a text file that supplies a shopping list for Black Friday." << endl;
	string vecArray[50][50];
	vector<string> TurkeyVec;
	int iter;

	
	ifstream in("List.txt");

	if (!in)
	{
		cout << "The file could not be read at this time. Please make sure the file is placed in the correct path." << endl;
	}

	if (in.is_open()) {

		string str;
		while (getline(in, str)) {
			//cout << str << endl;
			TurkeyVec.push_back(str);

		}
		in.close();

		while (!TurkeyVec.empty())
		{
			TurkeyVec.pop_back();
		}
	 
		/*for (vector<string>::const_iterator iter = TurkeyVec.begin(); iter != TurkeyVec.end(); ++iter)
		{

		//	cout << *iter << endl;
		}
	*/
	}else cout << "Didn't open";

}

// Thanks to Stack Overflow user 0x499602d2 we found this code to help us seperate out an integer from a string

std::string extract_ints(std::ctype_base::mask category, std::string str, std::ctype<char> const& facet)
{
	using std::strlen;

	char const *begin = &str.front(),
		*end = &str.back();

	auto res = facet.scan_is(category, begin, end);

	begin = &res[0];
	end = &res[strlen(res)];

	return std::string(begin, end);
}

std::string extract_ints(std::string str)
{
	return extract_ints(std::ctype_base::digit, str,
		std::use_facet<std::ctype<char>>(std::locale("")));
}

