#include <iostream>
#include <vector> // using a vector so this has to be included
#include <iomanip> // io manipulation operator to set precision in decimal points

using namespace std;

int main(){
    
    // declare a simple array, and display it using for loop
    
    int list[]{10,20,30}; // simple array
    
    // displaying an array using for loop
    cout << "===== Displaying a simplay array using for loop" << endl;
    for(auto i: list) // using auto instead of int to automaticly detect the type
        cout << i << endl;
    
    // Calculate the average temperature for the vector
    vector<double> temp {22.3, 28.6, 15.3};
    double ave_temp{};
    double sum{};
    for (auto t: temp){
        sum += t;
       
    }
    ave_temp = sum/temp.size();
    
    cout << "\n=====================================" << endl;
    cout << fixed << setprecision(1);  // here <iomanip> is being used. 1 decimal point displayed.
    cout << "Average temperature is " << ave_temp << " Celcius" << endl; 
    cout << "=====================================" << endl;
    
    // iterate through a collection of integers
    
    cout << "\nCollection of integers" << endl;
    for(auto arr:{2, 4, 6, 8})
        cout << arr << ", ";
    cout << endl;
    
    
    // Loop through a vector, and determine how many elements are eveny divisible by 3 or 5
    cout << "\n=====================================" << endl;
    
    int count{};
    
    vector<double> vec {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100};
    
    for(int i: vec)
        if(i % 3 == 0 || i % 5 == 0)
            ++count;
    cout << "\nThere are " << count << " divisible elements" << endl;
    
    cout << endl;
    return 0;
}