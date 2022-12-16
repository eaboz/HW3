// HW3-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "HW3-2.h"

int main()
{
    char str[] = ""; // initialize string

    cout << "Enter word to test:\n"; //input word to test
    cin >> str;
    cout << "\n";

    if (isPalindrome(str)) // function call to test word
        cout << str <<" is a palindrome";
    else
        cout << str <<" is not a palindrome";

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
