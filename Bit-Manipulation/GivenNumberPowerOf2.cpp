#include <iostream>
using namespace std;

bool is_power_of_2(int num)
{
    int set_bits = 0;

    while (num) {
        set_bits += num & 1;
        num = num >> 1;
    }
    if (set_bits == 1)
        return true;
    return false;
}

int main()
{
    int num;
    bool ret;

    cout << "Enter a number to check if it is power of 2.\n";
    cin >> num;
    ret = is_power_of_2(num);
    if (ret)
        cout << "Yes.\n";
    else
        cout << "No.\n";
    return 0;
}
