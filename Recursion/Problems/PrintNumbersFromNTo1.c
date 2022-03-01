/* 
 * Print numbers from n to 1 using recursion.
 */

#include <stdio.h>

void print_numbers(int num)
{
    if (num == 0)
        return;
    printf("%d\n", num);
    print_numbers(num - 1);
}

int main()
{
    int num = 0;
    
    printf("Enter the number:\n");
    scanf("%d", &num);
    
    printf("Output:\n");
    print_numbers(num);
    return 0;
}
