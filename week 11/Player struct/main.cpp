
#include <iostream>
#include "Player_struct.h"

using namespace std;

int main() {
	
	Player ryan = {"Ryan", 11, 100.f, 10.f, 50.f};
	
	ryan.playerInfo();
	
	ryan.takeDamage(3.f);
	
	ryan.playerInfo();
		
	return 0;
}