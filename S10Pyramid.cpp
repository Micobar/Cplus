#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string user_input{};
    
    cout << "Enter characters for pyramid: " << endl;
    getline(cin, user_input);
    
    // checking size of the input
    size_t SL = user_input.size();
    
    // pyramid loop
    for(size_t i{}; i < SL; ++i){
        // printing out spaces
        for(size_t j{}; j < SL - i; ++j){
            cout << " ";
        }
        // displaying left half
        for(size_t j{}; j <= i; ++j){
            cout << user_input[j];
        }
        // displaying right half
        for(size_t j{i - 1}; j < SL; --j){
            cout << user_input[j];
        }
        cout << endl;
    }
    

    
    return 0;
}