#include <iostream>

using namespace std;


void print_array(const int[], size_t); // array unchangeable
void set_array(int[], size_t, int);// array has to be changeable, as the values will be set

// this function prints out elements in the array
void print_array(const int arr[], size_t size){
    for(size_t i{}; i < size; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// this function assigns every element in the array to specified value
void set_array(int arr[], size_t size, int value){
    for(size_t i{}; i < size; ++i){
        arr[i] = value;
    }
}

int main(){
    
    int scores[]{100, 99, 98, 97, 96, 95};
    
    print_array(scores, 5); // prints out each element as it is
    
    //now using set_array function to change values in the array
    set_array(scores, 5, 50); // all elements in the arrays have now value of 50
    print_array(scores, 5); // prints out all elements, but now changed
    return 0;
}