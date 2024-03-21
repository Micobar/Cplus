#include <iostream>

using namespace std;

int main(){
    
    char input{};
    // Display a menu
    do{
        cout << "\n===== Menu =====" << endl;
        cout << " 1. for option 1" << endl;
        cout << " 2. for option 2" << endl;
        cout << " 3. for option 3" << endl;
        cout << " Q. to quit" << endl;
    
        cin >> input;
        
        if(input == '1')
            cout << "You chose option 1" << endl;
        else if(input == '2')
            cout << "You chose option 2" << endl;
        else if(input == '3')
            cout << "You chose option 1" << endl;
        else if(input == 'q' || input == 'Q')
            cout << "\nYou chose to quit" << endl;
        else
            cout << "Worng input! chose 1, 2, 3 or Q" << endl;
    }while(input !='q' && input !='Q');
        cout << "\nBye Bye!" << endl;
    
    return 0;
}