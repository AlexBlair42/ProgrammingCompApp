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
using namespace std;

int count = 0;
priority_queue<string> qout;
// This function will take the sorted data and output it to a new file.
void output() 
{
	ofstream out;

	out.open("SortedList.txt");

}