#include <iostream>

using namespace std;

int main(){
    
    const double usd_per_eur{1.19}; // declaring exchange rate with constant floating number
    
    cout << "===== ENTER VALUE IN EURO CURRENCY =====" << endl;
    cout << "\n===== Currency Converter =====" << endl;
    cout << "\nEnter the value here: ";
    
    // variables set to 0
    double euro{0.0};
    double dollar{0.0};
    
    cin >> euro;
    
    // calculating rates
    dollar = euro / usd_per_eur;
    
    cout << "\n" << euro << " euros is equal to $" << dollar << " (dollars)" << endl;
    
    
    return 0;
}