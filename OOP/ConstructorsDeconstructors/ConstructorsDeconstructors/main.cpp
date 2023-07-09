#include <iostream>
#include <string>

using namespace std;

class Player{
private:
    std::string name;
    int health;
    int xp;
public:
    void set_name(std::string name_val){
        name = name_val;
    }
    
    //Overloaded Constructors
    Player(){
        cout << "No args constructor called" << endl;
    }
    
    Player(std::string name){
        cout << "String arg constructor called" << endl;
    }
    
    Player(std::string name, int health, int exp){
        cout << "Three args constructor called" << endl;
    }
    
    ~Player(){
        cout << "Destructor called for " << name << endl;
    }
};


int main(){
    
    // use code blocks for automatic destructor
    // when go out of scope desconstructed
    // destructor goes in reverse order
    {
        Player slayer;
        slayer.set_name("Slayer");
    }
    
    {
        Player bryan;
        bryan.set_name("bryan");
        Player hero ("Hero");
        hero.set_name("Hero");
        Player villain("Villain", 100, 12);
        villain.set_name("Villain");
        
    }
    
    Player *enemy = new Player;
    enemy -> set_name("Enemy");
    
    Player *level_boss = new Player("Level Boss", 100, 300);
    level_boss->set_name("Level Boss");
    
    delete enemy;
    delete level_boss;
    
    
    
    return 0;
}