
/*This script is currently not used*/

#ifndef BASICS_H
#define BASICS_H

#include "stdio.h"
#include "iostream"
#include <string>
#include <vector>
#include <deque>
#include <algorithm>

#include <sstream>
#include <iomanip>


namespace my_basics
{
using namespace std;

bool str2bool(const string &s);

// Convert int to string, and fill it with zero before the number to make it specified width
string int2str(int num, int width, char char_to_fill='0');

// Convert string into a vector of doubles
vector<double> str2vecdouble(const string &pointLine);

// Please sort v1 and v2 first, then this functions returns the intersection of two vector.
vector<int> getIntersection(vector<int> v1, vector<int> v2);




} // namespace my_basics

#endif