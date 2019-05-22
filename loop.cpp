#include <iostream>
#include <conio.h>
  using namespace std;

  int main()
  {
	  int count, randnum;

	  for (count = 1; count <= 10; count++)
	  {
		  randnum = rand();
		  cout << randnum << endl;

	  }
	_getch();
	return 0;
  }