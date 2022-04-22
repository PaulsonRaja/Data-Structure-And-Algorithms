#include <iostream>
using namespace std;

void toggle_kth_bit(int &num, int pos)
{
    num = num ^ (1 << pos);
}

int main()
{
    int num = 0;
    int pos = 0;

    printf("Enter the number:\n");
    scanf("%d", &num);

    printf("Enter the bit postion to be set (0 based indexing):\n");
    scanf("%d", &pos);

    toggle_kth_bit(num, pos);

    printf("After toggling the %d bit: %d\n", pos, num);
    return 0;
}
