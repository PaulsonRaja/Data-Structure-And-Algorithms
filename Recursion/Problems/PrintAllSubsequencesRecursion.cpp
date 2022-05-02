#include <iostream>
#include <vector>
#include <string>
using namespace std;

void print_all_subsequences(string str, vector<char> &ds, int index)
{
    if (index == str.size()) {
        for (auto ch: ds) {
            cout << ch;
        }
        cout << "\n";
        return;
    }
    /* Pick condition */
    ds.push_back(str[index]);
    print_all_subsequences(str, ds, index + 1);

    /* Not pick condition */
    ds.pop_back();
    print_all_subsequences(str, ds, index + 1);
}

int main()
{
    int index = 0;
    vector<char> ds;
    string str = "abc";

    cout << "Printing all subsequences using recursion:\n";
    print_all_subsequences(str, ds, index);
    return 0;
}
