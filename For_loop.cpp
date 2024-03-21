#include <iostream>

using namespace std;

int main(){
    // simple for loop from 1 to 10 in a column
    
    cout << "===== Simple for loop" << endl;
    for(int i{1}; i<=10; ++i)
        cout << i << endl;
    cout << endl;
    
    // incrementing by 2
    cout << "===== Incrementing by 2" << endl;
    for(int i{1}; i<=10; i+=2)
        cout << i << endl;
    cout << endl;
    
    // Countdown from 10
    cout << "===== Countdown from 10" << endl;
    for(int i{10}; i>0; --i)
        cout << i << endl;
    
    // initialise more than one argument. notice separated by comma
    cout << "===== Initialising more than one argument" << endl;
    for(int i{1}, x{5}; i<=5; ++i, ++x)
        cout << i << " + " << x << " = " << (i+x) << endl;
        
    // displaying rows, and columns using if statement
    cout << "==============================================" << endl;
    for(int i{1}; i<=100; ++i){
        cout << i;
        if(i % 10==0)
            cout << endl;
        else
            cout << " ";
    }
    // displaying rows, and columns using conditional operator
    cout << "==============================================" << endl;
    for(int i{1}; i<=100; ++i)
        cout << i << ((i % 10==0)? "\n": " "); // code is much shorter
    return 0;
}