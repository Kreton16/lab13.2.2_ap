#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ukrainian");
	cout << "Date: " << __DATE__ << endl;
	cout << "File location: " << __FILE__ << endl;
	cout << "Lines: " << __LINE__ << endl;
	cout << "Conforms to ISO Standard C : ";
	if (__STDC_HOSTED__ == 1)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	cout << "Last change time: " << __TIME__ << endl;
}