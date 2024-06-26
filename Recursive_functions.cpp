#include <iostream>

using namespace std;


unsigned long long fibonacci(unsigned long long n){
    if(n <= 1){
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2); // recursion / function calls itself
}

int main(){
    
    cout << fibonacci(5) << endl; // display 5
    cout << fibonacci(30) << endl; // display 832040
    cout << fibonacci(40) << endl; // display 102334155
    
    return 0;
}