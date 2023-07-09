#include <iostream>


using namespace std;

class Base {
    // note freidns of base have access to all
    public:
        int a {0};
        void display() {
            std::cout << a << ", " << b << ", " << c << endl;
            }  //member method to access to all
    
    protected:
        int b {0};
        
    private:
        int c {0};

};

class Derived: public Base {
public:
    void access_base_members(){
        a = 100; // ok
        b = 200; // ok
        // c = 300; // not available
    }
};



int main(){
    cout << "=== Base member access from base objects ==========" << endl;
    Base base;
    base.a = 100; // OK
    // base.b = 200; // compiler error
    // base.c = 300;  //compile error
    
    
    cout << "=== Base member access from derived objects ==========" << endl;
    Derived d;
    d.a = 100;  //ok
    // d.b = 200;  // error
    // d.c = 300;  // error
    
    return 0;
}