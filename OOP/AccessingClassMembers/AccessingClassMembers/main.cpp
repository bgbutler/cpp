#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
public:
    // attributes
    string name;
    int health{10};
    int xp{3};
    
    // methods prototypes for now
    void talk(string text_to_say){
        cout << name << " says " << text_to_say << endl;
    }
    bool is_dead();
    
};

class Account{
public:
        string name{"Account"};
        double balance;
        
        // methods
        bool deposit(double bal){
            balance += bal;
            cout << "In Deposit" << endl;
        }
        bool withdraw(double bal){
            balance -= bal;
            cout << "In Withdraw" << endl; 
        }
};



int main() {
    
    Player bryan;
    
    bryan.name = "bryan";
    bryan.health = 100;
    bryan.xp = 12;
    bryan.talk("hello hero");
    
    Player *enemy = new Player;
    
    (*enemy).name = "Sauron";
    (*enemy).health = 100;
    enemy->xp = 15;
    
    enemy->talk("I will destroy you!");
    
    Account bryan_account;
    bryan_account.name = "Bryan's account";
    bryan_account.balance = 5000.0;
    
    bryan_account.deposit(1000.0);
    bryan_account.withdraw(500.0);
    
    
    
    
    return 0;
}