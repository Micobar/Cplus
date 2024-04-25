#include <iostream>

using namespace std;

int main(){
    
    /*
     * string s1 = "Joker";
     * string s2 = "Joker";
     * 
     * string *p1 = &s1;
     * string *p2 = &s2;
     * string *p3 = &s1;
     * 
     * one is false because the address of the pointer is different
     * cout << (p1 == p2); <-- false
     * cout << (p1 == p3); <-- true
     * 
     * both are true, because after derefferencing all pointers show the same value
     * cout << (*p1 == *p2); <-- true
     * cout << (*p1 == *p3); <-- true
    */
    
    int arr[] = {50, 25, 38, -1};
    int *arr_ptr = arr;
    
    while(*arr_ptr != -1){ 
        cout << *arr_ptr << endl;
        arr_ptr++;
    }
    
    cout << "\n########################" << endl;
    cout << endl;
    
    // resetting the value of arr_ptr
    arr_ptr = arr; // arr_ptr has a value of -1, and needs to be reset for the other loop to work
    
    while(*arr_ptr != -1){
        cout << *arr_ptr++ << endl; //another exmaple with shorter code, works the same as previous example
    }
    return 0;
}