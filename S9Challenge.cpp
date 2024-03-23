#include <iostream>
#include <vector>

using namespace std;


int main(){
    // display menu 
    char choice{};
    vector<int> numbers{2,6,4,45,21};
    do{
        cout << "\n===== Menu =====" << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "==================" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;
        // Declaring choice Q
        if(choice=='Q' || choice=='q')
            cout << "You have pressed Q to exit" << endl;
            
        // Declaring choice P
        else if(choice=='P' || choice=='p'){
            if(numbers.size()==0){
                cout << "[] = list is empty" << endl;
            }
            else{
                cout << "[";
                for(auto i: numbers)
                    cout << i << " ";
                cout << "]" << endl;
            }
        }
        
        // Declaring choice A
        else if(choice=='A' || choice=='a'){
            int digit{};
            cout << "Enter a digit to add to the list: ";
            cin >> digit;
            numbers.push_back(digit);
        }
        
        //Declaring choice M
        else if(choice=='M' || choice=='m'){
            if(numbers.size()==0 || numbers.size()==1)
                cout << "\nList is empty or there is only 1 element - add few numbers to the list" << endl;
            else{
                int total{};
                for(auto i: numbers)
                    total = total + i;
                cout << "\nMean of the list is equal to: " << static_cast<double>(total)/numbers.size() << endl;
            }
        }
        
        //Declaring choice L
        else if(choice=='L' || choice=='l'){
            if(numbers.size()==0)
                cout << "Nothing to display" << endl;
            else{
                int largest{numbers.at(0)};
                for(auto num: numbers){
                    if(num > largest)
                        largest = num;
                }
                cout << "The biggest number is: " << largest << endl;
            }
        }
        
        //Declaring choice S
        else if(choice=='S' || choice=='s'){
            if(numbers.size()==0)
                cout << "Nothing to display" << endl;
            else{
                int smallest{numbers.at(0)};
                for(auto num: numbers){
                    if(num < smallest)
                        smallest = num;
                }
                cout << "The smallest number is: " << smallest << endl;
            }
        }
    }while(choice != 'Q' && choice != 'q');
        cout << "End of the program, thank you!" << endl;
    return 0;
}