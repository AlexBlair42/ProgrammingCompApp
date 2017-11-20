/*
Authors: Alex Blair & Eben Schumann
Version 1.0.0
May the odds be ever in your favor! :P
*/
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
#include <queue>
#include <sstream>
#include "Reader.hpp"
using namespace std;

int count = 0;
priority_queue<string> qout;
vector<string> vecout;
// This function will take the sorted data and output it to a new file.
void output() 
{
	ofstream out;

	out.open("SortedList.txt");

	if (!out)
	{
		cout << "The new file could not be opened for writing." << endl;
	}

	if (out.is_open())
	{
		string newstring;
		
		// This is where i run into trouble.... trying to read the contents of the turkeyvec
		// And iterate through so i can output to a file
		// Once this works then it is easy to make a queue output.
		for (vector<string>::const_iterator it = )
	}

}