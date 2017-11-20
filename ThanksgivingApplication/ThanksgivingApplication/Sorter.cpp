#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "Sorter.hpp"
#include "Reader.hpp"

using namespace std;

void Sorter() 
{
	int ite;
	vector<string> sorted;
	sort(TurkeyVec.begin(), TurkeyVec.end());


	for (vector<string>::const_iterator iter = TurkeyVec.begin(); iter != TurkeyVec.end(); ++iter)
	{
	cout << *iter << endl;
	}
	

	/*for (vector<string>::const_iterator ite = TurkeyVec.begin(); ite != TurkeyVec.end(); ++ite)
	{
		sorted.push_back(ite);
	}
	*/
}