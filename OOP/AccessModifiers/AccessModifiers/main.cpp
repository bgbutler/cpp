#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Player{
private:
    // attriibutes
    string name {"Player"};
    int health;
    int xp;
    
public:
    // methods
    void talk(string text_to_say){cout << name << " says " << text_to_say << endl;}
    bool is_dead();
};



int main(){
    
    Player bryan;
    //bryan.name = "Bryan";
    //cout << bryan.health << endl;
    
    bryan.talk("hello there");
    return 0;
}