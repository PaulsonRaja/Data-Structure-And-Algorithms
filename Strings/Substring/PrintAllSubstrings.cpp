#include <iostream>
#include <string>
using namespace std;

void print_all_substrings(string str)
{
    int size = str.size();

    for (int subStringLength = 1; subStringLength <= size; ++subStringLength) {
        for (int start = 0; start <= size - subStringLength; ++start) {
            int end = start + subStringLength - 1;
            for (int subStringIndex = start; subStringIndex <= end; ++subStringIndex) {
                cout << str[subStringIndex];
            }
            cout << "\n";
        }
    }
}

int main()
{
    string str = "abcdef";
    print_all_substrings(str);
    return 0;
}
