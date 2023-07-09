#include <iostream>
#include <string>

using namespace std;

class Player{
private:
    std::string name;
    int health;
    int xp;
public:

    // overlaoded constructor
    Player();
    Player(std::string name_val);
    Player (std::string name_val, int health_val, int xp_val);
};
    
    // make overloaded constructors with initializing lists
    Player::Player() 
        : name{"None"}, health{0}, xp{0}{
    }
    
    Player::Player(std::string name_val)
       : name{name_val}, health{0}, xp{0}{
    }
    
    
    Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}{
    }



int main(){
   Player Hero;
   
   Player empty; 
   Player bryan {"Bryan"};
   Player monster {"Orc", 100, 50};
    
    return 0;
}