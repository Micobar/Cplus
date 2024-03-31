#include <iostream>
#include <string>

using namespace std;

int main(){
    
    
    // ENCRYPTING AND DECRYPTING A SECRET MESSAGE
    
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"#NOPQ$STXVW&YZABCD£FGHIJ=Lmno+qrstuv^xyzab)de@gh(jkl"};
    
    string encrypted_msg{};
    string secret_msg{};
    // Get an input from the user
    cout << " Enter a secret message: " << endl;
    getline(cin, secret_msg);
    
    
    
    // looking for character in an alphabet string
    for(char i: secret_msg){
        size_t position = alphabet.find(i);
        if(position != string::npos){ // if character is found then proceed
            char new_character{key.at(position)}; // assigning a new character to the string
            encrypted_msg += new_character; // appending new characted to encrypted msg
        }
        else{ // if character is not found do nothing
            encrypted_msg += i;  // appending unchanged character to the encrypted msg
        }
    }
    // Displaying encrypted message
    cout << "\n===========================" << endl;
    cout << "Message to encrypt: " << secret_msg << endl;
    cout << "Encrypted message: " << encrypted_msg << endl;
    cout << "\nPreparing for decription...." << endl;
    cout << "\nDecription in process..." << endl;
    
    string decrypted_msg{};
    
    for(char i: encrypted_msg){
        size_t pos = key.find(i);
        if(pos != string::npos){
            char new_char{alphabet.at(pos)};
            decrypted_msg += new_char;
        }
        else{
            decrypted_msg += i;
        }
    }
    cout << "\n===========================" << endl;
    cout << "Decrypted message: " << decrypted_msg << endl;
    return 0;
}