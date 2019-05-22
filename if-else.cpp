#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a,b;

	cout << "First number: ";
	cin >> a;

	cout << "Second number: ";
	cin >> b;

	if (a < b)
		cout << "First number is less than second. \n";
	else if (a > b)
		cout << "Second number is less than second. \n";
	else
		cout << "First number is equal the second number." ;

	_getch();
	return 0;
}
