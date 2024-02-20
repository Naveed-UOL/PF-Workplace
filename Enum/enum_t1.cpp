#include <iostream>
using namespace std;

enum week{Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

int main()
{
	
	week today;
	today = Tuesday;
	cout << "Today is " << today + 1 << " day of the week.";
}