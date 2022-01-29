//////////////////////////////////////////////////////////////////////////////////////////////////////
//							ECC CIS-121 Spring 2021													//
//																									//
//	Type of Assignment:		Final 															    	//
//	Problem Number:			3																		//
//	Section Number			121-800																	//
//	Author:					Fazal Quadri															//
//	Date Assigned:			12/15/2021											    		//
//	Project Name:			 													//
//	File Name:				passwordChecker.cpp															//
//																									//
//	Purpose of Program:		check fi password has upper lower and a number									//
//								                                                    				//
//		                                           													//
//////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
using namespace std;

int main()
{
    string password;
    bool passSize = false, passCap = false, passLow = false, passNum = false;
    cout << "he password must have six characters :\n";
    cout << "at least one upper\n";
    cout << "at least one lower\n";
    cout << "at least one numer\n";
    cin >> password;

    //return true if password is 6 characters
    if (password.length() == 6)
    {
        passSize = true;
    }

    for (int i = 0; i < password.length(); i++)
    {
        //return true if upper
        if (isupper(password[i]))
        {
            passCap = true;
        }
        //return true if lower
        if (islower(password[i]))
        {
            passLow = true;
        }
        ///return true if number
        if (!(isalpha(password[i])))
        {
            passNum = true;
        }
    }

    //display what is worng with password 
    if (passCap == false || passLow == false || passNum == false || passSize == false)
    {
        cout << "The password is not valid because ";
        if (passCap == false)
        {
            cout << "\nyour missing a upper case letter";
        }
        if (passLow == false)
        {
            cout << "\nyour missing a lower case letter";
        }
        if (passNum == false)
        {
            cout << "\nyour missing a number";
        }
        if (passSize == false)
        {
            cout << "\nyour pass word is smaller/bigger than six characters.";
        }
    }

    //display when password works
    if ((passCap == true && passLow == true && passNum == true && passSize == true))
    {
        cout << "The password is valid.";
    }
}