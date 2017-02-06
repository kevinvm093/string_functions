//
//  strings.hpp
//  unit5
//
//  Created by Kevin Vallejo on 2/5/17.
//  Copyright © 2017 Kevin Vallejo. All rights reserved.
//

#ifndef strings_hpp
#define strings_hpp

#include <stdio.h>
#include "string"
using namespace std;



bool palindrome(const string & s);
bool palindrome_short(const std::string & s);
string replace_all(const string & orignal_string, const string & old_substring, const string & new_substring);


#endif

/* strings_hpp */
