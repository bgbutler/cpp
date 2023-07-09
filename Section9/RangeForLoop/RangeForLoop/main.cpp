#include <iostream>
#include <vector>
using namespace std;

int main(){
    int scores [] {100, 90 , 97};

    for (int score : scores)
        cout << score << endl;
        
        
    //option
    for (auto score : scores)
        cout << score << endl;
    
    //   USING A VECTOR 
    cout << "Temps" << endl;
    vector <double> temps {87.2, 77.1, 80.0, 72.5};
    
    double average_temp {};
    double running_sum {};
    
    for (auto temp : temps)
        running_sum += temp;
        
    average_temp = running_sum/temps.size();
    cout << "Average Temp: " << average_temp << " from " << temps.size() << " readings" << endl;
    
    // work with a string
    // for character need to use the '' vs ""
    cout << "String Time" << endl;
    for (auto c: "This is a test")
        if (c == ' ')
            cout << "\t";
        else
            cout << c;
        

    
}