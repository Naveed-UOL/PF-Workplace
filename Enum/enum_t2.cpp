#include <iostream>
using namespace std; 

enum seasons{summer = 45, winter = 9, spring = 15, autum = 25};

int main(){
	seasons s;
	s = summer;
	
	cout << "Summer is very hot as the temperature is around "<< s << " celsuis in it.";
}