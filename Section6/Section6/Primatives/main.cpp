#include <iostream>

using namespace std;

int main(){
    char middle_initial {'G'}; // notice the single quotes around characters
    cout << "My middle initial is " << middle_initial << endl; 



/***************
* Integer types
****************/
    // same as unsigned short exam_score
    unsigned short int exam_score {55};
    cout << "My exam score was " << exam_score << endl;
    
    int countries_represented {65};
    cout << "There are " << countries_represented << " countries represented today." << endl;
    
    long people_in_florida {20610000};
    cout << "There are " << people_in_florida <<  " people in Florida." << endl;
    
    // this does not produce an error
    long people_on_earth {7600000000};
    cout << "There are " << people_on_earth <<  " people on earth." << endl;

    // this does not require a long long
    long distance_to_alpha_centauri {9461000000000};
    cout << "Alpha Centauri is  " << distance_to_alpha_centauri <<  " km away." << endl;
    
    
/**********************
 * Floating Point Types
***********************/
    
    float car_payment {425.52};
    cout << "My car payment is  " << car_payment <<  " dollars" << endl;
    
    double pi {3.14159};
    cout << "Pi is " << pi << endl;
    
    long double large_amount {2.7e120};
    cout << large_amount << " is a very big number" << endl;
    
    
/***************
 * Booolean
****************/

    bool game_over {false};
    cout << "The game is over " << game_over << endl;
    
    
/**************
* Overflow
***************/
    // need to make the product a long not short - else overflow error
    short value1 {30000};
    short value2 {1000};
    long product {value1 * value2};

    cout << "The product of " << value1 << " and " << value2 << " is " << product << endl;
    
    return 0;
   
    
    
    
}