#include <iostream>
#include <vector>
#include <string>

using namespace std;

void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &v);
void print_vector(const vector<string> &v);


void pass_by_ref1(int &num){
    num = 1000;
}

void pass_by_ref2(string &s){
    s = "Changed";
}

void pass_by_ref3(vector<string> &v){
    v.clear(); // clears elements from the vector
}

void print_vector(const vector<string> &v){
    for(auto i: v){
        cout << i << " ";
    }
}
int main(){
    
    
    int num{20};
    int another_num{10};
    
    cout << "Numbers before change: " << num << " and " << another_num << endl;
    cout << "\nUsing function pass_by_ref1..." << endl;
    pass_by_ref1(num);
    pass_by_ref1(another_num);
    cout << "Numbers after change: " << num << " and " << another_num << endl;
    
    string x = "Unchanged";
    
    cout << "\nString is now " << x << endl;
    cout << "\nUsing function pass_by_ref2..." << endl;
    pass_by_ref2(x);
    
    cout << "String is now " << x << endl;
    
    vector<string> vec{"Joker", "Crystal", "Loki"};
    cout << endl;
    print_vector(vec); // printing out vector
    pass_by_ref3(vec); // clearing vector
    print_vector(vec); // printing out empty vector
    return 0;
}

