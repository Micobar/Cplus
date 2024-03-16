#include <iostream>

using namespace std;

int main(){
    
    int num1 {100};
    int num2 {200};
    int result {0};
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    
    cout << num2 << " - " << num1 << " = " << num1 - num2 << endl;
    
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    
    cout << num2 << " / " << num1 << " = " << num1 / num2 << endl;
    
    cout << "\nstoring equation in result variable" << endl;
    result = num2 + num1;
    
    cout << num2 << " + " << num1 << " = " << result << endl;
    
    return 0;
}