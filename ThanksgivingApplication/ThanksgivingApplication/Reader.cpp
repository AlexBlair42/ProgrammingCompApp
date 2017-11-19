#include <iostream>
#include "Reader.hpp"
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
	//bool isRead = false;

	cout << "We will now read from a text file that supplies a shopping list for Black Friday." << endl;

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
	 
		/*for (vector<string>::const_iterator iter = TurkeyVec.begin(); iter != TurkeyVec.end(); ++iter)
		{
			cout << *iter << endl;
		}*/
	
	}else cout << "Didn't open";

}