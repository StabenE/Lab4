// Lab04.cpp
//Evan Staben
//10/8/2018
//Test function

#include "stdafx.h"
#include "VectorDriver.h"
#include <algorithm>
using std::sort;
int main() {
	cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
	vector<short> sample_vector(5);

	cout << "new vector: ";
	print(sample_vector);
	cout << endl;

	fill_vector(sample_vector);

	cout << "filled vector: ";
	print(sample_vector);
	cout << endl;

	cout << "\nsum of vector's elements: " << compute_sum(sample_vector) << endl;
	//instatiate empty test vector and use it to test add_numbers and print_even
	vector<short> Vec1;
	add_numbers(Vec1);
	add_numbers(Vec1);
	print(Vec1);
	cout << endl;
	print_even(Vec1);
	cout << endl;
	//instatiate empty test vector for testing sort, fill with 5 random entries and print out
	vector<short> Vec2;
	for (ulong i = 0; i < 5; i++)
	{
		Vec2.push_back((rand() % 100));
	}
	print(Vec2);
	cout << endl;
	//sort function from start to end and print out to test
	sort(Vec2.begin(), Vec2.end());
	print(Vec2);
	cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;
	system("pause");
	return 0;
}
