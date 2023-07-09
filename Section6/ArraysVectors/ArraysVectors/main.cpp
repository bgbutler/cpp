#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector <int> my_scores {100, 95, 99, 87, 88};
    cout << "\nThe first score is " << my_scores[0] << endl;
    cout << "\n" << endl;
    
    
    // another method
    vector <int> test_scores {100, 95, 99, 87, 88};
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << test_scores.at(4) << endl;
    
    // add a new value
    test_scores.push_back(80);
    cout << "\nThe last score is " << test_scores[5] << endl;
    cout << "\nThere are " << test_scores.size() << " scores in the vector" << endl;
    
    
    // change the values
    cout << "\nEnter 3 test scores separated by a space: ";
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);
    
    cout << "\nUpdated test scores; " << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    
    cout << "\nThere should cause an exception!" << test_scores.at(10) << endl;
    
    return 0;
}