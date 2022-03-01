/*
 *  Check if a string is a palindrome using recursion. (Functional Recursion)
 */
 
#include <iostream>
#include <string>
using namespace std;

bool check_palindrome(int start, string word, int size)
{
    if (start >= size/2)
        return true;
    if (word[start] != word[size - start - 1])
        return false;
    return check_palindrome(start + 1, word, size);
        
}

int main()
{
    int start = 0;
    int size = 0;
    bool result;
    string word = "mam";
    
    size = word.size();
    result = check_palindrome(start, word, size);
    
    if (result)
        cout << "Yes it is a palindrome.\n";
    else
        cout << "No it is not a palindrome.\n";
    return 0;
}
