
#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector <int> vector1;
    vector <int> vector2;
    
    vector1.push_back(10);
    vector1.push_back(20);
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "\nlVector1 has " << vector1.size() << " elements." << endl;
   
    vector2.push_back(100);
    vector2.push_back(200);
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "\nlVector2 has " << vector2.size() << " elements." << endl;
    
    // create a 2d vector
    vector <vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    cout << "\nvector_2d: " << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    
    // change vector 1.at(0) to 1000
    vector1.at(0) = 1000;
    
    // redisplay the elemets of the 2_d
    cout << "\nvector_2d: " << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    
    // display vector 1
    cout << "\nVector1: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    
    return 0;
    
    




}