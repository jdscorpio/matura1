// ConsoleApplication34.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

vector<int> collatza(int n)
{
	vector<int> v;

	v.push_back(n);
	while (n > 1)
	{
		if (n % 2 == 0)
			n /= 2;
		else
			n = 3 * n + 1;
		v.push_back(n);
	}
	return v;
}

int najwieksza(int tab[], int n)
{
	int maks = -1000000;
	int indeks;
	for (int i = 1; i <= n; i++)
		if (maks < tab[i])
		{
			maks = tab[i];
			indeks = i;
		}
			
	return indeks;
}

void pisz(vector<int> v)
{
	for (auto i : v)
	{
		cout << i << " ";
	}

}

int main()
{
	// pisz(collatza(34));
	int N = 1000;
	int tab[1001];
	for (int i=1; i<=N; i++)
	{
		vector<int> temp = collatza(i);
		tab[i] = temp.size();
	}

	cout << najwieksza(tab, N) << endl;
	cout << tab[najwieksza(tab, N)];
}

