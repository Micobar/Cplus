#include <iostream>

using namespace std;

int main(){
    
    // declare a pointer
    int *int_ptr{nullptr};
    
    int_ptr = new int;  // allocated on the heap, and storage is held in int pointer
    cout << int_ptr << endl;
    delete int_ptr; // deletes the pointer to free up heap space
    
    size_t size{0};
    double *temp_ptr{nullptr};
    
    cout << "How many temps?: ";
    cin >> size;
    
    temp_ptr = new double[size];
    
    cout << temp_ptr << endl;
    
    delete [] temp_ptr; 
    
    return 0;
}