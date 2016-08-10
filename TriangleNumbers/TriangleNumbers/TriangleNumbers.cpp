// TriangleNumbers.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstdio>

using namespace std;


int main()
{
	int StartNumber = 0, Input = 0, Output = 0;
	long double FinalNumber = 9223372036854775807;

	cin >> Input;
	if (Input > 0 && Input <= FinalNumber && Input) {
		for ( int i = 0; i <= Input; i++)
		{
			StartNumber = StartNumber + i;
				if (StartNumber == Input) {
					Output = i;
					cout << "input: " << Input << endl << "Output: " << Output;
						break;
				}
		}
		if (Output) {

		}
		else (cout << "0");
	} else (cout << "0");

	cin.get();
	cin.get();
	return 0;

}