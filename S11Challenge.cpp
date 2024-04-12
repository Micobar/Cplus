#include <iostream>
#include <vector>
using namespace std;

char user_input(){
    char input{};
    cin >> input;
    return toupper(input);
}   

void add_numbers(vector<int> &numbers_list){
    int num{};
    cout << "Enter a number: " << endl;
    cin >> num;
    numbers_list.push_back(num);
    cout << num << " has been added to the list" << endl;
    cout <<"*************************************" << endl;
    }

double mean(vector<int> &v){
    int sum{};
    for(auto i: v)
        sum += i;
    return static_cast<double>(sum)/v.size();
}

void display_mean(vector<int> &v){
    if(v.size() == 0){
        cout << "List empty, add numbers..." << endl;
        cout <<"*************************************" << endl;
    }
    else
    cout << "Mean is equal to: " << mean(v) << endl;
    cout <<"*************************************" << endl;
}


void print_list(vector<int> &v){
    cout << "You chose to print the list" << endl;
    if(v.size() == 0)
        cout << "The list is empty" << endl;
    else{
        cout << "[";
        for(auto i: v){
            cout << i;
        }
        cout << "]" << endl;
        cout <<"*************************************" << endl;
        
    }
}

int get_largest(vector<int> &v){
    
    int num{v[0]};
    for(auto i: v){
        if(i > num)
            num = i;
    }
    return num;
}

void display_largest(vector<int> &v){
    
    if(v.size() == 0){
        cout << "There is no largest number, list empty" << endl;
    }
    else{
        cout <<"\nThe largest number is: " << get_largest(v) << endl;
        cout <<"*************************************" << endl;
    }
}

void menu(){
    cout << "\nEnter P to print out list" << endl;
    cout << "Enter A to add a number to the list" << endl;
    cout << "Enter M to display mean of the list" << endl;
    cout << "Enter S to display the smallest number" << endl;
    cout << "Enter L to display the largest number" << endl;
    cout << "Enter Q to quit" << endl;
    cout << "\nEnter one of the characters from above: " << endl;
}
    
int get_smallest(vector<int> &v){
    int num{v[0]};
    for(auto i: v)
        if(i < num)
            num = i;
    return num;
}

void display_smallest(vector<int> &v){
    
    if(v.size() == 0){
        cout << "The is no smallest number, list empty" << endl;
        cout <<"*************************************" << endl;
    }
    else{
        cout <<"\nThe smallest number is: " << get_smallest(v) << endl;
        cout <<"*************************************" << endl;
    }
}


    
int main(){
    
    vector<int> numbers_list{};
    char choice{};
    
    do{
        menu();
        choice = user_input();
        
        switch(choice){
        case'P':
        print_list(numbers_list);
        break;
        case'A':
        add_numbers(numbers_list);
        break;
        case'M':
        display_mean(numbers_list);
        break;
        case'S':
        display_smallest(numbers_list);
        break;
        case'L':
        display_largest(numbers_list);
    }
    }while(choice != 'Q');
     cout << "You chose to end the program." << endl;
     cout << "End of the program" << endl;
     cout << "*************************************" << endl;
    return 0;
}