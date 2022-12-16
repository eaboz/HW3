#pragma once
#include <iostream>

using namespace std;


bool is_palindrome(char str[], int s, int e)// function to test various methods of word being a palindrome
{

    if (s == e)
        return true;

    if (str[s] != str[e])
        return false;

    if (s < e + 1)
        return is_palindrome(str, s + 1, e - 1);

    return true;
}

bool isPalindrome(char str[]) // if string is only 1 letter long it is palindrome
{
    int n = strlen(str);


    if (n == 0)
        return true;

    return is_palindrome(str, 0, n - 1);
}