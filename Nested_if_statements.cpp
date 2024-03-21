#include <iostream>

using namespace std;

int main(){
    int score{};
    char grade{};
    cout << "\n=====Grades calculator====="<< endl;
    cout << "Enter the score from your exam: ";
    cin >> score;
    // declaring if statements
    if(score > 0 && score < 100){
        // nesting if statement, when nesting - "{}" is not being used
        if(score > 90)
            grade = 'A';
        
        else if(score > 80)
            grade = 'B';
        
        else if(score > 60)
            grade = 'C';
        
        else if(score > 30)
            grade = 'D';
        else
            grade = 'F';
        // displaying grade receinved based on entered points
        cout << "Your grade is: " << grade;
        if(grade == 'F')
            cout << ", You have failed" << endl;
        else
            cout << ", You passed!" << endl;
    }
    else{
        cout << "Incorrect number!" << endl;
    }
    return 0;
}