#include <iostream>

using namespace std;

int main(){
    
    // Ask user for an integer
    int num{};
    cout << "Enter an integer: ";
    cin >> num;
    
    cout << "\nYou have entered number: " << num << endl;
    cout << endl;
    // even or odd using if statement
    cout << "===== Using if statement =====" << endl;
    if(num % 2 == 0)
        cout << "\nNumber " << num << " is Even" << endl;
    else
        cout << "\nNumber " << num << " is Odd" << endl;
    cout << endl;
    // even or odd using conditional operator
    cout << "===== Using conditional operator =====" << endl;
    cout << "\nNumber " << num << " is " << ((num % 2 == 0)? "Even" :"Odd");
    
    cout << endl;
    return 0;
}