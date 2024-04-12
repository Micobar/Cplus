#include <iostream>

using namespace std;

const double pi {3.14159};

// function calc_area() to calculate the area of the circle, this function returns result
double calc_area(double radius){
    return pi * radius * radius;
}

// declare function called area circle
// function with "void" doesn't return anything therefore function calc_area is needed to return the result
void area_circle(){
    double radius{};
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle with radius " << radius << " is " << calc_area(radius) << endl;
}

// declare a function volume_cylinder()
void volume_cylinder(){
    double radius{};
    double height{};
    cout << "\nEnter radius: ";
    cin >> radius;
    cout << "\nNow enter height: ";
    cin >> height;
    double volume = pi * radius * radius * height;
    cout << "\nVolume is equal to: " << volume << endl; // here result is returned by using the output
}
int main(){
    
    // calling a function area_circle()
    area_circle();
    // calling a function volume_cylinder()
    volume_cylinder();
    
    return 0;
}

