#include <iostream>
#include <string>

using namespace std;

class Player{
private:
    std::string name;
    int health;
    int xp;
public:
    std::string get_name(){return name;}
    int get_health() {return health;}
    int get_xp() {return xp;}
   
    Player (std::string name_val = "Player", int health_val = 0, int xp_val = 0);
    // copy constructor
    Player(const Player &source);
    
    // copy destructor
    ~ Player() {cout << "Destructor called for: " + name << endl;}
};
    
    // make overloaded constructors with initializing lists
    // use delegating to reduce duplications
    
    
    Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}{
        cout << "Three args constructor for " + name <<  endl;
    }
    
    // make the copy constructor
    Player::Player(const Player &source)
    // this initializes it
    //    : name(source.name), health(source.health), xp(source.xp){
    // this uses delegation
        : Player {source.name, source.health, source.xp} {
            cout << "Copy constructor - made copy of : " << source.name << endl;
        }


void display_player(Player p){
    cout << "Name: " << p.get_name() << endl;
    cout << "Health: " << p.get_health() << endl;
    cout << "XP: " << p.get_xp() << endl;
}




int main(){
   
   Player empty {"Empty", 100, 50}; 
   
   Player my_new_object{empty};
   
   display_player(empty);
   
   
   Player bryan {"Bryan", 100, 20};
   Player monster {"Orc", 100};
   Player god {"God", 1000, 1000};
    
    return 0;
}