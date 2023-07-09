#include <iostream>
#include <string>

using namespace std;

class Deep {
private:
    // raw pointer to singel integer
    int *data;

public:
    void set_data_value(int d) {*data = d;}
    int get_data_value(){return *data;}
    //constructor
    Deep(int d);
    // copy constructor
    Deep(const Deep &source);
    // destructor
    ~Deep();

    
};

Deep::Deep(int d){
    data = new int;
    *data = d;
}


// Deep copy constructor
// Copies pointer and data pointed to by pointer
Deep::Deep(const Deep &source)
    {
        data = new int;
        *data = *source.data;
        cout << "Copy constructor - Deep copy" << endl;
    }


// deep copy constructor  - delegation
/*Deep::Deep(const Deep &source)
    : Deep{*source.data}{
        cout  << "Copy Constructor - deep" << endl;
    }*/





Deep::~Deep(){
    delete data;
    cout << "Deconstructor freeing data" << endl;
}

void display_Deep(Deep s){
    cout << s.get_data_value() << endl;
}

int main(){
    
    Deep obj1{100};
    display_Deep(obj1);
    
    Deep obj2 {obj1};
    obj2.set_data_value(1000);
    
    return 0;
}