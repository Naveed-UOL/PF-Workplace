#include <iostream>
using namespace std;

enum suit{
	Spade = 10,
	Heart = 20,
	Club = 30,
	Diamond = 40,
}card;

int main(){
	card = Club;
	cout << "Size of the enum list is " << sizeof(card) << " bytes.";
	
}