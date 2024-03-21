#include <iostream>

using namespace std;

int main(){
    
    
    // Add odd numbers between 1, and 15
    int sum{};
    int sum2{};
    
    for(int i{1}; i<=15; ++i){
        if(i % 2 != 0) // " != " or " == " determines even or odd
            sum += i;
    }
    cout << sum << endl;    
    
    // Add even numbers between 1, and 15
    
    for(int x{1}; x<=15; ++x){
        if(x % 2 == 0)
            sum2 += x;
    }
    cout << sum2 << endl;
    return 0;
}