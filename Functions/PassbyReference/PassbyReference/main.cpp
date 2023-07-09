#include <iostream>
#include <string>
#include <vector>

using namespace std;

// pass by reference is like pass by location creates an alias to the actual param, vs a copy parameters change

// prototypes
void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &v);
void print_vector(const vector<string> &v); // const


// functions
void pass_by_ref1(int & num){
    num=1000;
}


void pass_by_ref2(string &s){
    s="Changed";
}

void pass_by_ref3(vector<string> &v){
    v.clear();
}

void print_vector(const vector<string> &v){
    for (auto s: v)
        cout << s << " ";
        cout << endl;
    
}

int main(){
    int num{10};
    int another_num{20};
    cout << "num before calling pass_by_ref1: " << num << endl;
    pass_by_ref1(num);
    cout << "num after calling pass_by_ref1: " << num << endl;

    cout << "num before calling pass_by_ref1: " << another_num << endl;
    pass_by_ref1(another_num);
    cout << "num after calling pass_by_ref1: " << another_num << endl;
    
    string name{"Bryan"};
    cout << "string before calling pass_by_ref2: " << name << endl;
    pass_by_ref2(name);
    cout << "name after calling pass_by_ref2: " << name << endl;
    
    vector<string> stooges {"Larry", "Moe", "Curly"};
    cout << "\nstooges before calling pass_by_value3: ";
    print_vector(stooges);
    pass_by_ref3(stooges);
    cout << "stooges after calling pass_by_value3: ";
    print_vector(stooges);
    
}