#include <iostream>
#include <string>
#include <vector>


using namespace std;
// declaring different types of the same function
void print(int);
void print(double);
void print(string, string);
void print(string);
void print(vector<string>);

void print(int num){
    cout << "\nPrinting int: " << num << endl;
}

void print(double num){
    cout << "Printing double " << num << endl;
}

void print(string s){
    cout << "Printing string: " << s << endl;
}

void print(string s, string t){
    cout << "Printing 2 strings: " << s << " and " << t << endl;
}

void print(vector<string> v){
    cout << "Printing vector: ";
    for(auto i: v){
        cout << i + " ";
    }
    cout << endl;
}
int main(){
    
    cout << "===== Overloaded functions =====" << endl;
    print(100);
    print(25.1);
    print("C-style string");
    
    string s{"C++ string"};
    string t{"another C++ string"};
    print(s);
    print(s, t);
    
    vector<string> v{"Joker", "Crystal", "Loki"};
    print(v);
    
    cout << "\n*********************************" << endl;
    return 0;
}