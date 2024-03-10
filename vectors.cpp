#include <iostream>
#include <vector>  //include this when using vectors
using namespace std;

int main(){
    // defining a vector
    
    vector <int> test_score {45, 67, 34, 23, 77}; // initial size is 5
    
    cout << "#===== array way of accessing vectors =====#" << endl;
    cout << "\nVector at index 1: " << test_score[0] << endl;
    cout << "Vector at index 3: " << test_score[2] << endl;
    cout << "Vector at index 5: " << test_score[4] << endl;
    
    // different way of accessing vectors
    cout << "\n#===== vector way of accessing vecotrs =====#" << endl;
    cout << "\nVector at index 1: " << test_score.at(0) << endl;
    cout << "Vector at index 3: " << test_score.at(2) << endl;
    cout << "Vector at index 4: " << test_score.at(3) << endl;
    
    // adding element with push_back
    
    test_score.push_back(65); // now size of the vector is 6
    
    cout << "\nNew element added at the end: " << test_score[5] << endl;
    
    test_score.push_back(45); // now size of the vector is 7
    
    cout << "\nSeventh element has been added at the end: " << test_score[6] << endl;
    cout << "\nThere are now: " << test_score.size() << " elements in the vector" << endl;
    cout << "\nEnter a number you'd like to add: ";
    
    int new_number{0};
    cin >> new_number;
    
    test_score.push_back(new_number);
    
    cout << "\nYou just added a new number, it's " << test_score[7] << endl;
    
    cout << "\nAdd another number to the vector: ";
    
    cin >> new_number;
    test_score.push_back(new_number);
    
    cout << "\nYou just added another number. " << test_score[8] << endl;
    
    cout << "\nNow there are " << test_score.size() << " elements in the vector" << endl;
    
    cout << "\n#################################################" << endl;
    return 0;
}