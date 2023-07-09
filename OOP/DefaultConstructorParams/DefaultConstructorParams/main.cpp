#include <iostream>
#include <string>

using namespace std;

class Player{
private:
    std::string name;
    int health;
    int xp;
public:

   
    Player (std::string name_val = "None", int health_val = 0, int xp_val = 0);
};
    
    // make overloaded constructors with initializing lists
    // use delgating to reduce doplicatios
    
    
    Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}{
        cout << "Three args constructor" <<  endl;
    }



int main(){
   
   Player empty; 
   Player bryan {"Bryan", 100, 20};
   Player monster {"Orc", 100};
   Player god {"God", 100, 100};
    
    return 0;
}