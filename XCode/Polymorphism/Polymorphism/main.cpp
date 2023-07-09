//
//  main.cpp
//  Polymorphism
//
//  Created by Bryan on 11/28/22.
//  Copyright © 2022 Bryan. All rights reserved.
//

#include <iostream>
#include <memory>

class Base{
    public:
        void say_hello() const {
            std::cout << "Hello - I'm a Base class object" << std::endl;
        }
};

class Derived: public Base{
    public:
        void say_hello() const {
            std::cout << "Hello - I'm a Derived class object" << std::endl;
        }
        
};

void greetings(const Base &obj){
    std::cout << "Greeetings: ";
    obj.say_hello();
}




int main() {
    Base b;
    b.say_hello();
    
    Derived d;
    d.say_hello();
    
    greetings(b);
    greetings(d);
    
    Base *ptr = new Derived();
    ptr->say_hello();
    
    std::unique_ptr<Base> ptr1=std::make_unique<Derived>();
    ptr1->say_hello();
    
    delete ptr;
    
    return 0;
}