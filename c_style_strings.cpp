#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(){
    
    char first_name[20]{};
    char last_name[20]{};
    char full_name[40]{};
    char name[40]{};
    cout << "Please enter first name: ";
    cin >> first_name;
    
    cout << "Please enter last name: ";
    cin >> last_name;
    cout << endl;
    
    cout << "\nHello " << first_name << ", your first name has " 
    << strlen(first_name) << " characters" << endl;
    
    cout << "\nYour last name " << last_name << " has " << strlen(last_name) << " characters" << endl;
    
    strcpy(full_name, first_name); // copy first name to a full name
    strcat(full_name, " ");  // concatenates space to a full name
    strcat(full_name, last_name);  // concatenates last name to a full name
    
    cout << "\nYour full name is " << full_name << endl;
    cout <<"========================================" << endl;
    
    
    cin.ignore(256, '\n'); // resets the \n call from the previous input | allows to use cin.getline()
    cout << "Enter your full name: ";
    cin.getline(name,40); // function getline() allows to read the whole name
    
    // capitalising every character
    for(size_t i{0}; i<strlen(name); ++i)
        name[i] = toupper(name[i]);
        
    cout << "\nYour full name capitalised: " << name << endl;

    return 0;
}