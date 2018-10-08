/* File: VectorDriver.cpp
* Athr: Dimitri Zarzhitsky
* Date: October 16, 2002
*
* Desc: provides the basic framework and examples for an introduction to
*       the STL::vector, iterators, and the algorithms facilities.
*
* Edited by: Rafe Cooley
* Date: October 1, 2017 (the future)
*
*/
// Modified by Evan Staben
//10/8/2018
//lab 04
//header file with function definitions
typedef unsigned long ulong;

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::rand;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
	for (ulong i = 0; i<data.size(); i++) {
		data.at(i) = i;
	}
}

// print our vector in a fancy way
void print(const vector<short> &data) {
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);
		for (ulong i = 1; i<data.size(); i++) {
			cout << ", " << data.at(i);
		}
		cout << ">";
	}
}

//  use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
	std::vector<short>::const_iterator iter = data.begin();

	short sum = 0;
	while (iter != data.end()) {
		sum += *iter;
		iter++;
	}

	return sum;
}
// 1.add ten random numbers using rand to generate random numbers and push_back to push into vector. 
void add_numbers(vector<short> &data)
{
	for (ulong i = 0; i < 10; i++)
	{
		data.push_back((rand() % 100));
	}
}
// 2.implement print_even by changing normal print function to increment by 2 instead of 1, thus skipping odd iterators.
void print_even(const vector<short>& data)
{
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<";
		for (ulong i = 0; i<data.size(); i+=2) {
			cout << ", " << data.at(i);
		}
		cout << ">";
	}
}
// 3.adapts compute_sum to only test if current entry is equal to entered value instead of accumulating the sum. 
bool is_present(const vector<short> &data, short value)
{
	std::vector<short>::const_iterator iter = data.begin();
	bool isThere = false;
	while (iter != data.end()) {

		if (*iter == value)
		{
			isThere = true;
		}
		iter++;
	}

	return isThere;
}
// TODO: implement std::sort function
