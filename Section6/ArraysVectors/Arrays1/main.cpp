#include <iostream>

using namespace std;

int main(){
    char vowels[] {'a','e','i','o','u'};
    cout << "\nThe first vowel is " << vowels[0] << endl;
    cout << "\nThe last vowel is " << vowels[4] << endl;
    
    // should crash or throw an error
    // actually gives a warrning
    // cin >> vowels[5];
    
    double hi_temps[] {90.1, 89.8, 77.5, 81.6};
    cout << "\nThe first hi temperature is " << hi_temps[0] << endl;
    
    // change the value
    hi_temps[0] = 100.77;
    cout << "\nThe first hi temperature is now " << hi_temps[0] << endl;
    
    // alternative method don't initialize right away
    // without the {} will fill with junk
    // int test_scores[5]{100} will only fill the first value with 100, rest with 0
    int test_scores[5]{};
    cout << "\nFirst score at index 0: " << test_scores[0] << endl;
    cout << "First score at index 0: " << test_scores[1] << endl;
    cout << "First score at index 0: " << test_scores[2] << endl;
    cout << "First score at index 0: " << test_scores[3] << endl;
    cout << "First score at index 0: " << test_scores[4] << endl;
    
    cout << "\nWill output the address of the array as the object: " << test_scores << endl;
    
    return 0;
}