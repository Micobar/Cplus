#include <iostream>

using namespace std;


void data(int *int_ptr){
    *int_ptr *= 2;
}

int main(){
    
    int value = 10;
    int *int_ptr{nullptr};
    
    cout << "Value: " << value << endl;
    data(&value);
    cout << "\nValue: " << value << endl;
    
    // now the same but using a pointer
    
    cout << "\n#########################" << endl << endl;
    
    int_ptr = &value;
    data(int_ptr);
    cout << "Value: " << value;
    return 0;
}