//
//  main.cpp
//  PureVirtualFunctions
//
//  Created by Bryan on 11/29/22.
//  Copyright © 2022 Bryan. All rights reserved.
//

#include <iostream>
#include <vector>

// abstract base class
class Shape{
    private:
    public:
        virtual void draw() = 0;
        virtual void rotate() = 0;
        virtual ~Shape(){};
};

// abstract class since no override of methods
class Open_Shape : public Shape{
    public:
        virtual ~Open_Shape(){}
};

// abstract class
class Closed_Shape : public Shape {
    public:
    virtual ~Closed_Shape(){};
};

// concrete class
class Line: public Open_Shape{
    public:
        virtual void draw() override {
            std::cout << "Drawing a line" << std::endl;
        }
    
        virtual void rotate() override {
            std::cout << "Rotating a line" << std::endl;
    }
        virtual ~Line(){}
};


// concrete class
class Circle: public Closed_Shape{
    public:
        virtual void draw() override {
            std::cout << "Drawing a circle" << std::endl;
        }
    
        virtual void rotate() override {
            std::cout << "Rotating a circle" << std::endl;
    }
        virtual ~Circle(){}
};


// concrete class
class Square: public Closed_Shape{
    public:
        virtual void draw() override {
            std::cout << "Drawing a square" << std::endl;
        }
    
        virtual void rotate() override {
            std::cout << "Rotating a square" << std::endl;
    }
        virtual ~Square(){}
};

// pass by reference
void screen_refresh(const std::vector<Shape *> &shapes){
    std::cout << "Refreshing the screen" << std::endl;
    for (const auto p: shapes)
        p->draw();
}


int main(int argc, const char * argv[]) {
    // insert code here...
    
    // Circle c;
    // c.draw();
    
    // Shape *ptr = new Circle;
    // ptr->draw();
    // ptr->rotate();
    
    Shape *s1 = new Line();
    Shape *s2 = new Circle();
    Shape *s3 = new Square();
    
    
    
    s1->draw();
    s2->rotate();
    s3->draw();
    
    std::cout << "\n======   Using a Vector =======" << std::endl;
    
    std::vector<Shape *> shapes {s1, s2, s3};
    screen_refresh(shapes);
    
    
    
    delete s1;
    delete s2;
    delete s3;
    
    
    return 0;
}
