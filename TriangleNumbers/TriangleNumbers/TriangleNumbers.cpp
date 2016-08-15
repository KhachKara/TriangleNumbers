#include <stdafx.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstdio>

using namespace std;


int main()
{
	unsigned long long int StartNumber = 0, Input = 0, Output = 0;
	long double FinalNumber = 9223372036854775807;

	cin >> Input;
	if (Input > 0 && Input <= FinalNumber) {
		for (int i = 0; i <= Input; i++)
		{
			StartNumber = StartNumber + i;
			if (StartNumber == Input) {
				Output = i;
				cout << Output;
				break;
			}
		}
		if (!Output)
			cout << 0;
	}
	else
		cout << 0;
	cin.get();
	cin.get();
	return 0;
}