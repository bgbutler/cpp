#include <iostream>;
#include <vector>;
using namespace std;

int main(){
    
    int num_items{};
    
    cout << "How many dta items do you have? ";
    cin >> num_items;
    
    // vector more dynamic than array
    vector <int> data {};
    
    for (int i{1}; i <= num_items; ++i){
        int data_item{};
        cout << "Enter data item" << i << ": ";
        cin >> data_item;
        data.push_back(data_item);
    }
    
    cout << "\nDisplaying Histogram" << endl;
    for (auto val:data) {
        for (int i{}; i <=val; ++i){
            if (i % 5 == 0)
                cout << "*";
            else
                cout << "-";
        }
        cout << endl;
    }

        
    cout << endl;
    return 0;
}