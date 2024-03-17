#include <iostream>

using namespace std;

int main(){
    
    int num{};
    const int target {10};
    cout << "\n" << endl;
    cout << "\nEnter a number to be compared to " << target << endl;
    cin >> num;
    
    if(num > 10){
        cout << num << " is greater than " << target << endl;
        int diff{num - target};
        cout << "\nThe difference is: " << diff << endl;
    }
    else if(num == 10){
        cout << num << " is equal to " << target << endl;
        cout << "Therefore there is no difference" << endl;
    }
    else{
        cout << num << " is lower than " << target << endl;
        int diff{target - num};
        cout << "\nThe difference is: " << diff << endl;
    }
        
    
    
    
    return 0;
}