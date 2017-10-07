//
//  main.cpp
//  PRG-5-2-Characters-for-the-ASCII-Codes
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Write a program that uses a loop to display the characters for the ASCII codes 0
//  through 127. Display 16 characters on each line.

#include <iostream>

using namespace std;

int main()
{
    int intChar = 0;
    int intCharRemainder;
    
    while(intChar <= 127)
    {
        cout << static_cast<char>(intChar);
        
        intCharRemainder = intChar % 16;
        
        if(intCharRemainder == 0)
        {
            cout << endl;
        }
        
        intChar++;
    }
    
    cout << endl;
    
    return 0;
}
