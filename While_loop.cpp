#include <iostream>

using namespace std;

int main(){
    
    // Use while loop to countdown from user input to 0
    int num{};
    
    cout << "Enter a positive integer to start the countdown" << endl;
    cin >> num;
    
    cout << "\n===== COUNTDOWN =====" << endl;
    while(num >= 0){
        cout << num << endl;
        --num;
    }
    cout << "===== End of countdown =====" << endl;
    
    
    // Another example of while loop counting up
    int num2{10};
    int num3{};
    
    cout << "Enter a positive integer less than 5 to start the countup" << endl;
    cin >> num3;
    while(num3 <= num2){
        cout << num3;
        num3++;
    }
    
    
    
    return 0;
}