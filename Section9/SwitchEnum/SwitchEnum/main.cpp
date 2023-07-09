#include <iostream>
using namespace std;

int main(){
    enum Direction {
        north, south, east, west
    };
    
    Direction heading {north};
    
    switch (heading){
        case north:
           cout << "Heading north" << endl;
           break;
        case south:
           cout << "Heading south" << endl;
           break;
    }
}