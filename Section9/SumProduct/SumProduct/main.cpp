#include <iostream>
#include <vector>

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
    
    // output the sum product
    int result {};
    cout << "\nDisplaying SumProduct" << endl;
    for (size_t i=0; i<data.size(); ++i)
        for (size_t j = i+1; j<data.size(); ++j)
            result = result + data.at(i) * data.at(j);
            
    cout << "The sum product is " << result << endl;
    cout << endl;
    return 0;
    
}