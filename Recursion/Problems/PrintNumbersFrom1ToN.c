/* 
 * Print numbers from 1 to n using recursion.
 */

#include <stdio.h>

void print_numbers(int num)
{
    if (num == 0)
        return;
    print_numbers(num - 1);
    printf("%d\n", num);
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
