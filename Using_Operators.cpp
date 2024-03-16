#include <iostream>

using namespace std;

int main(){
    // define conversion values
    const int dollar_value{100};
    const int quarter_value{25};
    const int dime_value{10};
    const int nickel_value{5};
    
    int change{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{}, balance{};
    
    cout << "Enter the value in cents: ";
    cin >> change;
    
    dollars = change / dollar_value;
    
    balance = change - (dollars * dollar_value);
    
    quarters = balance / quarter_value;
    balance -= quarters * quarter_value;
    
    dimes = balance / dime_value;
    balance -= dimes * dime_value;
    
    nickels = balance / nickel_value;
    balance -= nickels * nickel_value;
    
    pennies = balance;
    
    cout << "\n Entered value: " << change << endl;
    cout << "\nDollars: " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout <<"Pennies: " << pennies << endl;
    
    return 0;
}