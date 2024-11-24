
#include <iostream>
#include <string>

using namespace std;

struct Player
{
	string name;
	int level;
	float health;
	float damage;
	float stamina;
	
	void takeDamage(float dmg) {
		
		cout << name << " took damage: " << dmg << endl;
		
		health -= dmg;
		damage += dmg;
		stamina -= 4.f;
	}
	
	int getLevel() {
		
		if(level > 10) {
			
			cout << "Level is over 10! \n";
		}
		
		return level;
	}
	
	int getHealth() {
		
		if(health < 80.f) {
			
			cout << "Health less than 80! \n";
		}
		
		return health;
	}
	
	void playerInfo() {
		
		cout << name << "'s " << "level: " << level << ", health: " << health << ", damage: " << damage 
			<< ", stamina: " << stamina << endl;
	}
};