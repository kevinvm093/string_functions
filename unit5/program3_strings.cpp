/*
 Name: Kevin Vallejo
ZNUMBER: 23396767
Professor: Bullard
 Description: Program unit 5
 Date: Janurary 6 2017
 */
#include <iostream>
#include "string"
#include "strings.h"

using namespace std;

int main(int argc, const char * argv[]) {
   
    string s;
    string s1, s2,s3;
    int input= 0;
    while (input != 3){
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "For Palindrom function press:1\nFor recplace_all function press:2\nTo exit press: 3" << endl;
        cin >> input;
        
    switch (input) {
        case 1:
            cout << "~~~~Testing Palindrom function~~~" << endl;
    cout << "Enter a Palindrome, the program will verify whether your input is one or not" << endl;
    cin >> s;
    if(palindrome(s)) {
        cout << "String: " << s << " is a palindrome" << endl;
    } else {
        cout << "String: " << s << "is NOT a palindrome" << endl;
    }
            break;
    case 2:
            cout << "~~~Testing Replace_all function~~~" << endl;
            cout << "Enter Original string" << endl;
            cin.ignore();
            getline(cin, s1);
            cout << "Enter old_substring" << endl;
            cin >> s2;
            cout << "Enter new_substring" << endl;
           cin.ignore();
            getline(cin, s3);
  s = replace_all(s1, s2, s3);
    cout << s << endl;
            break;
case 3:
            cout << "exiting program" << endl;
            return 0;
default:
            cout << "invalid input try again" << endl;
    }
        
    }
    return 0;

}
