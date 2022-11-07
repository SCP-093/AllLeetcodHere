﻿#include <iostream>
#include "Solution03.h"
//#include "Notes.h"

template <typename T>
void printV(vector<T>& v)
{
	for (auto& i : v)
		cout << i << " ";
	cout << endl;
}

template <typename T>
void printVV(vector<vector<T> >& t)
{
	for (auto& i : t)
	{
		for (auto& j : i)
			cout << j << " ";
		cout << endl;
	}
}

void test()
{
	vector<vector<int> > grid = { { 0, 6, 0 }, { 5, 8, 7 }, { 0, 9, 0 } };
	cout << Solution().getMaximumGold(grid) << endl;
}

int main(void)
{
	test();
}

