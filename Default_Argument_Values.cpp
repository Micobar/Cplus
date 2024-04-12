#include <iostream>

using namespace std;


// Once you define fist parameter you have to define others.
// if base_cost is defined then tax_rate, and shipping has to be defined as well
double calc_cost(double base_cost = 100, double tax_rate = 0.06, double shipping = 3.50);


double calc_cost(double base_cost, double tax_rate, double shipping){
    return base_cost += (base_cost * tax_rate) + shipping;
}

int main(){
    double cost{};
    
    cost = calc_cost(300, 0.08, 4.25); // no default values are being used
    cout << "Cost is: " << cost << endl;
    
    
    cost =  calc_cost(200.0); // tax rate, and shipping will be default
    cout << "Cost is: " << cost << endl;
    
    cost = calc_cost(); // all values are default
    cout << "Cost is: " << cost << endl;
    return 0;
}