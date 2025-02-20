// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void pattern19(int n)
{
	int inispace = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			cout << "*";
		}
		for (int j = 0; j < inispace; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= n - i; j++)
		{
			cout << "*";
		}
		inispace += 2;
		cout << endl;
	}

	inispace = 2 * n - 2;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		for (int j = 0; j <= inispace; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		inispace -= 2;
		cout << endl;
	}
}

int main()
{
	// Write C++ code here
	int n;
	cin >> n;
	pattern19(n);

	return 0;
}