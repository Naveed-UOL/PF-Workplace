#include <iostream>
using namespace std;

enum numbers{
	one = 1,
	two = 2,
	three = 3,
	four = 4,
}gate;

int main()
{
	int gate = (one | two) & four;
	/*
		0001 1
	OR	0010 2
		----
		0011 3
	AND	0100 4
		----
		0000 0	
	*/
	cout << gate;
}

