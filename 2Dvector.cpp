#include <iostream>
#include <vector>

using namespace std;

int main(){
    // Declaring a 2 dimentional vector
    
    vector <vector<int>> ratings
    {
        {1, 7, 3, 4},
        {2, 4, 6, 8},
        {4, 2, 1, 5}
    };
    
    
    cout << "\n===== Ratings displayed using array syntax =====" << endl;
    cout << "\nRow 1, Column 1: " << ratings[0][0] << endl;
    cout << "Row 2, Column 3: " << ratings[1][2] << endl;
    cout << "Row 3, Column 4: " << ratings[2][3] << endl;
    
    cout << "\n===== Ratings displayed using vector syntax =====" << endl;
    cout << "\nRow 1, Column 1: " << ratings.at(0).at(0) << endl;
    cout << "Row 2, Column 3: " << ratings.at(1).at(2) << endl;
    cout << "Row 3, Column 4: " << ratings.at(2).at(3) << endl;
    
    
    return 0;
}