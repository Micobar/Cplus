#include <iostream>

using namespace std;

int main(){
    
    int list[5] = {10, 25, 33, 47, 89};
    
    int *list_ptr = list;
    
    cout << "\nArray subscript notatoin" << endl;
    cout << "############################" << endl;
    
    cout << list[0] << endl;
    cout << list[1] << endl;
    cout << list[2] << endl;
    cout << list[3] << endl;
    cout << list[4] << endl;
    
    cout << "\nPointer subscript notatoin" << endl;
    cout << "############################" << endl;
    
    cout << list_ptr[0] << endl;
    cout << list_ptr[1] << endl;
    cout << list_ptr[2] << endl;
    cout << list_ptr[3] << endl;
    cout << list_ptr[4] << endl;
    
    cout << "\nArray offset notatoin" << endl;
    cout << "############################" << endl;
    
    cout << *list << endl;
    cout << *(list + 1) << endl;
    cout << *(list + 2) << endl;
    cout << *(list + 3) << endl;
    cout << *(list + 4) << endl;
    
    cout << "\nPointer offset notatoin" << endl;
    cout << "############################" << endl;
    
    cout << *list_ptr << endl;
    cout << *(list_ptr + 1) << endl;
    cout << *(list_ptr + 2) << endl;
    cout << *(list_ptr + 3) << endl;
    cout << *(list_ptr + 4) << endl;
    
    
    return 0;
}