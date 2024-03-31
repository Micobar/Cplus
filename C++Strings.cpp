#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    
    // declaring a string
    
    string s0;
    string s1{"Apple"};
    string s2{"Banana"};
    string s3{"Kiwi"};
    string s4{"apple"};
    string s5{s1};      // Displays Apple
    string s6{s1, 0, 3};// Displays App
    string s7(10, 'X'); // Displays XXXXXXXXXX | Using () instead {} - constructor style intialization
    
    cout << "===== Initialised strings =====" << endl;
    cout << "This is string s1: "<< s1 << endl;
    cout << "This is string s2: "<< s2 << endl;
    cout << "This is string s3: "<< s3 << endl;
    cout << "This is string s4: "<< s4 << endl;
    cout << "This is string s5: "<< s5 << endl;
    cout << "This is string s6: "<< s6 << endl;
    cout << "This is string s7: "<< s7 << endl;
    cout << "===============================" << endl;
    
    // Assign word "Watermelon" to the s1 string
    s1 = "Watermelon"; 
    cout << "\nString s1 = 'Apple' in now assigned to: " << s1 << endl;
    
    // Assign "watermelon" to s2
    s2 = s1; 
    cout << "\nString s2 has been assigned to s2, and now s2 is: " << s2 << endl;
    
    // Assign "Pablo" to the string s3
    s3 = "Pablo";
    cout << "\nThis is now string s3: " << s3 << endl;
    
    // Change first letter to "T"
    s3[0] = 'T'; // or s3.at(0) = 'T';
    cout << "\nPablo now is: " << s3 << endl;
    
    // Concatenate strings 
    s3 = "Orange";
    s5 = s1 + " and " + s3 + " juice";
    cout << "\nI really like " << s5 << endl;
    
    // Loop trough s3
    for(size_t i{0}; i < s3.length(); ++i) // for loop
        cout << s3[i];
    cout << endl;
    
    for(char x: s3) // ranged base for loop
        cout << x;
    cout << endl;
    
    // Substrings
    cout << "========================" << endl;
    string test{"Joker is my cat"};
    
    cout << test.substr(9, 6) << endl; // position 9, and 6 characters string not changed
    cout << test.substr(6, 2) << endl; // position 6, and 2 characters 
    
    test = test.substr(0, 5); // chosing position 0, and 5 characters
    cout << test << endl; // now string is changed
    
    // Erasing characters
    string test1{"Erasing characters from string"};
    
    cout << "\nString looks like this now: " << test1 << endl;
    test1.erase(8, 10);
    cout << "\nString after erasing looks like this: " << test1 << endl;
    
    // Read whole line from the input
    
    string full_name{};
    
    cout << "\n====== Etnter your full name =====" << endl;
    getline(cin, full_name);
    cout << "\nYour name is: " << full_name << endl;
    return 0;
}