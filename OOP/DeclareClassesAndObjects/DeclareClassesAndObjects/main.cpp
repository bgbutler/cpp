#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
    // attributes
    string name;
    int health{10};
    int xp{3};
    
    // methods prototypes for now
    void talk(string);
    bool is_dead();
    
};

    class Account{
        string name{"Account"};
        double blanace;
        
        // methods
        bool deposit(double);
        bool withdraw(double);
};

int main(){
    Account bryan_account;
    Account rachel_account;
    
    
    
    
    Player bryan;
    Player hero;
    
    // create them dynamically on the heap
    // Player *enemy {nullptr};
    // enemy = new Player;
    
    // delete enemy;
    
    Player players[] {bryan, hero};
    
    vector<Player> player_vec{bryan};
    player_vec.push_back(hero);
    

    
    
    
    return 0;
}