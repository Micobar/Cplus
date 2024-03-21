#include <iostream>

using namespace std;

int main(){
    
    char grade{};
    
    cout << "Enter expected grade from the exam: ";
    cin >> grade;
    // declaring switch case
    switch(grade){
        case 'a':
        case 'A':
            cout << "You need a 90 or above, study hard!" << endl;
            break; // use break; after each statement
        case 'b':
        case 'B':
            cout << "You need 80 or higher for a B" << endl;
            break;
        case 'c':
        case 'C':
            cout<< "You should study more for a better grade!" << endl;
            break;
        case 'f':
        case 'F':
        // when declaring a variable inside a switch case
        // you have to use "{}" like in example below
            {
            char confirm{};
            cout << "You sure you want an F? ";
            cin >> confirm;
            // you can nest if statement inside a switch case
            if(confirm == 'y' || confirm == 'Y'){
                cout << "You don't like to study" << endl;
                break;
            }
            else if(confirm == 'n' || confirm == 'N'){
                cout << "That's what I thought" << endl;
                break;
            }
            }
        default: // no need for break after default
            cout << "Invalid entry!!!" << endl;
    }
    
    return 0;
}