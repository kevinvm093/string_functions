//
//  strings.cpp
//  unit5
//
//  Created by Kevin Vallejo on 2/5/17.
//  Copyright © 2017 Kevin Vallejo. All rights reserved.
//

#include "strings.h"
#include "iostream"
#include "stdio.h"

using namespace std;
bool palindrome(const string & s)
{
    cout << "palindrome called" << endl;
    int i = 0;
    int j = 1;
    
    for (i=0; i< s.length(); i++) {
        if(s[i] == s[s.length()-j]){
            
        }else{
            cout << "does not match" << endl;
            return false;
        }
        j++;
    }
    return true;
}

bool palindrome_short(const std::string & s)
{
	string r = s; std::reverse(r.begin(), r.end());
	return s == r;
}

string replace_all(const string & orignal_string, const string & old_substring, const string & new_substring)
{
    string s = orignal_string;
  
    
    int position = (int)s.find(old_substring);
    if (position != string::npos){
        s.replace(position, old_substring.length(), new_substring);
    } else{
        cout << old_substring << " not found\n";
    }
  
    return s;
}
