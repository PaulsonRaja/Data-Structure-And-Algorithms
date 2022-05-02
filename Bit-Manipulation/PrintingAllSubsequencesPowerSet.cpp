#include <iostream>
#include <string>
using namespace std;

void print_all_subsequences(string str)
{
    string res = "";
    int size = str.size();

    cout << "Printing all the subsequences using power set method:" << "\n";
    for (int i = 0; i < (1 << size); ++i) {
        res = "";
        for (int j = 0; j < size; ++j) {
            if (i & (1 << j)) {
                res += str[j];
            }
        }
        cout << res << "\n";
    }
}

int main()
{
    string str = "abc";

    print_all_subsequences(str);
    return 0;
}
