#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    // declaring 2 vectors
    vector <int> vector1{};
    vector <int> vector2{};
    
    // add 10 and 20 using push_back to vector1
    vector1.push_back(10);
    vector1.push_back(20);
    
    // display elements, and size of the vector1
    cout << "Element index 1 vector1: " << vector1.at(0) << endl;
    cout << "Element index 2 vector1: " << vector1.at(1) << endl;
    cout << "\nThere are " << vector1.size() << " elements in the vector1" << endl;
    
    // add 100, and 200 using push_back to vector2
    vector2.push_back(100);
    vector2.push_back(200);
    
    // display elements, and size of vector2
    cout << "\nElement index 1 vector2: " << vector2.at(0) << endl;
    cout << "Element index 2 vector2: " << vector2.at(1) << endl;
    
    cout << "\nThere are " << vector2.size() << " elements in the vector2" << endl;
    
    // declaring 2d vector
    vector <vector<int>> vector_2d{};
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    // display elements from vector_2d
    cout << "\n2 dimentional vector_2d" << endl;
    cout << "\nRow 1, column 1: " << vector_2d.at(0).at(0) << endl;
    cout << "Row 1, column 2: " << vector_2d.at(0).at(1) << endl;
    cout << "Row 2, column 1: " << vector_2d.at(1).at(0) << endl;
    cout << "Row 2, column 2: " << vector_2d.at(1).at(1) << endl;
    
    // change the value of vector1.at(0) to 1000
    vector1.at(0) = 1000;
    cout << "\nchanged the value of vector1.at(0) to: " << vector1.at(0) << endl;
    
    // display first element from the vector_2d
    cout << "\nRow 1, column 1: " << vector_2d.at(0).at(0) << endl;
    
    return 0;
}